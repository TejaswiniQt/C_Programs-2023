/* Generate All Possible Combinations of n Bits. Design a program that generates all 
the possible combinations of n bits.
WTD: For a given integer n, generate all possible binary sequences of length n using bitwise 
operations. The output should be a list of all these combinations.
(e.g.: I/P: n=3; O/P: 000, 001, 010, 011, 100, 101, 110, 111)*/

#include<stdio.h>

void possible_combinations(int n);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    possible_combinations(n);
    return 0;
}

void possible_combinations(int n)
{
    int i,j,comb=1;
    for(i=0; i<n; i++)
    {
        comb = comb * 2;
    }
    for(i=0; i<comb; i++)
    {
        for(j=n-1; j>=0; j--)
        {
            printf("%d",((i >> j)&1));   
        }
        printf("\n");
    }
}