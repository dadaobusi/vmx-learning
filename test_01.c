//

#include "stdafx.h"
#include "stdio.h"
/*
4
2
590 580 570 560
580 560
*/
int _tmain(int argc, _TCHAR* argv[])
{
	//printf("hello");
	int a[101],t[10],i,n,h,low,high,mid,l,count,j;
	scanf("%d",&n);
    scanf("%d",&h);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
    for(i=1;i<=h;i++)
	scanf("%d",&t[i]);
	//low=1;high=n;mid=(low+high)/2;
	//j=1;
	for(i=1;i<=h;i++)
	{
		low=1;high=n;mid=(low+high)/2;
		for(l=1;l<=n;l++)
		{
			while(a[mid]!=t[i])
			{
				if(a[mid]>t[i])				{
					low=mid+1;mid=(low+high)/2;
				if(a[mid]<t[i])
					high=mid-1;mid=(low+high)/2;
			}
			if(a[mid]!=t[i])
				printf("fail");
		}
        count = 0;
		for(j=1;j<=n;j++)
    		if(t[i]==a[j])
		    	count++;

        printf("%d %d %d",mid,count,mid-1);
		printf("\n");
	}
	//getchar();
	return 0;
}

