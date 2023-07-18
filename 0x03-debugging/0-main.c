#include "main.h"

void positive_or_negative(int num)
{
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

int main(void)
{
    int i;
    i = 0;
    positive_or_negative(i);
    return 0;
}
