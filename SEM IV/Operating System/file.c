#include <stdio.h>

int main()
{
    FILE *file;
    long int size;
    char filename[100];
    int choice;

    do {
        // Display menu options
        printf("\n\nMenu:\n");
        printf("1. Read file\n");
        printf("2. Write file\n");
        printf("3. Display file size\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Read file
                printf("Enter the file name: ");
                scanf("%s", filename);
                file = fopen(filename, "r");
                if (file == NULL) {
                    printf("File not found.\n");
                    break;
                }
                printf("File contents:\n");
                char c = getc(file);
                while (c != EOF) {
                    putchar(c);
                    c = getc(file);
                }
                fclose(file);
                break;

            case 2:
                // Write file
                printf("Enter the file name: ");
                scanf("%s", filename);
                file = fopen(filename, "w");
                if (file == NULL) {
                    printf("Could not create file.\n");
                    break;
                }
                printf("Enter text to write to file:\n");
                char text[100];
                scanf(" %[^\n]s", text);
                fprintf(file, "%s", text);
                fclose(file);
                break;

            case 3:
                // Display file size
                printf("Enter the file name: ");
                scanf("%s", filename);
                file = fopen(filename, "r");
                if (file == NULL) {
                    printf("File not found.\n");
                    break;
                }
                fseek(file, 0, SEEK_END);
                size = ftell(file);
                printf("File size is %ld bytes.\n", size);
                fclose(file);
                break;

            case 4:
                // Exit program
                printf("Exiting...\n");
                break;

            default:
                // Invalid input
                printf("Invalid input. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
