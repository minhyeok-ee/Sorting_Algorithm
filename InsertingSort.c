#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertion_sort(int list[], int n)
{
	int i, j, key;
	for (i = 1; i < n; i++) {
		key = list[i];
		for (j = i - 1; j >= 0 && list[j] > key; j--)
			list[j + 1] = list[j];	// 레코드의 오른쪽 이동
		list[j + 1] = key;
	}
}

int main(void)
{
	int i;
	int list_num = 10;
	int mylist[10/*list_num*/];

	srand(time(NULL));

	for (i = 0; i < list_num; i++) {   // 난수 생성 
		mylist[i] = rand() % 100; // 난수 발생 범위 0~99
	}
	printf("UNSORTED list is \n\n");
	for (i = 0; i < 9; i++) {
		printf("%d ", mylist[i]);
	}

	insertion_sort(mylist, list_num);

	printf("\n\nSORTED list is \n\n");
	for (i = 0; i < 9; i++) {
		printf("%d \t", mylist[i]);
	}
	return 0;
}