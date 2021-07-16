#include<bits/stdc++.h>
using namespace std;

int largestNumber(int arr[], int n)
{
         int max = arr[0];

         for(int i =0; i < n; i++)
         {
                  if(arr[i] > max)
                  {
                           max = arr[i];
                  }
         }

         return max;
}

int main()
{
         int t;
         cin>>t;

         while(t--)
         {
                  int n;
                  cin>>n;

                  int a[n];
                  for(int i=0; i<n; i++)
                  {
                           cin>>a[i];
                  }

                  cout<<largestNumber(a,n);
         }

         cout<<endl;

}