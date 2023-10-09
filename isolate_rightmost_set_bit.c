/*Isolate the Rightmost Set Bit. Write a function to isolate the rightmost set bit of an 
integer.
WTD: Given an integer, isolate the rightmost bit set to 1 in its binary representation. Use 
bitwise operations to find this bit while setting all other bits to 0.
(e.g.: I/P: 0b10100000; O/P: 0b00100000*/

#include<stdio.h>

int isolate_rightmost_bit(int num,int *arr);

int main()
{
    int num,res,i;
    int arr[8] = {0};
    printf("Enter the number: ");
    scanf("%d",&num);
    res = isolate_rightmost_bit(num,arr);
    printf("After isloating roghtmost set bit: %d\n");
    for(i=7; i>=0; i--)
    {
        printf("%d",*(arr+i));
    }
    return 0;
}

int isolate_rightmost_bit(int num,int *arr)
{
    int i,mask,count=0;
    for(i=7; i>=0; i--)
    {
       mask = ((num >> i) & 1);
       if(mask == 1 && count == 0)
       {
        arr[i] = 0;
        count++;
       }
       else
       arr[i] = mask;
    }
}