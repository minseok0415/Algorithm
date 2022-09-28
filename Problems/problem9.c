#include <stdio.h>

int main()
{
	int a[101]={};
	int n, i, j, cnt=0, max;
	scanf("%d", &n);
	for(i=1; i<=n; i++) scanf("%d", &a[i]);
	max = a[n];
	for(i=n-1; i>=1; i--) {
		if(a[i] > max) {
			max = a[i];
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}