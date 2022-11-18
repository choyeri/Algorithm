#include <iostream>
//#include <vector>
#include <algorithm>
using namespace std;

/*
1920 수 찾기
N개의 숫자를 입력받고 M개의 숫자를 입력받는다 M개의 입력받은 숫자 중에 N개의 입력받은 숫자에 같은 숫자가 있다면 1을 출력 아니라면 0을 출력

-처음에 for문을 사용하여 비교하였으나 시간초과 나옴
- binarysearch로 시간복잡도를 줄였으나 시간초과 나옴
- vector대신 array를 사용 => 통과 
벡터가 배열보다 인덱스에 접근하는 속도가 느려 시간 초과가 나온 것으로 보인다.
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