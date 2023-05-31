#include <stdio.h>

//lower caes to upper case + upper case to lower case
// array pointer + ascii code 

void ltu_utl(char *tmp);

int main(){
    char ltu[255] = "ice Vanilla Latte";
    char* ptr = &ltu;

    ltu_utl(ptr);
}

void ltu_utl(char *tmp){
    for (int iter =0; iter<255; iter++)
    {
        if(*(tmp+iter)>64 && *(tmp+iter)<91){
            *(tmp+iter)= *(tmp+iter)+32;
        }
        else if(*(tmp+iter)>96 && *(tmp+iter)<123){
            *(tmp+iter)= *(tmp+iter)-32;
        }
        printf("%c", *(tmp+iter));
    }
    printf("\n");
    for (int iter =0; iter<255; iter++)
    {
        if(*(tmp+iter)>64 && *(tmp+iter)<91){
            *(tmp+iter)= *(tmp+iter)+32;
        }
        else if(*(tmp+iter)>96 && *(tmp+iter)<123){
            *(tmp+iter)= *(tmp+iter)-32;
        }
        printf("%c", *(tmp+iter));
    }
    printf("\n");
}