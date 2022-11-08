#include <iostream>
using namespace std;

/*
15829 Hashing
*/

int main()
{
	int L,M=1234567891;
	cin >> L;
	string s;
	cin >> s;
	long long sum = 0;
	long long R = 1;
	for (int i = 0; i < L; i++) {
		sum = (sum + (s[i] - 'a'+1) * R) % M;
		R = (R * 31) % M;
	}
	cout << sum;
}