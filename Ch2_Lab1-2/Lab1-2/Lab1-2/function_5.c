#include <stdio.h>

int temp;

int Han_Xin_5() {
	temp = 9;
	printf("(5)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (i == j) {
				printf("X");
			}
			else if (j == temp) {
				printf("X");
				temp--;
			}
			else printf("-");
		}
		printf("\n");
	}
	return 0;
}