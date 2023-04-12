#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int sellect;
	int type,data;
    while(1){
        printf("실행 할 예제를 선택하시오. 4, 5, 6, 7, (press any other key to exit): ");
        scanf("%d", &sellect);
        /// <summary>
        /// 예제모음 04
        /// </summary>
        
        if (sellect == 4){
            printf("\n///예제 %d번의 결과시작입니다.///\n",sellect);
            printf("정수를 입력하세요 ==> ");
            scanf("%d", &data);

            printf("10진수 ==> %d\n16진수 ==> %X\n8진수 ==> %o\n", data, data, data);
            printf("///예제 %d번의 결과종료입니다.///\n\n",sellect);
        }
    
        /// <summary>
        /// 예제모음 05
        /// </summary>
        else if (sellect == 5){
            printf("\n///예제 %d번의 결과시작입니다.///\n",sellect);
            printf("입력진수 결정 <1>10 <2>16 <3>8 : ");
            scanf("%d", &type);

            printf("값 입력 : ");
            if (type == 1) {
                scanf("%d", &data);
            }
            else if (type == 2)
                scanf("%x", &data);
            else
                scanf("%o", &data);

            printf("10진수 ==> %d\n16진수 ==> %X\n8진수 ==> %o\n", data, data, data);
            // or
            printf("10 진수 ==> %d \n", data);
            printf("16 진수 ==> %X \n", data);
            printf("18 진수 ==> %o \n", data);
            printf("///예제 %d번의 결과종료입니다.///\n\n",sellect);
        }

        /// <summary>
        /// 예제모음 06
        /// </summary>
        
        else if (sellect ==6){
            printf("\n///예제 %d번의 결과시작입니다.///\n",sellect);
            printf("int 형의 크기\t\t\t ==> %d\n", sizeof(int));
            printf("unsigned int 형의 크기 \t\t ==> %d\n", sizeof(unsigned int));
            printf("short 형의 크기 \t\t ==> %d\n", sizeof(short));
            printf("unsigned short형의 크기 \t ==> %d\n", sizeof(unsigned short));
            printf("long int 형의 크기 \t\t ==> %d\n", sizeof(long int));
            printf("unsigned long int 형의 크기 \t ==> %d\n", sizeof(unsigned long int));
            printf("float 형의 크기 \t\t ==> %d\n", sizeof(float));
            printf("double 형의 크기 \t\t ==> %d\n", sizeof(double));
            printf("long double 형의 크기 \t\t ==> %d\n", sizeof(long double));
            printf("char 형의 크기 \t\t\t ==> %d\n", sizeof(char));
            printf("unsigned char 형의 크기 \t ==> %d\n", sizeof(unsigned char));
            printf("///예제 %d번의 결과종료입니다.///\n\n",sellect);
        }
        

        /// <summary>
        /// 예제모음 07
        /// <summary>
        else if (sellect == 7){
            printf("\n///예제 %d번의 결과시작입니다.///\n",sellect);
            char str[10] = " ";
            int i;

            printf("문자열을 입력 ==> ");
            scanf("%s", str);

            for (i = sizeof(str)-1; i>= 0; i--)
            {
                printf("%c", str[i]);
            }
            printf("\n");
            printf("///예제 %d번의 결과종료입니다.///\n\n",sellect);
        }
        else{
            printf("\t\t* * * 종료하겠습니다. * * *\t\n\n\n");
            break;
        } 
    }
    return 0;
}
