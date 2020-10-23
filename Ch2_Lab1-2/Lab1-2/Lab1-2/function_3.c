#include<stdio.h>

int temp, temp2;

int Han_Xin_3() {
	temp = 4;
	temp2 = 5;
	printf("(3)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i < 5) && (j == temp)) {
				printf("X");
				temp--;
			}
			else if ((i < 5) && (j == temp2)) {
				printf("X");
			}
			else if (i == 4) {
				printf("X");
			}
			else printf("-");
		}
		temp2++;
		printf("\n");
	}
	return 0;
}