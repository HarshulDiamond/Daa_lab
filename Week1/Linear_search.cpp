#include <iostream>
using namespace std;


int linearsearch(int array[], int n, int x) {

  // Going through array sequencially
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;
}

int main() {
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
      int p = sizeof(arr) / sizeof(arr[0]);
      int result = linearsearch(arr, p, temp);

     if (result == -1) 
      cout << "Not Present" ;
     else
       cout << "Present " << result+1;
}
}