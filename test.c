#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <ctype.h>
#include <stdio.h>

void main(){
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