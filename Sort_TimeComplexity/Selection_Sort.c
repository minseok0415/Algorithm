#include <stdio.h>
int main()
{
    int i,j,n=4,k,temp;		// 1
    int list[4]={4,5,1,2};		// 1
    
    for(i=0; i<n-1; i++)	// n
    {
        k=i;					// n-1
        for(j=i+1; j<n; j++)	// (n²+n-2) / 2
        {
            if(list[j]<list[k])		// (n² - n) / 2
            {
                k=j;				// 3
            }
        }
        temp=list[i];			// (n-1)
        list[i]=list[k];		// (n-1)
        list[k]=temp;			// (n-1)
    }
    for(i=0; i<n; i++)		// n+1
    {
        printf("%d ",list[i]);		// n
    }
    return 0;				// 1
}

// TimeComplexity : n² + 7n + 2
// Big-O : O(n²)