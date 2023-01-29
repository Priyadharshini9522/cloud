#include<stdio.h>

void LinearSearch(int arr[], int len, int item)
{
    for(int i=0;i < len;i++)
    {
        if(arr[i] == item)
        {
        printf("%d Found at index %d", item, i);
        }
    }
    printf("Not Found");
}

int main() 
{
    int arr[3]; 
    printf("Enter the array elements");
    for(int i=0;i<3;i++)
    {
      scanf("%d",&arr[i]);
	}
    int len = sizeof(arr)/sizeof(arr[0]);

    // item to be searched
    int item = 400;
    LinearSearch(arr, len, item);

    return 0;
}