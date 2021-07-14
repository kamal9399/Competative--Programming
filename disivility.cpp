#include<bits/stdc++.h>
using namespace std;

int main()
{
         int n;
         cin>>n;


         int last_digit;

         int a[n];

         for(int i =0; i< n; i++)
         {
                  cin>>a[i];
         }

         for(int i =0; i< n; i++)
         {
                  last_digit =0;
                  last_digit = last_digit *10 +a[i] %10;

         }

         if(last_digit %10 == 0)
         {
                  cout<<"Yes"<<endl;
         }

         else
         {

                  cout<<"No"<<endl;
         }

}