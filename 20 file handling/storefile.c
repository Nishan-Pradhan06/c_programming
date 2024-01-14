#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a cricketer
struct Cricketer
{
    char name[50];
    int runs;
    int wickets;
};

// Function to compare cricketers based on the number of wickets taken
int compareCricketers(const void *a, const void *b)
{
    return ((struct Cricketer *)b)->wickets - ((struct Cricketer *)a)->wickets;
}

int main()
{
    // Declare an array of structures to store information about 20 cricketers
    struct Cricketer cricketers[20];

    // Input information for each cricketer
    for (int i = 0; i < 20; i++)
    {
        printf("Enter details for Cricketer %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", cricketers[i].name);
        printf("Runs Scored: ");
        scanf("%d", &cricketers[i].runs);
        printf("Wickets Taken: ");
        scanf("%d", &cricketers[i].wickets);
        printf("\n");
    }

    // Use qsort to sort cricketers based on the number of wickets taken
    qsort(cricketers, 20, sizeof(struct Cricketer), compareCricketers);

    // Display the sorted list of cricketers
    printf("\nCricketers sorted by wickets taken:\n");
    for (int i = 0; i < 20; i++)
    {
        printf("Name: %-20s Runs: %-5d Wickets: %-5d\n", cricketers[i].name, cricketers[i].runs, cricketers[i].wickets);
    }

    return 0;
}
