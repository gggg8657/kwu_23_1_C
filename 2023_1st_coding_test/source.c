#include <stdio.h>

int question1();
int question2();
int question3();
int question4();
int question5();
int question6();
int question7();
int question8();
int question9();
int question10();
int question11();

int main(){
    /*
    틀린코드 주고, 고치세요. 반복문 문제// scanf(“%d”, &a); printf(“%d”, &a); // 조건문 (연산자 오류) (ex if(1<= x <= 13) // print(“hello world”); // 세미콜론 빼먹기 /
    */
    //오답코드
    /*
    int size;
    prinf("Welcome to kwangwoon\n press 10 plz :"); // prinf 오타 확인 
    scanf("%d", &size);
    printf("입력하신 숫자는 : %d", &size)           // 세미콜론 및 주소 출력 오류 
    for (int iter = 0; iter<size; iter=iter){       //반복문 제어 오류 
        if(6<=size<=10){                            //연산자 오류 
            printf("%d",&iter);                     //printf 주소 출력 오류
        }
    }
    */
   /*
    question1();
    
    question2();
    
    question3();
    
    question4();
    
    question5();
    
    question6();
    question7();
    
    question8(); 
    
    question9();
    */
    question10();

    printf("\n*\t*\t*\tQUESTION No.11*\t*\t*\t");
    question11();

    return 0;
}

    /////////////////////////////////////////////////////////////////////////////////
    //아래의 코드는, 오류가 있습니다. 오류를 수정하시고, 다음과 같은 결과 화면을 출력하십시오.          //
    //Welcome to kwangwoon                                                         //
    //press 10 plz :10                                                             //
    //                                                                             //
    //입력하신 숫자는 : 10                                                             //
    //        6                                                                    //
    //        7                                                                    //
    //        8                                                                    //
    //        9                                                                    //
    //        10                                                                   //
    /////////////////////////////////////////////////////////////////////////////////  

int question1(){
    int size;
    printf("Welcome to kwangwoon\n press 10 plz :");
    scanf("%d", &size);
    printf("\n입력하신 숫자는 : %d\n", size);
    for (int iter = 0; iter<=size; iter++){
        if(6<=iter && iter<=size){
            printf("\t%d\n",iter);
        }
    }
    return 0;
}

    ////////////////////////////////////////////////////////////////////////////////////
    // 각도기 : 직각90도 , 예각 = 0도 이상 90도미만, 둔각 = 91도 ~ 179도, 평각 = 180도             //
    // 각도를 입력받아, 상기 내용에 맞는 결과를 출력하십시오.                                      //
    // 출력 예시 : 각도를 입력하시오. : 178
    //          둔각입니다.
    // 배점:                                                                            //
    ////////////////////////////////////////////////////////////////////////////////////

int question2(){
    int angle;
    printf("각도를 입력하시오. : ");
    scanf("%d", &angle);
    if(angle==90) printf("%d도는 직각입니다.\n",angle);
    else if (angle >0 && angle <90) printf("%d도는 예각입니다.\n", angle);
    else if (angle >90 && angle <180) printf("%d도는 둔각입니다.\n", angle);
    else if (angle ==180) printf("%d도는 평각입니다.\n", angle);
    else printf("%d도는 범위 밖입니다.\n", angle);
}

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //치킨 나눠 먹기 : 치킨을 나누어 먹을 사람의 수를 입력으로 받고, 모든 인원이 같은 갯수의 치킨 조각을 먹어야 할때, 최소 몇 마리의 치킨을 시켜야 하는가, 단, 치킨은 7조각 입니다.                 // 
    //배점:                                                                                                                                                   //
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int question3(){
    int human, chicken;
    printf("몇 명이서 치킨을 먹나요 ? ");
    scanf("%d", &human);
    if (human % 7 == 0){
        chicken = human/7;
        printf("%d 마리의 치킨을 주문하세요\n", chicken);
    }
    else if (human == 1){ 
        chicken = 1;
        printf("%d 마리의 치킨을 주문하세요\n", chicken);
    }
    else {
        chicken = human*7;
        printf("%d 마리의 치킨을 주문하세요\n", chicken);
    }
    return 0;
}

    ////////////////////////////////////////////////////////////////////////
    // 별찍기 문제 : 다음과 같은 결과 화면을 나타내기 위해, for, printf 를 활용하십시오.  //
    // 결과 화면 :                                                          //
    // * * * * *                                                          //
    // * * * *                                                            //
    // * * *                                                              //
    // * *                                                                //
    // *                                                                  //
    ////////////////////////////////////////////////////////////////////////
 
int question4(){

    for (int i = 0; i<5; i++){
        for (int j = 5; j>i; j--){
            printf("* ");
        } printf("\n");
    }
    
    return 0;
}

    ////////////////////////////////////////////////////////////////////////
    // 계산기를 만드시오. : 사용자의 입력으로 피연산자 2개와 연산자 1개를 입력 받고  //
    // 입력 받은 연산자를 활용하여, 결과를 출력하는 계산기를 만드시오.
    // 조건 1 반복문을 사용하여, 연산자에 오류가 없을 경우 계속 실행되게 만드십시오. //
    // 조건 2 +. -. /. *. % 이외의 입력이 들어올 경우 프로그램을 종료하십시오.
    // 결과 화면 :                                                          //
    // * * * * *                                                          //
    // * * * *                                                            //
    // * * *                                                              //
    // * *                                                                //
    // *                                                                  //
    ////////////////////////////////////////////////////////////////////////

int question5(){
    int a, b;
    char op;

    for (int iter = 0; iter <10; iter++){
        printf("첫 번째 피연산자를 입력하십시오 : ");
        scanf("%d", &a);
        printf("연산자를 입력하십시오 : ");
        scanf(" %c", &op);
        switch(op){
            case '+':
                printf("두 번째 피연산자를 입력하십시오 : ");
                scanf("%d", &b);
                printf("[%c] operation result : %d %c %d = %d\n", op, a, op, b, a+b);
                break;
            case '-':
                printf("두 번째 피연산자를 입력하십시오 : ");
                scanf("%d", &b);
                printf("[%c] operation result : %d %c %d = %d\n", op, a, op, b, a-b);
                break;
            case '*':
                printf("두 번째 피연산자를 입력하십시오 : ");
                scanf("%d", &b);
                printf("[%c] operation result : %d %c %d = %d\n", op, a, op, b, a*b);
                break;
            case '/':
                printf("두 번째 피연산자를 입력하십시오 : ");
                scanf("%d", &b);
                printf("[%c] operation result : %d %c %d = %d\n", op, a, op, b, a/b);
                break;
            case '%':
                printf("두 번째 피연산자를 입력하십시오 : ");
                scanf("%d", &b);
                printf("[%c] operation result : %d %c %d = %d\n", op, a, op, b, a%b);
                break;
            default :
                printf("\n\n★★★ operator Input error ★★★\n\n");
                break;
        }
    }
    printf("\n\n\t * * * End Of Calculator Program * * * \n");
    return 0;
}
/// @brief 입력 진수 결정 및 정수형 출력 프로그램
/// @return 
int question6(){
    int type, data;
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

    return 0;
}
/// @brief size of 함수를 활용한, 데이터 형의 크기 확인 프로그램
/// @return 
int question7(){

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

    return 0;
}
/// @brief 윤년 계산하기 프로그램
/// @return 
int question8(){
    int year;

    printf("연도를 입력하세요 : ");
    scanf("%d", &year);

    if(((year%4 == 0) && (year%100 != 0))||(year%400==0))
    {
        printf("%d 년은 윤년입니다. \n", year);
    }
    else
        printf("%d 년은 평년입니다. \n", year);
    return 0;
}

int question9(){
    int num;
    int clap =0;
    int div= 10000;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &num);
    for (int j = 0; j<5; j++){
        if((num/div)%3 == 0)
            clap ++;
        num = num%div;
        div = div/10;
    }
    if(num/10000 == 3 || num/10000 == 6 || num/10000 ==9)
	    clap ++;
    num = num%10000;
    if (num / 1000 ==3 || num/ 1000 == 6|| num/1000 ==9)
	    clap++;
    num = num%1000;
    if (num /100 ==3|| num/100==6||num/100==9)
	    clap++;
    num=num%100;
    if(num/10 ==3 || num/10==6 || num/10 ==9)
	    clap++;
    num=num%10;
    if(num==3|| num ==6|| num==9)
	    clap++;

    for (int iter = 0; iter<clap; iter++)
        printf("* * 짝 * * \n");

    return 0;   
}

int question10(){

    for(int iter =1; iter <10; iter++){
        if(iter%2 != 2) 
            continue;
        for (int dan=1; dan<=10; dan++){
                if(dan == iter) 
                    break;
                printf("%d X %d = %d\n", iter, dan, iter*dan); 
            }
        }
    return 0;
}

int question11(){
    int inp;

    while (1)
    {   
        printf("숫자를 입력하세요. : ");
        scanf("%d", &inp);
        if(inp >=11) {
            printf("그렇게 많은 별표를 출력할 수 없습니다.\n");
            continue;
        }
        else if(inp == 0) continue;
        else
            for ( int iter = 0; iter < 11; iter++) {
                if (iter == inp)
                    break;
                printf("* ");

            }
    }
    return 0;
}