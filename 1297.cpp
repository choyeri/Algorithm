#include <iostream>
#include <cmath>
using namespace std;
/*
1297 TVÅ©±â
*/

int main() 
{
	int dia, width, height;
	cin >> dia >> height >> width;
	double x = sqrt((double)(dia * dia) / (height * height + width * width));
	int heightlen, widthlen;
	heightlen = floor(height * x);
	widthlen = floor(width * x);
	cout << heightlen << " " << widthlen;
}