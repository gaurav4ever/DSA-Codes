#include<stdio.h>
int n;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int start, int end)
{
    int pivot= arr[end];    
    int pi = start-1;  
 	int i;
    for (i = start; i <= end- 1; i++)
    {
        if (arr[i] <= pivot)
        {
            pi++;    
            swap(&arr[pi], &arr[i]);  
        }
    }
    swap(&arr[pi+1], &arr[end]);
	int k; 
	for(k=0;k<n;k++)printf("%d ",arr[k]);
	printf("\n"); 
    return (pi + 1);
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end); 
        printf("\n%d,%d,%d\n",start,p,end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {10,1,9,2,8,3,7,4,6,5};
     n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
