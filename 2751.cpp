#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*
2751 수 정렬하기2
*/

int main()
{
	int N,num;
	cin >> N;
	vector<int> number;
	for (int i = 0; i < N; i++) {
		cin >> num;
		number.push_back(num);
	}
	sort(number.begin(), number.end());
	for (int i = 0; i < N; i++)
		cout << number[i] << '\n';
}