#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char a[101]={}, b[101]={};
	int ac[55]={}, bc[55]={};
	scanf("%s\n%s", a, b);
	for(i=0; i<strlen(a); i++) {
		if(a[i] >= 'a' && a[i] <= 'z') ac[a[i]-97]++;
		else ac[a[i]-39]++;
	}
	for(i=0; i<strlen(b); i++) {
		if(b[i] >= 'a' && b[i] <= 'z') bc[b[i]-97]++;
		else bc[b[i]-39]++;
	}
	for(i=0; i<55; i++) {
		if(ac[i] != bc[i]) {
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
