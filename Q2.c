#include <stdio.h>

// Learning point: 
// - one of the values in division has to be a float
// - formatting floats in string e.g. %.<number>f
// - remember to reset
// - remember format properly

int main() {
    int lines, value;
    float count, sum, average;

    printf("Enter number of lines:\n");
    scanf("%d", &lines);
    for (int i = 0; i < lines; i++) {
        sum = 0;
        count = 0;
        average = 0;
        
        printf("Enter line %d (end with -1):\n", i+1);
        
        scanf("%d", &value);
        while (value != -1) {
            count += 1;
            sum += value;
            scanf("%d", &value);
        }
        
        // printf("%d\n", sum);
        // printf("%d\n", count);

        printf("Count: %d\n", count);
        printf("Sum: %d\n", sum);
        if (sum != 0) {
            average = sum / count;
        }
        printf("Average = %.2f\n", average);
    }
    
    return 0;
}
