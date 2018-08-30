#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    int Arr[n+1];
    for(int i=1;i<=n;i++){
        cin>>k;
        Arr[k]=i;
    }
    for(int j=1;j<=n;j++){
        cout<<Arr[j]<<" ";
    }
    return 0;
}
