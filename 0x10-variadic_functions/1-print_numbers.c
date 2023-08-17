#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...) {
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        printf("%d", num);

        if (i < n - 1 && separator != NULL) {
            printf("%s", separator);
        }
    }

    va_end(args);
    
    printf("\n");
}

int main() {
    print_numbers(", ", 5, 1, 2, 3, 4, 5);
    print_numbers("-", 3, 10, 20, 30);
    print_numbers(NULL, 4, 100, 200, 300, 400);
    
    return 0;
}
