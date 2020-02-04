#include <stdio.h>
#define MAX 13

int Isbn_judgement(int *isbn_numbers);

int main() {

	int i;
	int isbn_numbers[MAX];
	printf("ISBN 번호를 입력하시오: ");

	for (i = 0; i < MAX; i++) {
		scanf_s("%d", isbn_numbers + i);
	}

	if (Isbn_judgement(isbn_numbers) == 1) {
		printf("유효한 ISBN 번호입니다.\n");
	}
	else {
		printf("유효하지 않은 ISBN 번호입니다.\n");
	}
	return 0;
}

int Isbn_judgement(int *isbn_numbers) {
	int i;
	int sum = 0;

	for (i = 0; i < MAX; i++) {
		if (i % 2 == 1) {
			isbn_numbers[i] = isbn_numbers[i] * 3;
		}
	}

	for (i = 0; i < MAX; i++) {
		sum = sum + isbn_numbers[i];
	}

	if (sum % 10 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}