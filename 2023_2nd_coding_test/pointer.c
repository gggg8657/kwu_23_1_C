#include <stdio.h>
#include <string.h>
//RESULT : When snow melts, Spring will come.
//예제보다 살짝 어려움
int fix(char *ptr1, char *ptr2);

int main(){
    char arr1[255] = "When snow melts, it becomes water.";
    char arr2[255] = "Spring will come.";
    char *ptr1 = arr1;
    char *ptr2 = arr2;
    printf("BEFORE :\t%s\n", arr1);
    fix(ptr1, ptr2);
    printf("AFTER  :\t%s\n", arr1);
}

int fix(char *ptr1,char *ptr2){
    int flag =0;
    for (int iter = 0; iter<255; iter++)
    {
        //printf("%c", *(ptr1+iter));
        if(*(ptr1+iter)==',')
        {
            flag =1;
            iter = iter+2;
        }
        if(flag ==1)
        {
            *(ptr1+iter) = '\0';
        }
    }
    strcat(ptr1, ptr2);
}   
