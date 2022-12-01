#include <iostream>
#include <stack>
#include <vector>
using namespace std;
/*
1874 스택수열
- 1~n까지 n개의 정수를 입력받음. 같은 정수 두번 나오지 않음
- 스택에 입력받은 정수 넣었다가 뽑아 늘어놓음으로써, 하나의 수열 만들기
입력받은 정수까지 1부터 num까지 스택에 넣고 num과 스택의 가장 위의 값이 같다면 pop함.
스택의 가장 위의 값과 num이 다르다면 수열을 만들 수 없기에 NO출력
*/

int main()
{
	int n,cnt=1;
	cin >> n;
	stack<int> s;
	vector<char> result;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		while (num >= cnt) {
			s.push(cnt);
			cnt+=1;
			result.push_back('+');
		}
		if (s.top() == num) {
			s.pop();
			result.push_back('-');
		}
		else {
			cout << "NO" << "\n";
			return 0;
		}
	}
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
}