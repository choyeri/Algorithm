#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
1018 체스판 다시 색칠하기
MxN크기의 체스판을 입력받고 8x8체스판을 만들때 다시 색칠해야하는 개수가 가장 적은 것을 찾는 알고리즘
MxN크기를 입력받고 black으로 시작하는 8x8체스판과 white로 시작하는 8x8체스판을 비교하여 가장 적은 개수를 칠하면 되는 것을 찾는다. 
모든 경우의 수를 확인하는 브루트 포스 알고리즘 적용
*/
string board[50];
string bw_board[8] = {
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"}
};
string wb_board[8] = {
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"},
	{"WBWBWBWB"},
	{"BWBWBWBW"}
};

int check_wb(int x,int y) {
	int cnt=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j]!=wb_board[i][j]) cnt++;
		}
	}
	return cnt;
}

int check_bw(int x, int y) {
	int cnt=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j]!=bw_board[i][j]) cnt++;
		}
	}
	return cnt;
}

int main()
{
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> board[i];
	int minvalue=123;
	for (int i = 0; i+8 <= N ; i++) {
		for (int j = 0; j+8 <= M; j++) {
			int tmp;
			tmp = min(check_bw(i, j), check_wb(i, j));
			if (tmp < minvalue)
				minvalue = tmp;
		}
	}
	cout << minvalue;
}