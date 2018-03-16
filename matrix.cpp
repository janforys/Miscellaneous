#include<conio.h>
#include<stdio.h>
#include<math.h>
#define n 3
#define m 3
void load(int t[][m]);
void display(int t[n][m]);
int diagonal(int t[n][m]);
int main()
{
int t[n][m];
load(t);
display(t);
printf("The total sum of matrix's diagonal: %d",diagonal(t));
return 0;
}
void load(int t[n][m])
{
int i,j;
printf("Please type matrix components:\n");
  for (i=0; i<n; i++)
		for (j=0; j<m; j++)
		scanf("%d",&t[i][j]);
}
void display(int t[n][m])
{
printf("Components of your matrix:\n");
int i,j;
 for (i=0; i<n; i++)
	  for(j=0; j<m; j++)
	  {
	  printf("%d\n",t[i][j]);
	  if (j==m-1)
	  printf("    ");
}
}
int diagonal(int t[n][m])
{
int i,j,sum;
sum=0;
	for (i=0; i<n; i++)
		 for (j=0; j<m; j++)
		 if (i==j)
		 sum=sum+t[i][j];
return(sum);
}
