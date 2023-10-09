/* Single Number in Array. Given an array where every element appears twice except for 
one, find the element using bitwise operations.
WTD: You are given an array where each element appears exactly twice except for one 
element, which appears only once. Find that unique element using bitwise operations. Do 
this in constant space.
(e.g.: I/P: [4,1,2,1,2]; O/P: 4)
*/
#include<stdio.h>

void arr_unique_ele(int *arr,int *freq,int size);

int main()
{
    int arr[50],freq[50],size,i;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    printf("Enter array elemnts: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
        freq[i] = -1;
    }
    arr_unique_ele(arr,freq,size);
    for(i=0; i<size; i++)
    {
        if((!(freq[i] ^ 1)) && (arr[i] > 0))
        printf("Unique element in the array: %d\n",arr[i]);
    }
    return 0;
}

void arr_unique_ele(int *arr,int *freq,int size)
{
    int i,j,count;
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(!(arr[i] ^ arr[j]))
            {
                count++;
                arr[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
}