// 이제 플레이어는 제한된 시간 안에 N장의 카드 중에서 3장의 카드를 골라야 한다. 블랙잭 변형 게임이기 때문에, 플레이어가 고른 카드의 합은 M을 넘지 않으면서 M과 최대한 가깝게 만들어야 한다.
// N장의 카드에 써져 있는 숫자가 주어졌을 때, M을 넘지 않으면서 M에 최대한 가까운 카드 3장의 합을 구해 출력하시오.

#pragma warning(disablee:4996)
#include <stdio.h>

int main(){
    int num,sum,max=0;
    int arr[101];
    scanf("%d %d",&num, &sum);
    for(int i=0;i<num;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            for(int k=j+1;k<num;k++){
                int all = arr[i]+arr[j]+arr[k];
                if(all>max & all <= sum){
                    max=all;
                }
            }
        }
    }
    printf("%d\n",max);
    return 0;
}
