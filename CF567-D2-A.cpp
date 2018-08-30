#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;
   cin>>n;
   int Arr[n];
   for(int i=0;i<n;i++){
    cin>>Arr[i];
   }
   for(int i=0;i<n;i++){
    int mini=2e9, maxi=0;
    if(i != 0){
         mini = min(mini, abs(Arr[i]- Arr[i-1]));
         mini = min(mini, abs(Arr[i]- Arr[i+1]));
         maxi = max(maxi, abs(Arr[i]- Arr[0]));
         maxi = max(maxi, abs(Arr[i]- Arr[n-1]));
       }
     if(i == 0){
         mini = min(mini, abs(Arr[i]- Arr[i+1]));
         maxi = max(maxi, abs(Arr[i]- Arr[n-1]));
     }
     if( i == (n-1)){
         mini = min(mini, abs(Arr[i]- Arr[i-1]));
         maxi = max(maxi, abs(Arr[i]- Arr[0]));
     }
     cout<<mini<<" "<<maxi<<endl;

   }


    return 0;
}
