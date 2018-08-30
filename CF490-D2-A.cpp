#include <iostream>

using namespace std;

int main()
{
   int n,num,count1=0,count2=0,count3=0,mini,counter=0,Arr[4][5001];
   cin>>n;
   for(int i=1;i<=n;i++){
      cin>>num;
      if(num == 1){
        Arr[1][++count1]=i;
      }
      else if(num == 2){
        Arr[2][++count2]=i;
      }
      else if(num == 3){
        Arr[3][++count3] = i;
      }
   }
   mini = min(min(count1,count2),count3);
   cout<<mini<<endl;
   if(mini>0){
   for(int i=1;i<=mini;i++){
      cout<<Arr[1][i]<<" "<<Arr[2][i]<<" "<<Arr[3][i]<<endl;
   }}
    return 0;
}
