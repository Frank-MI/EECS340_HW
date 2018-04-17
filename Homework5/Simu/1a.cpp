#include <cstdio>
#include <cstring>
#define MAX(a,b) (((a)<(b))?(b):(a))
#define MIN(a,b) (((a)>(b))?(b):(a))

int array[10][10];
int data[]={9,1,7,3,2,8,9,3};
int main()
{
	int i,j = 0;
	for(i = 0;i<=9;i++)
		for(j = 0;j<=9;j++)
			array[i][j] = 0;
	for(i = 1;i<=8;i++)
		array[i][i] = data[i-1];
	
	for(i = 1;i<=8;i++)
		array[i][i+1] = MAX(data[i-1],data[i]);

	for(int k = 2;k<=7;k++)
	for(i = 1;i<=8;i++)
	{	
		j = i+k;
		if(j>8)
			continue;
		printf("%d %d V[i]=%d  V[j]=%d min1=%d min2=%d M=%d\n",i,j,data[i-1],data[j-1],MIN(array[i+1][j-1],array[i+2][j])+data[i-1],MIN(array[i][j-2],array[i+1][j-1])+data[j-1],MAX(MIN(array[i+1][j-1],array[i+2][j])+data[i-1],MIN(array[i][j-2],array[i+1][j-1])+data[j-1]));
		array[i][j] = MAX(MIN(array[i+1][j-1],array[i+2][j])+data[i-1],MIN(array[i][j-2],array[i+1][j-1])+data[j-1]);
	}
	for(i = 1;i<=8;i++)
	{
		for(j = 1;j<=8;j++)
			fprintf(stdout,"\t%d",array[i][j]);
		fprintf(stdout,"\n");
	}
	return 0;
}


