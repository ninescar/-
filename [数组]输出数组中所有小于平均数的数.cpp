#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	int temp[105];
	double d,f;
	while(~scanf("%d",&n))
	{
		d = 0;
		for(int i = 0;i < n;i++)
		{
			scanf("%d",&temp[i]);
			d += temp[i];
			f = d / n;
			if (temp[i] < f)
                printf("%-8d",temp[i]);
		}
	}		
	return 0;
}
