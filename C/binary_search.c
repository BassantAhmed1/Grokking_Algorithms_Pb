#include <stdio.h>

int binary_search (int * arr, int len , int element)		//returns the position of the required element to search
{
    while (element != arr[len/2])
    {
        if (element > arr[len/2])
            len = len/2 + len;

        else if (element < arr[len/2])
            len /= 2;
    }

    if (element== arr[len/2])
        return len/2;    
}

void main()
{
    int arr [] = {1,2,3,4,5,6,7,8,11,12,13,14,70,90,80};
    printf("%d",binary_search(arr, sizeof(arr)/sizeof(int) , 13));
}