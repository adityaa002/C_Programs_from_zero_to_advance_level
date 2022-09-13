#include <stdio.h>
int main()
{
    int height, base;
    printf("Enter the Height of parallelogram\n");
    scanf("%d", &height);

    printf("Enter the base of parallelogram\n");
    scanf("%d", &base);

    printf("The total area of parallelogram is %d", height * base);
    return 0;
}