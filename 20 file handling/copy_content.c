#include <stdio.h>

int main()
{
    // Open the source file for reading
    FILE *sourceFile = fopen("D:\\student.txt", "r");

    // Check if the source file opened successfully
    if (sourceFile == NULL)
    {
        perror("Error opening source file");
        return 1; // Return an error code
    }

    // Open the destination file for writing
    FILE *destinationFile = fopen("D:\\info.txt", "w");

    // Check if the destination file opened successfully
    if (destinationFile == NULL)
    {
        perror("Error opening destination file");
        fclose(sourceFile); // Close the source file before exiting
        return 1;           // Return an error code
    }

    // Read characters from the source file and write them to the destination file
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF)
    {
        fputc(ch, destinationFile);
    }

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully!\n");

    return 0; // Return success
}
