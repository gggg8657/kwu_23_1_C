#include <stdio.h>

void swap(int *p1, int *p2);

int main()
{
    int a, b;
    int *p1, *p2;
    p1 = &a;
    p2 = &b;
    printf("*\t*\t*\t*initiating program*\t*\t*\t*\n\n\nvalue_A값 입력 : ");
    scanf("%d", &a);
    printf("value_B값 입력 : ");
    scanf("%d", &b);

    swap(p1,p2);

    printf("changed value of variable of A is %d \nchanged value of variable of B is %d \n", *p1, *p2);
    printf("\n\n*\t*\t*\t*end of the program*\t*\t*\t*\n");
    return 0;
}

void swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}