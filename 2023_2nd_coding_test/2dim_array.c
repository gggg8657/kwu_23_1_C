// matrix calculator
// 2d array + thinking
//어려움 이 문제 1개와 
#define MAT_MAX_SIZE 5
#include <stdio.h>

int sum(int arr1[MAT_MAX_SIZE][MAT_MAX_SIZE], int arr2[MAT_MAX_SIZE][MAT_MAX_SIZE]);
int mul(int arr1[MAT_MAX_SIZE][MAT_MAX_SIZE], int arr2[MAT_MAX_SIZE][MAT_MAX_SIZE]);
int print_matrix(int arr[MAT_MAX_SIZE][MAT_MAX_SIZE]);

int result1[MAT_MAX_SIZE][MAT_MAX_SIZE] = {0,};
int result2[MAT_MAX_SIZE][MAT_MAX_SIZE] = {0,};

int main()
{
    int arr1[5][5] = {
        {1,4,2,3,5},
        {9,4,2,1,4},
        {3,3,3,3,3},
        {7,6,8,5,4},
        {3,2,4,5,1}
    };
    int arr2[5][5]={
        {3,2,4,5,1},
        {9,4,2,1,4},
        {1,4,2,3,5},
        {3,3,3,3,3},
        {7,6,8,5,4}
    };
    
    printf("Original MATRIX 1 \n\t[1]\t[2]\t[3]\t[4]\t[5]\t\n");
    print_matrix(arr1);
   
    printf("Original MATRIX 2 \n\t[1]\t[2]\t[3]\t[4]\t[5]\t\n");
    print_matrix(arr2);

    sum(arr1, arr2);
    printf("result of MATRIX summation operation \n\t[1]\t[2]\t[3]\t[4]\t[5]\t\n");
    print_matrix(result1);
    
    mul(arr1, arr2);
    printf("\nresult of MATRIX multiplication operation \n\t[1]\t[2]\t[3]\t[4]\t[5]\t\n");
    print_matrix(result2);
    
    return 0;
}

int print_matrix(int arrp[MAT_MAX_SIZE][MAT_MAX_SIZE]){
    for (int iter =0 ; iter<5; iter ++){
        printf("[%d]\t", iter+1);
        for (int iter_2 = 0; iter_2<5; iter_2++)
        {
            printf("%d\t", arrp[iter][iter_2]);
        }
        printf("\n");
    }
    return 0;
}

int sum(int arr1[MAT_MAX_SIZE][MAT_MAX_SIZE], int arr2[MAT_MAX_SIZE][MAT_MAX_SIZE])
{
    for (int iter =0 ; iter<5; iter++){
        for (int iter_2 = 0; iter_2<5; iter_2++)
        {
            result1[iter][iter_2] = arr1[iter][iter_2]+arr2[iter][iter_2];
        }
    }
    return 0;
}

int mul(int arr1[MAT_MAX_SIZE][MAT_MAX_SIZE], int arr2[MAT_MAX_SIZE][MAT_MAX_SIZE]){
    for (int iter =0 ; iter<5; iter++){
        for (int iter_2 = 0; iter_2<5; iter_2++){
            for(int iter_3=0; iter_3<5; iter_3++)
            {
                result2[iter][iter_3] += arr1[iter][iter_2]*arr2[iter_2][iter_3];
            }
        }
    }
    return 0;
}
