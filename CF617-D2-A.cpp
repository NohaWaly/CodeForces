#include <iostream>

using namespace std;

int main()
{
    int Arr[5] = {5,4,3,2,1},x,i=0,counter=0;
    cin>>x;
    while(x>0){
        if(x>=Arr[i]){
            x-=Arr[i];
            counter++;}
        else{
            i++;
        }
    }
   cout<<counter;
    return 0;
}
