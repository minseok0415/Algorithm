#include <stdio.h>
#include <string.h>

int divisor(int n)
{
	int cnt=2;
	for(int i=2; i<n; i++)
		if(n%i == 0)
			cnt++;
	return cnt;
}

int main()
{
	char a[51] = {};
	int num=0;
	scanf("%s", a);
	for(int i=0; i<strlen(a); i++) {
		if(a[i] >= '0' && a[i] <= '9') {
			num *= 10;
			num += a[i]-'0';
		}
	}
	printf("%d\n", num);
	printf("%d", divisor(num));
	return 0;
}
