#include <stdio.h>
int main()
{
    int a,b,c,d;
    int result;
    printf("첫 번째 계산할 값을 입력하세요 😛==> ");
    scanf("%d",&a);
    printf("두 번째 계산할 값을 입력하세요 😛==> ");
    scanf("%d",&b);
    printf("세 번째 계산할 값을 입력하세요 😛==> ");
    scanf("%d",&c);
    printf("네 번째 계산할 값을 입력하세요 😛==>");
    scanf("%d",&d);

    result = a+b+c+d;
    printf("summation result is 😛==> %d + %d + %d + %d = %d\n", a,b,c,d,result);
    result = a*b*c*d;
    printf("multiplication result is ==> %d X %d X %d X %d = %d\n", a,b,c,d, result);

    return 0;
}