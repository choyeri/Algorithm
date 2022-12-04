#include <iostream>
using namespace std;
/*
5575 타임카드
*/
int main()
{
	int starthour, startmin, startsec, endhour, endmin, endsec;
	int start,end,result, hour, min, sec;
	for (int i = 0; i < 3; i++) {
		cin >> starthour >> startmin >> startsec >> endhour >> endmin >> endsec;
		start = (3600 * starthour) + (60 * startmin) + startsec;
		end = (3600 * endhour) + (60 * endmin) + endsec;
		result = end - start;
		hour = result / 3600;
		min = (result % 3600) / 60;
		sec = (result % 3600) % 60;
		cout << hour << " " << min << " " << sec << "\n";
	}
}