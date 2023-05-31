#include <stdio.h>
#include <string.h>

//예제 수준
//입력 한 숫자를 역순으로 출력시키기

int main(){
    int arr[10] = {0, };
    for (int iter =0; iter<10; iter++)
        scanf("%d", &arr[iter]);
    for(int iter2=0; iter2<10; iter2++)
        printf("[%d]\t", *(arr+sizeof(arr)/4-1-iter2));
    printf("\n");
    
    char arr2[1024];
    scanf("%s", &arr2);
    for(int iter3=0; iter3<10; iter3++){
        printf("%c", *(arr2+strlen(arr2)-1-iter3));
        if(arr2[iter3+1]=='\0'){
            printf("\n");
            break;
        }
    }
    return 0;
}