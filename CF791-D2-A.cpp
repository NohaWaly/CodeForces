#include <iostream>

using namespace std;

int main()
{
    int limak,bob,sum=0;
    cin>>limak>>bob;
    while(limak <= bob){
        limak = limak *3;
        bob = bob *2;
        sum = sum+1;
    }
    cout<<sum;
    return 0;
}
