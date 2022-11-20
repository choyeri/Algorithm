#include <iostream>
#include <string>
using namespace std;

int main()
{
	while (1) {
		string str;
		getline(cin, str);
		if (str == "#")
			break;
		int num=0;
		for(int i = 0; i < str.length(); i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
				num++;
			}
			else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
				num++;
			}
		}
		cout << num << "\n";
	}
}