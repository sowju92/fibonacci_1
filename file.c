#include <stdio.h>
void fibonacci() {

unsigned long long fibonacci_iterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long next;

    for (int i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n = 10;
    printf("The %dth Fibonacci number is: %llu\n", n, fibonacci_iterative(n));
   // return 0;
}
}
