#include <stdio.h>

int partition (int * arr , int start, int end)
{
    int pivot = arr[end];		//always take the last element in the sub-array to be the pivot
    int j=start,i=start , temp =0;
    for (;j< end ; j++)
    {
        if (arr[j]<= pivot)		//moving all the less-than pivot elements to be at the left and the greater-than elements to be after that
        {
            temp = arr[i];
            arr[i++]=arr[j];
            arr[j] = temp;            
        }
    }
    temp = pivot;			//then moving the pivot to be surrounded by the less-than elements on his left and the greater-than elements on his right
    arr[end]= arr[i];
    arr[i]=pivot;

    return i;
}

void QuickSort_rec(int* arr, int start , int end)
{
    if (start < end)		//to make sure that the function will not run forever
    {
        int p_idx = partition (arr , start , end);		//partition func returns the pivot index after dividing the array into three partions, left arr and pivot and right arr.
        QuickSort_rec(arr , p_idx+1 , end);
        QuickSort_rec (arr , start,p_idx-1);
    }    
}

void QuickSort (int *arr , int len)
{
    QuickSort_rec (arr , 0 , len-1);			//1- giving the start and end positions to the quick sort recursion func.
}

void main()
{
    int arr [] = {20,30,10,5,40,60,50,55,30};
	QuickSort (arr, sizeof(arr)/sizeof(int));
	
	int i=0;
	for (; i<sizeof(arr)/sizeof(int) ; i++)
	{
		printf("%d ",arr[i]);
	}
}