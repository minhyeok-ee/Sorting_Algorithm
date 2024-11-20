
#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, t) ( (t)=(x), (x)=(y), (y)=(t) )
void selection_sort(int list[], int n) {
	int i, j, least, tmp;
	for (i = 0; i < n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++)
			if (list[j] < list[least])
				least = j;
		SWAP(list[i], list[least], tmp);
	}
}

int main(void)
{
	int list_num = 9;
	int mylist[9/*list_num*/] = {5, 3, 8, 4, 9, 1, 6, 2, 7};
	int i;

	printf("UNSORTED list is \n\n");
	for (i = 0; i < 9; i++) {
		printf("%d \t", mylist[i]);
	}

	selection_sort(mylist, list_num);

	printf("\n\nSORTED list is \n\n");
	for (i = 0; i < 9; i++) {
		printf("%d \t", mylist[i]);
	}

	return 0;
}
