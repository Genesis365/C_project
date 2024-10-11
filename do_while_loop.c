#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the starting value: \n");
    scanf("%d", &start);
    printf("Enter the ending value: \n");
    scanf("%d", &end);

    printf("Do-While Loop:\n");
    int i = start;
    do {
        printf("%d ", i);
        int square = i * i;
        printf("(square: %d) ", square);
        i++;
    } while (i <= end);

    printf("\n");
    return 0;
}
