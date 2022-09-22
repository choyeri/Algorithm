#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	int arr1[N][M], arr2[N][M];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int k = 0; k < N; k++) {
		for (int l = 0; l < M; l++) {
			scanf("%d", &arr2[k][l]);
		}
	}
	for (int a = 0; a < N; a++) {
		for (int b = 0; b < M; b++) {
			arr1[a][b] += arr2[a][b];
			printf("%d ", arr1[a][b]);
		}
		printf("\n");
	}
}