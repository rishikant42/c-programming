#include<stdio.h>
main()
{
int n;
printf("Enter size of array\n");
scanf("%d",&n);
int a[n], x, i;
printf("Enter elements\n");
for(i=0; i<n; i++)
scanf("%d", &a[i]);
printf("Enter search element\n");
scanf("%d",&x);
for(i=0; i<5; i++)
{
if(x == a[i])
printf("%d is at %d position\n",x, i+1);
//else
//printf("its not available\n");
}

}
