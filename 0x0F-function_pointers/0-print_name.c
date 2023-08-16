#include <stdio.h>

void print_name(char *name, void (*f)(char *)) {
    f(name);
}

// Example function to be passed as the second argument to print_name
void print_with_greeting(char *name) {
    printf("Hello, %s!\n", name);
}

int main() {
    char myName[] = "John";
    
    print_name(myName, print_with_greeting);

    return 0;
}
