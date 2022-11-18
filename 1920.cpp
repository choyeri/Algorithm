#include <iostream>
//#include <vector>
#include <algorithm>
using namespace std;

/*
1920 �� ã��
N���� ���ڸ� �Է¹ް� M���� ���ڸ� �Է¹޴´� M���� �Է¹��� ���� �߿� N���� �Է¹��� ���ڿ� ���� ���ڰ� �ִٸ� 1�� ��� �ƴ϶�� 0�� ���

-ó���� for���� ����Ͽ� ���Ͽ����� �ð��ʰ� ����
- binarysearch�� �ð����⵵�� �ٿ����� �ð��ʰ� ����
- vector��� array�� ��� => ��� 
���Ͱ� �迭���� �ε����� �����ϴ� �ӵ��� ���� �ð� �ʰ��� ���� ������ ���δ�.
*/

int arr[100001];

int binarysearch(int n,int searchingkey) {
	int start = 0;
	int end = n - 1;
	int mid;

	while (end >= start) {
		mid = (start + end) / 2;
		if (arr[mid] == searchingkey) {
			cout << "1" << "\n";
			return 0;
		}
		else if (arr[mid] > searchingkey)
			end = mid - 1;
		else
			start = mid + 1;
	}
	cout << "0" << "\n";
	return 0;
}

int main()
{
	int N, M;
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> N;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr,arr+N);
	cin >> M;
	for (int j = 0; j < M; j++) {
		cin >> num;
		binarysearch(N, num);
	}
}