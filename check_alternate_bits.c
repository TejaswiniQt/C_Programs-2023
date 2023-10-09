/*Check for Alternate Bits. Write a function to check if bits in a given number are in 
alternate pattern.
WTD: Given an integer, check if the bits in its binary representation alternate between 0 
and 1. Use bitwise operations to traverse the bits and perform the check.
(e.g.: I/P: 0b10101010; O/P: True*/

#include<stdio.h>
#define BYTE 8

int check_alternate_bits(int *arr);

int main()
{
    int arr[BYTE],i;
    printf("Enter the byte: ");
    for(i=0; i<BYTE; i++)
    {
        scanf("%d",(arr+i));
    }
    int res = check_alternate_bits(arr);
    if(res)
    printf("True\n");
    else
    printf("False\n");
    return 0;
}

int check_alternate_bits(int *arr)
{
    int i,expected_bit,current_bit;
    expected_bit = arr[0];
    for(i=0; i<BYTE; i++)
    {
        current_bit = arr[i];
        if(expected_bit ^ current_bit)
        return 0;
        else
        {
            expected_bit = 1 - expected_bit;
        }
    }
    return 1;
    
}