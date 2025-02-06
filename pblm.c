#include <stdio.h>

int main() {
    int i = 1, sum = 0;  
    printf("Even numbers below 20:\n");
    
    do {
        if (i % 2 == 0) {
            printf("%d ", i);
            sum += i;  
        }
        i++;
    } while (i < 20);

    printf("\nSum of even numbers below 20: %d\n", sum); 
    return 0;
}



