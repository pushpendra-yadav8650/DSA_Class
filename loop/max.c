#include <stdio.h>
int main()
{
    int g[1000];
    int n,i,mid,start,end,key,temp=555;
    printf("\n Enter numbers of elements\n");
   scanf("%d",&n);
   printf("\n Enter key");
   scanf("%d",&key);
   printf("\nNow Enter all the %d elements\n",n);
   for(i=0;i<=n-1;i++)
   {
    scanf("%d",&g[i]);
   }
   //The main logic of the program
   start=0;
   end=n-1;
   while(start<=end)
   {
    mid=(start+end)/2;
    if(g[mid]==key)
    {
        temp=temp+44;
        break;
    }
    else
    {
        if(g[mid]>key)
        {
            end=mid-1;
        }
        if(g[mid]<key)
        {
            start=mid+1;
        }
    }
   }
   if(temp!=5555)
   {
    printf("The element is found at index %d\n",mid);
   }
   else{
    printf("\n Sorry the element is not found\n");
   }
   return 0;
}
