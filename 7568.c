#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
7568 덩치
N명의 사람들의 키와 몸무게를 입력받아 그 사람들의 덩치 순위 매기기
덩치 순위는 A가 B보다 키와 몸무게 모두 커야 A의 덩치가 큰것으로 함
- 키와 몸무게 비교하여 가장크면 1등
- A와 B사이의 덩치등수가 같은 사람이 나오면 모두 같은 등수로 한다.
*/

int main()
{
	int N,k;
	scanf("%d", &N);
	int x[N] = { 0 }, y[N] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf("%d &d", &x[i], &y[i]);
	}
	for (int i = 0; i < N; i++) {//N명의 사람들의 키와 덩치 모두 비교
		k = 0;
		for (int j = 0; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j])
				k++;
		}
		printf("%d ", k+1);
	}
}