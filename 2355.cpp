#include <iostream>
using namespace std;
/*
2355 ½Ã±×¸¶
*/

int main()
{
	long long A, B, result = 0;
	cin >> A >> B;
	if (A < B)
		result = B * (B + 1) / 2 - (A * (A - 1)) / 2;
	else
		result = A * (A + 1) / 2 - (B * (B - 1)) / 2;
	cout << result << "\n";
}