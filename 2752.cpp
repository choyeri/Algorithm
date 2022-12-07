#include <iostream>
#include <algorithm>
using namespace std;
/*
2752 세수정렬
*/

int main()
{
	int num[3];
	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);
	cout << num[0] << " " << num[1] << " " << num[2];
}