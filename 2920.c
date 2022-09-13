#include <stdio.h>

int main()
{
	int N[8],asc=1,desc=1;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &N[i]);
	}

	for (int i = 0; i < 7; i++) {
		if (N[i] == (N[i + 1] - 1)) asc += 1;
		else if (N[i] == (N[i + 1] + 1)) desc += 1;
	}
	if (asc == 8) printf("ascending");
	else if (desc == 8) printf("descending");
	else printf("mixed");
}