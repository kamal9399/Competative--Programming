#include<bits/stdc++.h>

using namespace std;

#define ll long long ;

pair<long long ,long long> getMinMax(long long a[], int  n)
{

         pair<long long , long long> k;

         sort(a,a+n);

         k.first = a[0];
         k.second = a[n-1];

         return k;

}

int main()
{
         int t;
         cin>>t;

         while(t--)
         {
                  int n; 
                  cin>>n;

                  long long a[n];

                  for(int i =0; i<n; i++)
                  {
                           cin>>a[i];
                  }

                  pair<long long , long long> pp = getMinMax(a,n);

                  cout<<pp.first<<" "<<pp.second<<endl;


         }
}