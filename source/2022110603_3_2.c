#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    while(1){
        int sellect;
        printf("put the number of example to run :: ");
        scanf("%d", &sellect);
        if(sellect ==1 ){
            printf("put first number : ");
            scanf("%d", &a);
            printf("put the method of calculation : ");
            scanf("%c", &ch);
            printf("put second number : ");
            scanf("%d", &b);

            if(ch=='+')
                printf("%d + %d = %d\n", a,b,a+b);
            else if (ch == '-')
                printf("%d - %d = %d\n", a,b,a-b);
            else if (ch=='*')
                printf("%d * %d = %d\n", a,b,a*b);
            else if (ch== '/')
                printf("%d / %d = %d", a, b, a/b);
            else if (ch=='%')
                printf("%d % %d = %d\n", a, b, a%b);
        }
        else if (sellect ==2){
            printf("put first number : ");
            scanf("%d", &a);
            printf("put the method of calculation : ");
            scanf("%c", &ch);
            printf("put second number : ");
            scanf("%d", &b);

            if(ch=='+')
                printf("%d + %d = %d\n", a,b,a+b);
            else if (ch == '-')
                printf("%d - %d = %d\n", a,b,a-b);
            else if (ch=='*')
                printf("%d * %d = %d\n", a,b,a*b);
            else if (ch== '/')
                printf("%d / %d = %d", a, b, a/b);
            else if (ch=='%')
                printf("%d % %d = %d\n", a, b, a%b);
            else
                printf("wrong method\n");
        }
        else if (sellect ==3){
            printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
            scanf("%d %c %d", &a, &ch, &b);

            switch(ch)
            {
                case '+':
                    printf("%d + %d = %d\n", a,b,a+b);
                    break;
                case '-':
                    printf("%d - %d = %d\n", a,b,a-b);
                    break;
                case '*':
                    printf("%d * %d = %d\n", a,b,a*b);
                    break;
                case '/':
                    printf("%d / %d = %d", a, b, a/b);
                    break;
                case '%':
                    printf("%d % %d = %d\n", a, b, a%b);
                    break;
                default:
                    printf("wrong method\n");
            }
        }
        else{
            printf("\n\t\t*** program terminated ***");
            break;
        }
    }
}