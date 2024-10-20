#include<stdio.h>
#include<stdlib.h>
int partiton(int a[], int low, int high);
void quick_sort(int a[], int low , int high);
int main()
{
    int arr[10]={4,7,2,8,6,1,9,3,5,10};
    printf("Array before sort\n");
    for(int i =0 ; i<10 ; i++)
    {
        printf("%d\t", arr[i]);
    }
    quick_sort(arr , 0 ,10);
    // int pos=partition(arr, 0, 10);
    printf("\nArray after sort\n");
    for(int i =0 ; i<10 ; i++)
    {
        printf("%d\t", arr[i]);
    }
    // printf("\n pivote element %d ia at position %d",arr[0], pos);

    return 0;
   
}
int partition(int a[], int low , int high)
{
    int pivot =a[low];
    int i,j,temp;
    i=low;
    j=high-1;
    while (i<j)
    {
       while (pivot>a[i])
       {
        i++;
       }
       while (pivot<a[j])
       {
        j--;
       }
       if(i<j)
       {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
       }     
    }
    return j;
}

void quick_sort(int arr[], int low , int high)
{
    if(low<high)
    {
        int p = partition(arr,low,high);
        printf("\nmiddle element= %d  position= %d \n",arr[p],p);
        for(int i=low; i<p ;i++)
        {
            printf("%d\t", arr[i]);
        }
        printf("\n");
        for(int i=p+1; i<high ;i++)
        {
            printf("%d\t", arr[i]);
        }
        quick_sort(arr , low , p);
        quick_sort(arr, p+1 , high);
    }
}
