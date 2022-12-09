#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);

	int board[N][M];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			board[i][j] = rand() % 2;
			if (board[i][j] == 0)
				printf("B");
			else
				printf("W");
		}
		printf("\n");
	}
	
}