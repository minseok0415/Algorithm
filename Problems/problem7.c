#include <stdio.h>

int main()
{
	char a;
	while(scanf("%c", &a) != EOF) {
		if(a >= 'a' && a <= 'z') printf("%c", a);
		else if(a >= 'A' && a <= 'Z') printf("%c", a+32);
		else continue;
	}
	return 0;
}
