#include <stdio.h>

int main()
{
	int n, m, i, sum=0;
	scanf("%d %d", &n, &m);
	for(i=n; i<=m; i++) {
		sum += i;
		printf("%d ", i);
		if(i != m) printf("+ ");
		else printf("= ");
	}
	printf("%d", sum);
	return 0;
}
