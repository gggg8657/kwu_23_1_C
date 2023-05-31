/*
RESULT : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/

//simple sorting prob
//pointer

#include <stdio.h>
 
#define COUNT 20
 
int bubble(int *ptr);

int main()
{
    int data[COUNT]
        = { 5 , 15 , 7 , 20 , 1 ,
            4 , 10 , 2 , 8  , 11,
            9 ,  6 , 13, 18 ,  3,
            16, 12 , 14, 17 , 19 };
    int *pd = &data;
    
    
    printf("original data : ");
    for (int i = 0; i < COUNT; i++)
    {
        printf("%d ", *(pd+i));
    }
    
    bubble(pd);

    printf("\n\nRESULT : ");
    for (int i = 0; i < COUNT; i++)
    {
        printf("%d ", data[i]);
    }
    
    printf("\n\n*\t*\t*\t*end of the program*\t*\t*\t*\n");
    return 0;
}


/* function description

    1. 함수명, 파라미터명 수정하지 않습니다.
    2. 아래 함수를 통해, 결과를 다음과 같이 만드십시오.
    "RESULT : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"
    출력예시 : 
*/

int bubble(int *ptr){    
    int tmp=0;
    for (int i = 0; i < COUNT - 1; i++)
    {
        for (int j = 0; j < COUNT - 1 - i; j++)
        {
            if (*(ptr+j) > *(ptr+j + 1))
            {
                tmp = *(ptr+j);
                *(ptr+j) = *(ptr+j+1);
                *(ptr+j+1) = tmp;
            }
        }
    }
}


