#include <stdio.h>

int main()
{
    
    int sellect;
    while(1){
        printf("put A number of example->");
        scanf("%d", &sellect);
        
        if (sellect==1){
            float a,b;
            float result;
            printf("put the first number to calculate --> ");
            scanf("%f",&a);
            printf("put the second number to calculate -->");
            scanf("%f", &b);

            result = a+b;
            printf("%5.2f + %5.2f = %5.2f\n", a, b, result);
            result = a-b;
            printf("%5.2f - %5.2f = %5.2f\n", a, b, result);
            result = a*b;
            printf("%5.2f * %5.2f = %5.2f\n", a, b, result);
            result = a/b;
            printf("%5.2f / %5.2f = %5.2f\n", a, b, result);
            result = (int)a % (int)b;
            printf("%d %% %d = %d\n", (int)a, (int)b, (int)result);
        }
        else if (sellect ==2){
            int money, c500, c100, c50, c10;
            printf(" ## money to change ");
            scanf("%d", &money);

            c500 = money / 500;
            money = money % 500;

            c100 = money / 100;
            money = money %100;

            c50 = money / 50;
            money = money%50;
            
            c10 = money / 10;
            money = money % 10;

            printf("\n 500 won ==> %d\n", c500);
            printf("\n 100 won ==> %d\n", c100);
            printf("\n 50  won ==> %d\n", c50);
            printf("\n 10  won ==> %d\n", c10);
            printf("\n else    ==> %d\n", money);
        }
        else if (sellect==3){
            int year;

            printf("which year do you want to calculate? ");
            scanf("%d", &year);

            if(((year%4==0)&&(year % 100 != 0))|| (year % 400 ==0)){
                printf(" %d is the yun year \n", year);
            }
            else
                printf("%d is not yun year\n", year);
        }
        else
            break;
    }
}