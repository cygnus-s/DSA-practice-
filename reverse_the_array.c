#include <stdio.h>
void reversearray(int arr[],int start ,int end ){
	int temp ;
	while(start < end)
	{
		temp = arr[start];
		arr[start]=arr[end];
		arr[end]=temp ;
		start++;
		end--;
	}
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    reversearray(arr, 0, n-1);
     int i;
  for (i=0; i <n ; i++){
  	printf("%d ", arr[i]);
  }
    return 0;
}
