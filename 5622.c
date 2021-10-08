//숫자 1을 걸려면 총 2초가 필요하다. 
//1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.
//예를 들어, UNUCIC는 868242
//필요한 최소 시간을 구하는 프로그램을 작성


#pragma warning(disable:4996)
#include <stdio.h>
int main() {
	char arr[16] = {0,};
	int sum = 0;
	scanf("%s", &arr);
	for (int i = 0; i < sizeof(arr); i++) {
		if ((arr[i] == 'A')||(arr[i]=='B')||(arr[i]=='C'))
			sum += 3;
		else if ((arr[i] == 'D') || (arr[i] == 'E') || (arr[i] == 'F'))
			sum += 4;
		else if ((arr[i] == 'G') || (arr[i] == 'H') || (arr[i] == 'I'))
			sum += 5;
		else if ((arr[i] == 'J') || (arr[i] == 'K') || (arr[i] == 'L'))
			sum += 6;
		else if ((arr[i] == 'M') || (arr[i] == 'N') || (arr[i] == 'O'))
			sum += 7;
		else if ((arr[i] == 'P') || (arr[i] == 'Q') || (arr[i] == 'R')|| (arr[i] == 'S'))
			sum += 8;
		else if ((arr[i] == 'T') || (arr[i] == 'U') || (arr[i] == 'V'))
			sum += 9;
		else if ((arr[i] == 'W') || (arr[i] == 'X') || (arr[i] == 'Y') || (arr[i] == 'Z'))
			sum += 10;
		else if (arr[i]=='\0')
			break;
	}

	printf("%d",sum);
 }
