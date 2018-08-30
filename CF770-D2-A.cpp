#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    while(n>0){
      for(int j=97;j<k+97;j++){
            if(n ==0)break;
            cout<<(char)j;
            n--;
        }
    }

    return 0;
}
