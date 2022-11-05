#include <iostream>
using namespace std;

/*
2292 벌집
중앙의 방 1에서 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호
N을 입력받아 중앙의 1번 방에서 최소 몇개의 방을 지나 N의 방까지 갈 수 있는지 구하는 알고리즘
- 등비수열 사용
*/

int main()
{
	int N;
	cin >> N;
	int sum = 2, i=1; //sum은 방번호, i는 지나간 방의 수
	while (sum <= N) { 
		sum += 6 * i;
		i++;
	}
	if (N == 1)
		i= 1;
	cout << i;
	return 0;
}