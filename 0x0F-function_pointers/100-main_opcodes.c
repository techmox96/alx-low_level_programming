#include <stdio.h>
#include <stdlib.h>

void print_opcodes(const char *start, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printf("%02hhx", start[i]);
        if (i < length - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes <= 0) {
        printf("Error\n");
        return 2;
    }

    // Get the starting address of the main function
    char *main_address = (char *)main;

    print_opcodes(main_address, num_bytes);

    return 0;
}
