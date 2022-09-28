#include <stdio.h>

int main()
{
	int a[1002]={};
	int t1, t2, n, m, i, j;
	scanf("%d %d", &n, &m);
	for(i=1; i<=n; i++) a[i]=i;
	for(i=1; i<=m; i++) {
		scanf("%d %d", &t1, &t2);
		for(j=1; j<=n; j++) {
			if(j == t2) continue;
			if(a[j] == a[t2]) a[j] = a[t1];
		}
		a[t2] = a[t1];
	}
	scanf("%d %d", &t1, &t2);
	if(a[t1] == a[t2]) printf("YES");
	else printf("NO");
	return 0;
}
