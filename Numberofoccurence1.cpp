#include<bits/stdc++.h>
using namespace std;

int main()
{
         int n, x;
         cin>>n>>x;

         int count =0;



         int arr[n];
         for(int i=0; i< n; i++)
         {
                  cin>>arr[i];
         }

         for(int i =0; i<n; i++)
         {
                  if(x == arr[i])
                  {
                           count++;
                  }
         }

         cout<<count<<endl;
}