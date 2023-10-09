/*Reverse Bits in a Byte. Implement a function to reverse the bits in a byte.
WTD: You have an 8-bit byte. Reverse the order of its bits using bitwise operations. For 
example, if the input byte is 0b11001001, the output should be 0b10010011.
(e.g.: I/P: 0b11001001; O/P: 0b10010011)
*/

#include<stdio.h>
#define BYTE 8 

void reverse_byte(int num);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    reverse_byte(num);
    return 0;
}

void reverse_byte(int num)
{
    int i;
    printf("After reversing: ");
    for(i=0; i<BYTE; i++)
    {
        printf("%d",((num >> i)&1));
    }
}