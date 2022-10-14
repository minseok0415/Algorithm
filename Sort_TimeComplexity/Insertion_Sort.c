 #include <stdio.h>
int main()
{
    int i,j,n=4,temp,key;	// 1
    int list[4]={4,5,1,2};	// 1
    
    for(i=1; i<n; i++)		// n
    {
        key=list[i];				// n-1
        for(j=i-1; j>=0 && list[j]>key; j--)	// 7
        {
            list[j+1]=list[j];					// 4
        }
        list[j+1]=key;			// n-1
    }
    for(i=0; i<n; i++)		// n+1
    {
        printf("%d ",list[i]);		// n
    }
    return 0;				// 1
}

// TimeComplexity : 5n + 13
// Big-O : O(n)