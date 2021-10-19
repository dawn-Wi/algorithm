// 그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다.
// 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
// 단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.


#pragma warning(disablee:4996)
#include <stdio.h>
#include <string.h>
int fun1(char a1[],int len){
    int a=0;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(a1[i]==a1[j]){
                a=j-i;
                if(a>1)
                    if(a1[j-1]!=a1[j])
                        return 0;
                
            }
        }
    }
    return 1;
}

int main(void){
    int num,sum=0;
    char arr[101];
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        scanf("%s",&arr);
        sum+=fun1(arr,strlen(arr));
    }
    printf("%d",sum);
    return 0;
}
