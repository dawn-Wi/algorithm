// 영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
// 이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.

#include <stdio.h>
#include <string.h>

int main(void){
    int count=0;
    char arr[10001];
    scanf("%[^\n]", arr);
    int len=strlen(arr);
    if(len=1){
        if(arr[0]== ' '){
            return 0;
        }
    }
    for(int i=1;i<len-1;i++){
        if(arr[i]==' '){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
