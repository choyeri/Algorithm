#include <iostream>
using namespace std;
/*
2530 �ΰ����� �ð�
*/
int main()
{
	int hour, min, sec, time,result;
	cin >> hour >> min >> sec;
	cin >> time;
	sec += time;
	min += sec / 60;
	hour += min / 60;
	cout << hour % 24 << " " << min%60 << " " << sec%60;
}