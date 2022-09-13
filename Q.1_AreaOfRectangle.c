#include <stdio.h>
int main()
{
    int length, bredth;
    printf("Enter the lenth of rectangle\n");
    scanf("%d", &length);

    printf("Enter the bredth of rectangle\n");
    scanf("%d", &bredth);

    printf("The area of the rectangle is %d\n", length * bredth);
    return 0;
}