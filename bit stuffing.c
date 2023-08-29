#include<stdio.h>
int main()
{
	int a[20],i,n,count=0;
	printf("enter no of digits:");
	scanf("%d",&n);
	printf("enter elements:");
	for(i=0;i<n;i++)
      {
	  scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
     {
	 if(a[i]==0)
	 {
	 printf("%d",a[i]);
	 }
	 else if(a[i]==1)
	  {
	  printf("%d",a[i]);
	  count++;
	  if(count==5)
	  {
	  printf("0");
	  }
		}	 
}
	 
}
