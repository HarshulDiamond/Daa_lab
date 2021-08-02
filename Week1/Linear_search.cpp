
#include <iostream>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
  int t;
  cin>>t;
  while(t--)
  {
      int n,temp;
      cin>>n;
      int arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];

      }
      cin>>temp;
  
  int size = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, temp, 0, size - 1);
  if (result == -1)
    printf("Not Present");
  else
    printf("Present %d", result+1);
  }

}