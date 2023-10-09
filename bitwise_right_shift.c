/*Implement Bitwise Right Shift. Implement a function to perform a bitwise right shift 
without using the '>>' operator.
WTD: Given an integer and a shift count, implement the bitwise right shift operation 
without using the '>>' operator. Your function should return the integer after shifting its bits 
to the right.
(e.g.: I/P: 0b1101, 2; O/P: 0b0011)*/

#include<stdio.h>

int right_shift(int num,int shift);

int main()
{
    int num,shift;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of shifts: ");
    scanf("%d",&shift);
    int res = right_shift(num,shift);
    printf("After shifting: %d\n",res);
    return 0;
}

int right_shift(int num,int shift)
{
    int temp;
    while(shift)
    {
        temp = num / 2;
        num = num / 2;
        shift--;
    }
    return temp;
}