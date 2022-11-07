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
2798 블랙잭
quick sort를 이용하여 입력받은 정수들을 오름차순 정렬하고 3개씩 더하면서 M과 가장 가까운 수를 구하려고 하였으나 런타임 에러 남.
-> 고쳐봐야함
vector를 이용하여 오름차순 정렬하고 가장 마지막 vector값 출력
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