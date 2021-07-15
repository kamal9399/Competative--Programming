#include<bits/stdc++.h>
using namespace std;


         void Rotate(int arr[], int n)
         {
                  int x = arr[n-1];

                  for(int i = n-1; i > 0; --i)
                  {
                           arr[i] = arr[i-1];
                  }

                  arr[0] = x;

         }


int main()
{
         int n , i;
         cin>>n;

         int arr[n];
         for(i =0; i< n; i++)
         {
                  cin>>arr[i];
         }

        Rotate(arr,n);

        for(i =0; i<n ; i++)
        {
                 cout<<arr[i]<<" ";
        }

        cout<<endl;

}