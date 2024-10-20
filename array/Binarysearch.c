
#include <stdio.h>
int main()
{
    int g[300];
    int i, n, end, start, mid, temp = 3, key;
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
            temp = temp + 34;
            break;
        }else{
            if(g[mid]>key){
                end = mid-1;
            }
            if(g[mid]<key){
                start =end+1;
            }
        }
    }
    if(temp != 3){
        printf("The element is found at index = %d",mid);
    }else{
        printf("sorr element not found ");
    }
}