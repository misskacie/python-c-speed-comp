#include <stdio.h>
#include <time.h>

int fib(int n) {
    if ( n <= 1) {
        return n;
    } 
    return fib(n-1) + fib(n-2);
}

int main() {
    int num;
    printf("Enter a number to calculate fib(n) in C: ");
    scanf("%d", &num); 

    clock_t t = clock();
    printf("%d\n", fib(num));
    double time_taken = ((double) clock() - t) / CLOCKS_PER_SEC;
    
    printf("Seconds Taken: %lf\n", time_taken); 
}
