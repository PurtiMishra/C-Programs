#include<stdio.h>//to find the second smallest element of the given array
#include<limits.h>
int second(int a[10],int n1,int l2,int l3);
void main()
{
	int n,i,a[10],l1,l2,p;
	printf("enter the size of thr array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l1=INT_MAX;//we have to find the max element of the range(here int)
	l2=INT_MAX;
	p=second(a,n,l1,l2);
	printf("The second smallest element of the array is %d ",p);
}
int second(int a[10],int n1,int l2,int l3)
{
  int i;
  for(i=0;i<n1;i++)
  {
  	if(a[i]<l2)
  	{
  		l3=l2;
  		l2=a[i];
	  }
	  else if(a[i]<l3&& a[i]>l2)//ie..a[i] lies between l2 and l3
	  {
	  	l3=a[i];
	  }
  }	
  return l3;
  
}
