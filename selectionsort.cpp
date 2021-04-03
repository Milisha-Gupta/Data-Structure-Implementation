// { Driver Code Starts
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
} // } Driver Code Ends

/*In tutorial, we are running the loop in ascending order, so keep picking the minimum element 
and put it at the leftmost unsorted position. Here the loop is running in descending order, 
so we need to pick the maximum element and put it in the rightmost unsorted position. 
Select function will just return index of the maximum element.*/
class Solution
{
public:
int select(int arr[], int i){
int max_index= i;

// You were updating 'i' here instead of 'j'.
for(int j= i-1;j>=0;j--){
if(arr[max_index] < arr[j]){
max_index = j;
}
}
return max_index;
}


void selectionSort(int arr[], int n){

// iterate till i >= 1.
for(int i = n-1; i >= 1; i--){
int max_index = select(arr,i);
swap(&arr[i],&arr[max_index]);
}
}


};

// { Driver Code Starts.
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
    ob.selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends
