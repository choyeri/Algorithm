#include <iostream>
#include <stack>
#include <vector>
using namespace std;
/*
1874 ���ü���
- 1~n���� n���� ������ �Է¹���. ���� ���� �ι� ������ ����
- ���ÿ� �Է¹��� ���� �־��ٰ� �̾� �þ�������ν�, �ϳ��� ���� �����
�Է¹��� �������� 1���� num���� ���ÿ� �ְ� num�� ������ ���� ���� ���� ���ٸ� pop��.
������ ���� ���� ���� num�� �ٸ��ٸ� ������ ���� �� ���⿡ NO���
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