#include <stdio.h>

int MaxNum_rec (int * arr , int len)	//a function to return the max number in an arr using recursion way
{
    static int max ;
    if (len == 1)
        return max;
    if (max < arr[0])
        max = arr[0];
    return MaxNum_rec (arr+1 , len-1);
}

void main()
{
    int arr [] = {1,15,3,20,5,30,7,8};
    printf("max number=%d",MaxNum_rec(arr, sizeof(arr)/sizeof(int)));
}