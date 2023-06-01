#include <stdio.h>
#include <stdlib.h>
#define SWP(x,y,tmp) ( (tmp)=(x), (x)=(y), (y)=(tmp) )

int random_number_generator(int arr[50]);
int print_mat(int arr[50]);
int sorting(int arr[50]);
//sort 문제 살짝 어렵게

int main(){
    
    int data[50];
    random_number_generator(data);
    printf("\n\n*\t*\t*\tBEFORE doing SELLECTION SORT\t*\t*\t*\n");
    print_mat(data);
    sorting(data);
    printf("\n\n*\t*\t*\tRESULT of the SELLECTION SORT\t*\t*\t*\n");
    print_mat(data);
    
}


int random_number_generator(int arr[50]){
    for(int i=0; i<50; i++)
        arr[i] = rand()%100;
    return 0;
}

int print_mat(int arr[50]){
    for (int iter =0; iter<50; iter++)
    {
        printf("[%d]\t", arr[iter]);
        if((iter+1) %10 == 0) 
            printf("\n");
    }
    return 0;
}

int sorting(int arr[50]){
    int tmp;
    int least_addr;
    
    
    for(int i=0; i<49; i++){ //search for least value's address
        least_addr = i;
        for(int j=i+1; j<50; j++) 
            if(arr[least_addr]>arr[j]){
                least_addr=j;
            }
        if(i!=least_addr){
            SWP(arr[i], arr[least_addr],tmp);
        }
    }
    return 0;
}

