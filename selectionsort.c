#include<stdio.h>
#include<stdlib.h>

void main ()
{

    int arr[10]={26,8,9,65,19,77,30,700,563,22};
    int i,j,temp;
    

    printf("selection sort\n");
    printf("array before sorting\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\t",arr[i]);

    }
    for(i=0;i<=9;i++)
    {
        for(j+1;j<=10;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;

            }
        }
    }
    printf("\n array after sorting\n");
    for(i=0;i<=9;i++)
    {
        printf("%d\t",arr[i]);


    }
}