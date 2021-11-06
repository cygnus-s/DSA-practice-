#include <stdio.h>
struct pair
{
int min ;
int max ;
}
;
 struct pair getMinMax(int arr[],int n )
 {
     struct pair minmax;
     int i;

     if(n==1)
     {
         minmax.max = arr[0];
         minmax.min = arr[0];

     }
     if(arr[0]>arr[1])
     {
         minmax.max =arr[0];
         minmax.min = arr[1];
     }
     else
     {
         minmax.max = arr[1];
         minmax.min = arr[0];

     }

     for( i=2 ; i<n ; i++)
     {
         if(arr[i]>minmax.max)

             minmax.max = arr[i];

         else if (arr[i]<minmax.min)

             minmax.min = arr[i];
     }
        return minmax;
 }

 int main()
 {
     int arr[]= {1,2,3,4,5,6,7,8,8,10,11};
     int arr_size = 11;
     struct pair minmax = getMinMax ( arr, arr_size);
     printf("minimum = %d",minmax.min);
     printf("maximum = %d",minmax.max);

 }
