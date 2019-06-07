#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void change_imcheong(){
    char str[50];
    char resultStr[50];
    int k=0;
    printf("문자열을 대소문자 구분하여 입력 : ");
    scanf("%s",str);
    printf("-------------------------------------------------\n");
    int length = strlen(str);
    for(int i=length-1; i>=0; i--){
       if (isupper(str[i])) {
            resultStr[k++] = tolower(str[i]);
        } else if (islower(str[i])) {
            resultStr[k++] = toupper(str[i]);
        }
    }
    resultStr[k] = '\0';
    printf("변환된 결과물 출력 ==> %s\n", resultStr);
    return;
}

void draw_imcheong(){
    int number=0;
    int finish = 0; // 함수 진행 중
    printf("5부터 10사이의 홀수를 입력하시오 : \n");
    printf("(0입력시 프로그램 종료))\n");

    
    do {
        printf("숫자 입력 : ");
        scanf("%d", &number); 

        if (number<4 || number>10) { // 5미만 10초과 인경우
            printf("☆ 5부터 10사이의 홀수를 입력하시오. 학과 : 컴퓨터과학과\n");
            printf("-------------------------------------------------\n");
        }

        if (number%2 == 0){ // 짝수인 경우
            printf("★ 홀수를 입력하시오. 학번 : 201934-153176 \n");
            printf("-------------------------------------------------\n");
        }

        if (number == 0) {
            printf("♥ 프로그램을 종료합니다. 이름 : 임청 \n");
            printf("-------------------------------------------------\n");
            return;
        }

        if (number){ // 
            int i=0, j=0, k=0;
            int count=1;
            int arr[100][100] = {0};
            
            for(i=0; i<number; i++,k++){
                for (j=k; j<number-k; j++){
                    arr[j][i] = count++;
                }
            }
            
            for(i=number/2+1,k=number/2-1; i<number; i++,k++) {
                for(j=k; j<number-k; j++)
                {
                    arr[j][i] = count++;
                }
            }

            for(i=0; i<number+3; i++){
                for(j=0; j<number+3; j++){
                    if(arr[i][j] == 0) printf("    ");
                    else printf("%4d",arr[i][j]);
                }
                puts("");
            }

            printf("-------------------------------------------------\n");
        }

    } while (number != 0);

}


void main(){
    change_imcheong();
    draw_imcheong();
}