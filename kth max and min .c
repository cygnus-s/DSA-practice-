# include <stdio.h>
void bubblesort(int arr[],int n )
{
    int t;
    int i;
    int j;
    for(i=0 ; i<n-1 ; i++){
        for(j=i+1; j<n;j++){
                if(arr[i]>arr[j]){
                    t=arr[i];
                    arr[i]=arr[j];
                    arr[j]=t;
                }
        }
    }
}
void kthsmallest( int arr[],int k )
{
    printf(" \n the kth smallest number is :- %d",arr[k-1]);
}
void kthBiggest(int arr[],int k,int n)
{
    printf("\n the kth maximum number is :- %d",arr[n-k]);
}
int main()
{
    int arr[]={9,4,5,6,7,2,8};
    int n = 7;
    int r;
    bubblesort(arr,n);
    for(r=0;r<n;r++){
        printf("%d \n ",arr[r]);
    }
    kthsmallest(arr,5);
    kthBiggest(arr,5,7);
    return 0;
}
