#include <iostream>
using namespace std;
/*
10039 평균점수
5개의 점수 입력받는데 40점 이하의 점수는 40점으로 입력하여 평균 점수 구하기
*/

int main()
{
	int result=0, num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		if (num < 40)
			num = 40;
		result += num;
	}
	result = result / 5;
	cout << result;
}