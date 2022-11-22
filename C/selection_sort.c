#include <stdio.h>

void selection_sort (int *arr , int len)    //O(n2) complixity      //O(1)  space
{
    int i=0, j=0, min_idx=0;
    for (;i<len;i++)
    {
        min_idx = i;
        for (j=i;j<len;j++)
        {
            if (arr[min_idx]>arr[j])
                min_idx = j;
        }
        j = arr[min_idx] ;
        arr[min_idx] = arr[i];
        arr[i]=j;
    }
}

void main()
{
    int arr [] = {20,30,10,5,40,60,50,55,30};
	selection_sort(arr, sizeof(arr)/sizeof(int));
	
	int i=0;
	for (; i<sizeof(arr)/sizeof(int) ; i++)
	{
		printf("%d ",arr[i]);
	}
}