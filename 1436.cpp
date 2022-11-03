#include <iostream>
using namespace std;
#include <string>

/*
1436 영화감독 숌
6이 적어도 3개가 붙어있는 수들 중 가장작은 수는 666, 그다음이 1666이다.
입력받은 N번째 666이 들어있는 수를 구하라
*/

int Findseries(int n) {
	int i = 666, series = 0;
	string seriesstr;
	while (1) {
		seriesstr = to_string(i);
		for (int j = 0; j < seriesstr.length() - 2; j++) {
			if (seriesstr[j] == '6' && seriesstr[j + 1] == '6' && seriesstr[j + 2] == '6') {
				series++;
				if (series == n) return i;
				break;
			}
		}
		i++;
	}
}//i를 1씩 더해가면서 666부터 모든 숫자를 반복문으로 찾아보는 알고리즘
//다른 방법 강구 필요

int main() 
{
	int N;
	cin >> N;
	cout << Findseries(N);
}