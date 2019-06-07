#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void change_imcheong(){
    char str[50];
    char resultStr[50];
    int k=0;
    printf("���ڿ��� ��ҹ��� �����Ͽ� �Է� : ");
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
    printf("��ȯ�� ����� ��� ==> %s\n", resultStr);
    return;
}

void draw_imcheong(){
    int number=0;
    int finish = 0; // �Լ� ���� ��
    printf("5���� 10������ Ȧ���� �Է��Ͻÿ� : \n");
    printf("(0�Է½� ���α׷� ����))\n");

    
    do {
        printf("���� �Է� : ");
        scanf("%d", &number); 

        if (number<4 || number>10) { // 5�̸� 10�ʰ� �ΰ��
            printf("�� 5���� 10������ Ȧ���� �Է��Ͻÿ�. �а� : ��ǻ�Ͱ��а�\n");
            printf("-------------------------------------------------\n");
        }

        if (number%2 == 0){ // ¦���� ���
            printf("�� Ȧ���� �Է��Ͻÿ�. �й� : 201934-153176 \n");
            printf("-------------------------------------------------\n");
        }

        if (number == 0) {
            printf("�� ���α׷��� �����մϴ�. �̸� : ��û \n");
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