#include <stdio.h>

int temp, temp2;

int Han_Xin_4() {
	temp = 1;
	temp2 = 8;
	printf("(4)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i > 0) && (i < 5) && (j == temp)) {
				printf("X");
			}
			else if ((i > 0) && (i < 5) && (j == temp2)) {
				temp++;
				printf("X");
				temp2--;
			}
			else if (i == 0) {
				printf("X");
			}
			else printf("-");
		}
		printf("\n");
	}
	return 0;
}