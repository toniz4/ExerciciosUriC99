#include <stdio.h>

int main(void)
{
	int i, j, prev;

	i = 1;

	for (j = 60; j >= 0; j -= 5) {
		printf("I=%d J=%d\n",i, j);
		i += 3;
	}
	return 0;
}
