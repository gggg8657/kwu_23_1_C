#include <stdio.h>
#include <string.h>

//같은 문자 찾기
//스켈레톤 주고, 빈칸 채우기.
//simple pointer

int main(){
    char arr1[]="abvnzx,mvbznxcvbn,mxzpbnv!@#$^&*@!@#^@&#zmxcbvcnmxzpbnz-=-vbnm[xl]b]c[n[[[]]][[v]x[]mb]zme";
    char arr2[]="tywqiw5t6y8qi9w9t9qy7i8a5w1t2y3q5w6w6t8q8y8u8w8475878419647138tqyiptqypwt4q5y54i6lq6w6ty8iy9u9w9q9t7y8u2i1e";
    char*ptr1 = &arr1;
    char*ptr2 = &arr2;
    for (int iter=0; iter<strlen(arr1); iter++){
        for (int iter2=0; iter2<(strlen(arr2)); iter2++){
            if(*(ptr1+iter) == *(ptr2+iter2))
            {
                printf("%c", *(ptr2+iter2));
                break;
            }
        }
    }
    printf("\n");
}