//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N,x;
//	cin >> N;
//	vector<int> num(N);
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	sort(num.begin(), num.end());
//	for (int i = 0; i < N; i++)
//		cout << num[i] << endl;
//} �޸� �ʰ� - �Է¹��� ���� ��� �����ϰ� ���� �� ����Ͽ� �޸� �ʰ���

#include <iostream>
using namespace std;
/*
10989 �� �����ϱ�3
N���� ���ڸ� �Է¹ް� �������� �����Ͽ� ����ϱ�

�Է¹��� ������ ��� �����ϰ� �����Ͽ� ����ϸ� 10000���� �Է¹޾��� �� �޸𸮰� �ʰ��ǹǷ� �Է¹��� ������ �迭 �ε����� +1�Ͽ� �迭�� ����ϴ� ���� �޸𸮸� �� ����Ѵ�.
���� cin,cout�� ó���ӵ��� printf�� scanf���� ���� �ð��ʰ� ���� �߻��Ͽ��µ�, 29-31�ڵ带 �߰������ν� iostream�� ���۸� ���� �Ǿ� �ӵ��� ���Ǿ���.
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); //3�� �߰��� �ð��ʰ� �ذ� -> �˰��򿡼��� ���, printf,scanf�� cin,cout���� ����
	int N, cnt;
	cin >> N;
	int arrnum[10001] = { 0 };
	for (int i = 0; i < N; i++) {
		cin >> cnt;
		arrnum[cnt]++;
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arrnum[i]; j++)
			cout << i << "\n";
	}
}