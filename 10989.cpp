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
//} 메모리 초과 - 입력받은 값들 모두 저장하고 정렬 후 출력하여 메모리 초과됨

#include <iostream>
using namespace std;
/*
10989 수 정렬하기3
N개의 숫자를 입력받고 오름차순 정렬하여 출력하기

입력받은 값들을 모두 저장하고 정렬하여 출력하면 10000개를 입력받았을 때 메모리가 초과되므로 입력받은 숫자의 배열 인덱스를 +1하여 배열을 출력하는 것이 메모리를 덜 사용한다.
또한 cin,cout의 처리속도가 printf와 scanf보다 느려 시간초과 또한 발생하였는데, 29-31코드를 추가함으로써 iostream의 버퍼만 쓰게 되어 속도가 향상되었다.
*/

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); //3줄 추가로 시간초과 해결 -> 알고리즘에서만 사용, printf,scanf가 cin,cout보다 빠름
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