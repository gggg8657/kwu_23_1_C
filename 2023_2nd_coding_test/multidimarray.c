#include <stdio.h>

//예제보다 쉬움

int printmatrix(int arr[5][5]);
int summation(int arr[5][5]);

int main(){
    int arr[5][5]={
        {2,3,4,5,0},
        {5,5,4,7,0},
        {3,7,2,4,0},
        {8,6,2,9,0},
        {0,0,0,0,0}
    };

    printmatrix(arr);
    summation(arr);
    printmatrix(arr);
    return 0;
}

int printmatrix(int arr[5][5]){
    printf("\t[국어]\t[영어]\t[수학]\t[과학]\t[학생별 총점]\n");
    for(int iter=0; iter<5; iter++)
    {
        if (iter ==0)
            printf("[채원]\t");
        else if (iter ==1)
            printf("[은채]\t");
        else if (iter ==2)
            printf("[윤진]\t");
        else if (iter ==3)
            printf("[주하]\t"); 
        else if (iter ==4)
            printf("[총점]\t"); 
        for(int iter2=0; iter2<5; iter2++){
            printf(" [%d]\t", arr[iter][iter2]);
        }
        printf("\n");
    }
    return 0;
}

int summation(int arr[5][5]){
    for(int tmp=0; tmp<4; tmp++)
        for(int tmp2=0; tmp2<4; tmp2++)
        {
            arr[tmp][4] += arr[tmp][tmp2];
            arr[4][tmp] += arr[tmp2][tmp];
        }
    return 0;
}