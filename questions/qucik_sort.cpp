#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

int n;
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
            int temp=arr[i];
            arr[i]=arr[pi];
            arr[pi]=temp;
        }
    }
    int temp=arr[end];
    arr[end]=arr[pi+1];
    arr[pi+1]=temp;

    return (pi + 1);
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end); 
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<<arr[i];
}
int main()
{
    int arr[] = {10,1,9,2,8,3,7,4,6,5};
     n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    printArray(arr, n);
    getch();
    return 0;
}
