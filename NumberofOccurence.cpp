#include<iostream>
using namespace std;


class Solution 
{

         public:

         int numberofOccurence(int arr[], int n, int x)
         {
                  int count = 0;

                  for(int i =0; i<n; i++)
                  {
                           if(x == arr[i])
                           count++;
                  }

                  return count;
         }

};

int main()
{
         int t;
         cin>>t;

         while (t--)
         {
                 int n,x;
                 cin>>n>>x;

                 int arr[n];

                 for(int i= 0; i<n; i++)
                 {
                          cin>>arr[i];
                 }


                 Solution ob;

                 auto ans  = ob.numberofOccurence(arr, n, x);


                 cout<<ans<<endl;
         }
         
}