//#include <iostream>
//using namespace std;
//
//void quick_sort(int* data,int i, int j) {
//	if (i >= j) return;
//	int pivot = data[i+j/2];
//	int left = i;
//	int right = j;
//
//	while (left <= right) {
//		while (data[left] < pivot) left++;
//		while (data[right] > pivot) right++;
//		if (left <= right) {
//			swap(data[left], data[right]);
//			left++; right--;
//		}
//	}
//	quick_sort(data, i, right);
//	quick_sort(data, left, j);
//}
//
//int main()
//{
//	int N,M;
//	cin >> N >> M;
//	int num[N];
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	quick_sort(num, 0, N - 1);
//	int sum=0,cnt=0;
//	while (sum <= M&&cnt<=N-2) {
//		sum = num[cnt] + num[cnt + 1] + num[cnt + 2];
//		cnt++;
//	}
//	cout << sum;
//}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
2798 ����
quick sort�� �̿��Ͽ� �Է¹��� �������� �������� �����ϰ� 3���� ���ϸ鼭 M�� ���� ����� ���� ���Ϸ��� �Ͽ����� ��Ÿ�� ���� ��.
-> ���ĺ�����
vector�� �̿��Ͽ� �������� �����ϰ� ���� ������ vector�� ���
*/

int main() {
	int N, M;
	cin >> N >> M;

	vector<int> v;
	int num[N];
	int sum;

	for (int i = 0; i < N; i++)
		cin >> num[i];

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			for (int k = j + 1; k < N; k++) {

				sum = num[i] + num[j] + num[k];

				if (sum <= M) {
					v.push_back(sum);
				}
			}
		}
	}
	sort(v.begin(), v.end());
	cout << v.back() << endl;
}