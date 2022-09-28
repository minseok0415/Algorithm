#include <stdio.h>

int main()
{
	int a, n, min=101, max=1, i;
	scanf("%d", &n);
	for(i=0; i<n; i++) {
		scanf("%d", &a);
		if(a < min) min = a;
		else if(a > max) max = a;
	}
	printf("%d", max-min);
	return 0;
}
