#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
1018 ü���� �ٽ� ��ĥ�ϱ�
MxNũ���� ü������ �Է¹ް� 8x8ü������ ���鶧 �ٽ� ��ĥ�ؾ��ϴ� ������ ���� ���� ���� ã�� �˰���
MxNũ�⸦ �Է¹ް� black���� �����ϴ� 8x8ü���ǰ� white�� �����ϴ� 8x8ü������ ���Ͽ� ���� ���� ������ ĥ�ϸ� �Ǵ� ���� ã�´�. 
��� ����� ���� Ȯ���ϴ� ���Ʈ ���� �˰��� ����
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