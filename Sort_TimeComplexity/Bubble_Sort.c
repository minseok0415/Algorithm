#include <stdio.h>
int main()
{
    int i,j,n=4,temp;		// 1
    int list[4]={4,5,1,2};	// 1
    
    for(i=n-1; i>0; i--)	// n
    {
        for(j=0; j<i; j++)		// (n²+n-2) / 2
        {
            if(list[j]>list[j+1])		// (n² - n) / 2
            {
                temp=list[j];			// 4
                list[j]=list[j+1];		// 4
                list[j+1]=temp;		// 4
            }
        }
    }
    for(i=0; i<n; i++)		// n+1
    {
        printf("%d ",list[i]);		// n
    }
    return 0;				// 1
}

// TimeComplexity : n² + 3n + 15
// Big-O : O(n²)