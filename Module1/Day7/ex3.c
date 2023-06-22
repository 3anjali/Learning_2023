#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

// Define the structure for each log entry
struct LogEntry {
    int entry_no;
    char sensor_no[3];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};

// Function to extract each line in the CSV file and store it in an array of structures
int extract_logs(const char* file_path, struct LogEntry* logs) {
    FILE* file = fopen(file_path, "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", file_path);
        return -1;
    }

    char line[100];
    fgets(line, sizeof(line), file); // Skip the header row

    int entry_count = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        struct LogEntry log_entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]", &log_entry.entry_no, log_entry.sensor_no,
            &log_entry.temperature, &log_entry.humidity, &log_entry.light, log_entry.timestamp);
        logs[entry_count] = log_entry;
        entry_count++;
    }

    fclose(file);
    return entry_count;
}

// Function to display the contents of the array of structures
void display_logs(struct LogEntry* logs, int entry_count) {
    for (int i = 0; i < entry_count; i++) {
        struct LogEntry log_entry = logs[i];
        printf("Entry No: %d\n", log_entry.entry_no);
        printf("Sensor No: %s\n", log_entry.sensor_no);
        printf("Temperature: %.1f\n", log_entry.temperature);
        printf("Humidity: %d\n", log_entry.humidity);
        printf("Light: %d\n", log_entry.light);
        printf("Timestamp: %s\n", log_entry.timestamp);
        printf("-----------------------\n");
    }
}

int main() {
    struct LogEntry logs[MAX_ENTRIES];
    int entry_count = extract_logs("data.csv", logs);
    if (entry_count > 0) {
        display_logs(logs, entry_count);
    } else {
        printf("No log entries found.\n");
    }
    return 0;
}