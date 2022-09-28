#include <stdio.h>

int main()
{
	int n, sum=0, i;
	scanf("%d", &n);
	for(i=1; i<=n/2; i++) {
		if(n%i == 0) {
			sum += i;
			if(i != n/2) printf("%d + ", i);
			else printf("%d ", i);
		}
	}
	printf("= %d", sum);
	return 0;
}
