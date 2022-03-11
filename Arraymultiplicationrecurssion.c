#include<stdio.h>
void array_mult(int a[10][10],int m1,int n1,int b[10][10],int p1,int q1,int c[20][20]);
void display(int m2,int q2,int c[20][20]);
void main()
{
	int a[10][10],b[10][10],i,j,m,n,p,q,c[20][20]={0};
	printf("enter the dimensions of a");
	scanf("%d%d",&m,&n);
	printf("enter the dimensions of b");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("MULTIPLICATION NOT POSSIBLE");
	}
	else
	{
	 printf("enter the elements of a");
	 for(i=0;i<m;i++)
	 {
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	 }  
	 printf("enter the elements of b");
	 for(i=0;i<p;i++)
	 {
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	 } 
	 array_mult(a,m,n,b,p,q,c);
	 display(m,q,c);
   }
/*	printf("THE MULTIPLIED ARRAY IS:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}*/
}
void array_mult(int a[10][10],int m1,int n1,int b[10][10],int p1,int q1,int c[20][20])
{
    int i,j,k;
	i=j=k=0;
	if(i>=m1)
	{
		return;
	}
	else if(i<m1)
	{
     if(j<q1)
	{
		if(k<n1)
		{
			c[i][j]+=a[i][k]*b[k][j];
			k++;
			array_mult(a,m1,n1,b,p1,q1,c);
		}
		k=0;
		j++;
		array_mult(a,m1,n1,b,p1,q1,c);
	}
	j=0;
	i++;
	array_mult(a,m1,n1,b,p1,q1,c);
}
}
void display(int m2,int q2,int c[20][20])
{
	int i,j;
	for(i=0;i<m2;i++)
	{
		for(j=0;j<q2;j++)
		{
			printf("%d ",c[i][j]);
		}
	}
}
