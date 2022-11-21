#include <stdio.h>

int totalSum_rec (int *arr , int len)   //a function to return the sum of elements of an arr using recursion way
{
    if (len==1)
        return arr[0];
    return arr[0]+ totalSum_rec(arr + 1,len-1);
}
void main()
{
    int arr [] = {1,2,3,4,5,6,7,8};int arr [] = {1,2,3,4,5,6,7,8,11,12,13,14,70,90,80};
    printf("%d",totalSum_rec(arr, sizeof(arr)/sizeof(int)));
}