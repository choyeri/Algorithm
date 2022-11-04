#include <iostream>
using namespace std;
/*
2231 분해합
숫자 N을 입력받아 숫자와 각 자리수의 숫자를 모두 더했을 때 N이 되는 최소의 수를 구한다.
*/

int part(int n) {
	int sum = n;
	while (n) {
		sum += n % 10; //각 자리의 숫자와 n더하는 수식
		n /= 10; 
	}
	return sum;
}

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		int temp = part(i);
		if (temp == N) {
			cout << i << endl; //생성자가 있을 때 출력 
			return 0;
		}
	}
	cout << 0 << endl; //생성자가 없을 때 출력
	return 0;
}