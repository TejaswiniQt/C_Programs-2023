
#include<stdio.h>

void frequency_of_arr_ele(int *arr,int *freq,int size);

int main()
{
    int arr[50],freq[50],size,i;
    printf("Enter the array size: ");
    scanf("%d",&size);
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",(arr+i));
        freq[i] = -1;
    }
    frequency_of_arr_ele(arr,freq,size);
    for(i=0; i<size; i++)
    {
        if(arr[i] != 0)
        printf("%d occurs %d times\n",arr[i],freq[i]);
    }
    return 0;
}

void frequency_of_arr_ele(int *arr,int *freq,int size)
{
    int i,j,count;
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
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