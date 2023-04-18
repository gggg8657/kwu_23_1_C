#include <stdio.h>

int total(int input){
    static int tmp;
    tmp = tmp + input;
    return tmp;
}

int main(){
    int iter = 0;
    int inp;
    while(iter <3){
        scanf("%d", &inp);
        printf("the result of sumation is :: %d\n",total(inp));
        iter ++;

    }
}