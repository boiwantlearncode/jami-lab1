#include <stdio.h>
#include <math.h>

int fact(n) {
    int result = 1;
    for (; n > 0; n--) {
        result *= n;
    }
    
    // n = 2
    // n > 0? yes
    // result *= 2 --> result = 2
    // n = 1
    // n > 0? yes
    // result *= 1 --> result = 2
    // n = 0
    // n > 0? no
    // exits for loop and return result
    

    return result;
}

int main() {
    // int n;
    // printf("n: ");
    // scanf("%d", &n);
    // printf("Factorial of %d: %d", n, fact(n));
    
    
    float x, result;
    result = 1;
    
    printf("Enter x:\n");
    scanf("%f", &x);
    
    // Method 1
    // result = 1 + (x/fact(1)) + pow(x, 2)/fact(2) + pow(x, 3)/fact(3) + pow(x, 4)/fact(4) + pow(x,5)/fact(5) + pow(x, 6)/fact(6) + pow(x,7)/fact(7) + pow(x,8)/fact(8) + pow(x,9)/fact(9) + pow(x,10)/fact(10);
    
    // Method 2
    for (int i = 1; i <= 10; i++) {
        result += pow(x, i)/fact(i);
    }
    
    printf("Result = %.2f", result);

    return 0;
}
