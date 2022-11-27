#include <iostream>
using namespace std;

/*
10156 과자
단순 계산문제
*/

int main()
{
	int K, N, M;
	cin >> K >> N >> M;
	if (K * N > M)
		cout << (K * N) - M;
	else
		cout << "0";
}