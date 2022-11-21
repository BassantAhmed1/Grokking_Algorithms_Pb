#include <stdio.h>

int binary_searchRec (int * arr, int len , int element)    //Recursion approach to return the element's position
{
    if (element == arr [len/2])
        return len/2;
    else if (element > arr [len/2])
        return binary_search(arr , len/2+len , element);
        
    return binary_search (arr , len/2, element);
}


void main()
{
    int arr [] = {1,2,3,4,5,6,7,8,11,12,13,14,70,90,80};
    printf("%d",binary_searchRec(arr, sizeof(arr)/sizeof(int) , 13));
}