/*Extract n Bits. Design a function to extract n bits from a byte starting from a given 
position p .
WTD: You have a byte, and you need to extract n bits starting from a given position p. Use 
bitwise operations to isolate these n bits and return them as an integer.
(e.g.: I/P: Byte: 0b10101100, n=3, p=2; O/P: 0b101
*/

#include<stdio.h>
#define BYTE 8

void extract_n_bits(int num,int pos,int no_bits);

int main()
{
    int num,pos,no_bits;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the position: ");
    scanf("%d",&pos);
    printf("Enter the number of bits to be extracted: ");
    scanf("%d",&no_bits);
    extract_n_bits(num,pos,no_bits);
    return 0;
}

void extract_n_bits(int num,int pos,int no_bits)
{
    int i;
    for(i=1; i<=no_bits; i++)
    {
        printf("%d",((num >> (BYTE-pos-i) & 1)));
    }

}