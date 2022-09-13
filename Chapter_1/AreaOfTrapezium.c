#include <stdio.h>
int main()
{
    int base1, base2, height;
    printf("Enter the base1 of trapazium\n");
    scanf("%d", &base1);
    printf("Enter the base2 of trapazium\n");
    scanf("%d", &base2);

    printf("Enter the height of trapazium\n");
    scanf("%d", &height);
    printf("The total area of  the trapezium is %d", (base1 + base2)/2*height);
    return 0;
}