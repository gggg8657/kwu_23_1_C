#include <stdio.h>

int main()
{
    int a, b, tmp;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("*\t*\t*\t*initiating program*\t*\t*\t*\n\n\nvalue_A값 입력 : ");
    scanf("%d", &a);
    printf("value_B값 입력 : ");
    scanf("%d", &b);

    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
    printf("changed value of variable of A is %d \nchanged value of variable of B is %d \n", *p1, *p2);
    printf("\n\n*\t*\t*\t*end of the program*\t*\t*\t*\n");
    return 0;
}