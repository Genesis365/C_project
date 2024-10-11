#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    printf("Enter the starting value: \n");
    scanf("%d", &start);
    printf("Enter the ending value: \n");
    scanf("%d", &end);
    
    printf("For Loop:\n");
    for (int i = start; i <= end; i++) {
        printf("%d\n", i);
        
        
        int square = i * i;
        int cube = i * i * i;
        
        
        float square_root = sqrt(i);
        float cube_root = cbrt(i);
        
        printf("The square is %d\n", square);
        printf("The square root is %.2f\n", square_root);
        printf("The cube is %d\n", cube);
        printf("The cube root is %.2f\n", cube_root);
    }
    
    printf("\n");
    return 0;
}
