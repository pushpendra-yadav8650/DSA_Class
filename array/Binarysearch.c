
#include <stdio.h>
int main()
{
    int g[300];
    int i, n, end, start, mid, temp = 0 , key;
    printf("Enter the size number of array:");
    scanf("%d", &n);
    printf("Enter the searh of key:");
    scanf("%d", &key);
    printf("Enter the %d elements of array: ",n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &g[i]);
    }
 
    start = 0;
    end = n - 1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (g[mid] == key)
        {
            temp = 1;
            break;
        }else{
            if(g[mid]>key){
                end = mid-1;
            }
            if(g[mid]<key){

                start =mid+1;
            }
        }
    }
    if(temp == 1){
        printf("The element is found at index = %d",mid);
    }else{
        printf("sorr element not found ");
    }
    return 0;
}