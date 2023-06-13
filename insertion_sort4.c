#include<stdio.h>
#include<stdlib.h>
void main ()
{
    int arr[5]={25,18,99,40,70};
    int i,j,k,temp;

    printf("insertion sort\n");
    printf("array before the sorting\n");
    for(i=0;i<=5;i++)
    {
        printf("%d\t",arr[i]);

    }
    for(i=0;i<=4;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];

                for(k=i;k>j;k--)
                {
                    arr[k]=arr[k-1];
                    arr[k+1]=temp;

                }
            }
        }
    }
    printf("\narray after sorting\n");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",arr[i]);

    }
    
}