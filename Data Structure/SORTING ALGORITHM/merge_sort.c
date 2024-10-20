#include<stdio.h>
void merge(int arr[] ,int low, int high);
void sort(int arr[], int low , int mid ,int high);


int main()
{
    int arr[10]={7,4,2,8,6,1,9,3,5,10};
    // int arr[5]={40,23,18,7,11};
    printf("Array before sort\n");
    for(int i =0 ; i<10 ; i++)
    {
        printf("%d\t", arr[i]);
    }
    merge(arr,0,9);
    printf("\nArray after sort\n");
    for(int i =0 ; i<10 ; i++)
    {
        printf("%d\t", arr[i]);
    }

}
void merge(int arr[], int low, int high)
{
     if(low<high)
     {
        int mid=low + (high-low)/2;
        merge(arr,low,mid);
        merge(arr , mid+1, high);
        sort(arr , low , mid , high);
        // printf("\nwhole array:- ");
        // for(int i=0;i<10;i++)
        // {
        //     printf("%d\t",arr[i]);
        // }
     }
}
void sort(int a[], int low , int mid , int high)
{
    int s1=mid-low+1;
    int s2=high-mid;
    int L[s1], R[s2]; 
    int k=low,i=0,j=0;
    for (int i = 0; i < s1; i++)
    {
        L[i] = a[low + i];
    }    
    for (int j = 0; j < s2; j++)
    {
        R[j] = a[mid+1+j];
    }
    i=0;
    j=0;
    while((i<s1) && (j<s2))
    {
        if (L[i]<=R[j])
        {
            a[k]=L[i];
            i++,k++;
        }
        else
        {
           a[k]=R[j];
            j++,k++; 
        }
    }
    while(i<s1)
    {
        a[k]=L[i];
        i++,k++;
    }
    while(j<s2)
    {
        a[k]=R[j];
        j++,k++;
    }    
}