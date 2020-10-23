#include <stdio.h>
int temp, temp2;

int main(void) {

	printf("(1)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i == 0) || (i == 9) || (j == 0) || (j == 9)) {
				printf("X");
			}
			else printf("-");
		}
		printf("\n");
	}

	printf("(2)\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if ((i == 0) || (i == 9) || (i == 1) || (i == 2) || (i == 7) || (i == 8) || (i == 9) || (j == 0) || (j == 1) || (j == 2) || (j == 7) || (j == 8) || (j == 9)) {
				printf("X");
			}
			else printf("-");
		}
		printf("\n");
	}

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