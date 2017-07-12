#include <stdio.h>
 
void mergeSort(int [], int, int, int);
void partition(int [],int, int);
 
int main()
{
    int a[50];
    int i, size;
 
    printf("Enter total number of elements:");
    scanf("%d", &size);
    printf("Enter the elements:\n");
    for(i = 0; i < size; i++)
    {
         scanf("%d",&a[i]);
    }
    partition(a, 0, size - 1);
    printf("After merge sort:\n");
    for(i = 0;i < size; i++)
    {
         printf("%d   ",a[i]);
    }
   return 0;
}
 
void partition(int a[],int low,int high)
{
    int mid;
 
    if(low < high)
    {
        mid = (low + high) / 2;
        partition(a, low, mid);
        partition(a, mid + 1, high);
        mergeSort(a, low, mid, high);
    }
}
 
void mergeSort(int a[],int low,int mid,int high)
{
    int i, k, j, temp[50];
 
    i = low;
    k = low;
    j = mid + 1;
    while ((i <= mid) && (j <= high))
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
           
        }
        else
        {
            temp[k++] = a[j++];
            
        }
    }
    
        while(i<=mid)
        {
            temp[k++] = a[i++];
        }
      while(j<=high)
        {
             temp[k++] = a[j++];
        }
    
 
    for (k = low; k <= high; k++)
    {
        a[k] = temp[k];
    }
}
