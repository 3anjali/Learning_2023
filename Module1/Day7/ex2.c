#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void copyFile(FILE *source, FILE *destination, int option) {
    char ch;
    int sentenceStart = 1;

    while ((ch = fgetc(source)) != EOF) {
        switch (option) {
            case 'u':  // Convert to Upper Case
                ch = toupper(ch);
                break;
            case 'l':  // Convert to Lower Case
                ch = tolower(ch);
                break;
            case 's':  // Convert to Sentence Case
                if (sentenceStart) {
                    ch = toupper(ch);
                    sentenceStart = 0;
                } else {
                    ch = tolower(ch);
                }

                if (ch == '.' || ch == '?' || ch == '!') {
                    sentenceStart = 1;
                }
                break;
            default:
                break;
        }
        fputc(ch, destination);
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s <option> <source_file> <destination_file>\n", argv[0]);
        printf("Options:\n");
        printf("-u: Convert to Upper Case\n");
        printf("-l: Convert to Lower Case\n");
        printf("-s: Convert to Sentence Case\n");
        return 1;
    }

    int option = argv[1][1];
    FILE *source = fopen(argv[2], "r");
    FILE *destination = fopen(argv[3], "w");

    if (source == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }
        if (destination == NULL) {
        printf("Error opening destination file.\n");
        return 1;
    }

    copyFile(source, destination, option);

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}