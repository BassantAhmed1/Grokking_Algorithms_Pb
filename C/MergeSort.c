#include <stdio.h>


void mergeSort (int * arr, int len) //O(n lg(n)) time complexity
{
    if (len != 1)
    {
        int n1 = len/2 ;
        int n2 = len - n1;
        
        int L [n1] , R [n2];
        
        int i=0,L_idx=0,R_idx=0;
        
        for (;i<n1;i++)
    	    L[L_idx++] = arr[i];
    	
        for (;i<len;i++)
    	    R[R_idx++]= arr[i];

    	mergeSort (L , n1);
    	mergeSort (R , n2);
        for (R_idx=0,L_idx=0,i=0; i<len; i++)
        {
            if ((L_idx < n1) && ((L[L_idx] <= R[R_idx]) || (R_idx >= n2)))
    		    arr[i] = L[L_idx++];
        	else
        		arr[i]=R[R_idx++];
        }
    }
}

void main()
{
    int arr [] = {2,4,5,7,1,2,3,6};
    
    int i=0 , size = sizeof(arr)/sizeof(int);
    mergeSort(arr,size);
    for (;i<size;i++)
        printf("%d ",arr[i]);
}
