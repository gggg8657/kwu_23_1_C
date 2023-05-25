#include <stdio.h>

void swap(int *p1, int *p2);

int main()
{
    int a, b;
    int *p1, *p2;
    p1 = &a; //make pointer p1 to point variable a's address
    p2 = &b; //make pointer p2 to point variable b's address
    printf("*\t*\t*\t*initiating program*\t*\t*\t*\n\n\nvalue_A값 입력 : "); //get value from user
    scanf("%d", &a);
    printf("value_B값 입력 : "); //get value from user
    scanf("%d", &b); 

    swap(p1,p2); //swap value of a and b

    printf("changed value of variable P1 is %d \nchanged value of variable P2 is %d \n", *p1, *p2);
    printf("changed value of variable A is %d \nchanged value of variable B is %d \n", a, b);
    printf("\n\n*\t*\t*\t*end of the program*\t*\t*\t*\n");
    return 0;
}

void swap(int *p1, int *p2){
    int tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}