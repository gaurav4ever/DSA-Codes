#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct maxheap
{
	int size;
	int *array;
};
void heapify(struct maxheap *heapp,int i)
{
	int large=i;
	int l,r;
	l=2*i+1;
	r=2*i+2;
	if((l<heapp->size)&&heapp->array[l]>heapp->array[large])large=l;
	if((r<heapp->size)&&heapp->array[r]>heapp->array[large])large=r;
	if(large!=i)
	{
		int temp=heapp->array[i];
		heapp->array[i]=heapp->array[large];
		heapp->array[large]=temp;
		heapify(heapp,large);
	}
}
struct maxheap *create_heap(int *a,int size)
{
	struct maxheap *heapp=(struct maxheap*)malloc(sizeof(struct maxheap));
	heapp->size=size;
	heapp->array=a;
	int i;
	for(i=(heapp->size-1)/2;i>=0;i--)
	{
		heapify(heapp,i);
	}
	return heapp;
}
void heap_sort(int *a,int size)
{
	struct maxheap* heapp=create_heap(a,size);
	while(heapp->size>1)
	{
		int temp=heapp->array[0];
		heapp->array[0]=heapp->array[heapp->size-1];
		heapp->array[heapp->size-1]=temp;
		heapp->size-=1;
		heapify(heapp,0);
	}
}
int main()
{
	int a[100],n,i;
	printf("enter size of the array :");
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	heap_sort(a,n);
	printf("Sorted array : ");	
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
