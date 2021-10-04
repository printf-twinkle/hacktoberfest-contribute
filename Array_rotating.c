#include<stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n,j,k,temp;
	printf("Enter the size ");
	scanf("%d",&n);
	printf("Enter the element");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		
			
	temp=a[0];
	for(j=0;j<n-1;j++)
	{
		a[j]=a[j+1];
		
	}
	
	a[n-1]=temp;
}
for(i=0;i<n;i++)
		
{

printf("%d",a[i]);
}
return 0;


}
