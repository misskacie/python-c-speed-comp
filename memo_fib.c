#include <stdio.h>
#include <time.h>
#include <stdint.h>
#define MAX_N 50

long long int fib(int n) {
    long long int nums[MAX_N+1] = {0, 1};
    if (n <= 1)
        return n;

    for(int i = 2; i <= n; i++) {
        nums[i] = nums[i-1] + nums[i-2];
    }

    return nums[n];
}

int main() {
    int num;
    printf("Enter a number to calculate fib(n) in C: ");
    scanf("%d", &num); 
    while (num > MAX_N || num < 0) {
        printf("Enter an integer 0 <= n <= %d: ",MAX_N);
        scanf("%d", &num);
    }

    clock_t t = clock();
    printf("%lld\n", fib(num));
    double time_taken = ((double) clock() - t) / CLOCKS_PER_SEC;
    
    printf("Seconds Taken: %lf\n", time_taken); 
}
