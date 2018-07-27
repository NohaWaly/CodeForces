#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int costOfShovel,coin,cost=0,miniNum=0,i=0;
    cin>>costOfShovel>>coin;
    do{
             i++;
            cost = costOfShovel*i;

            miniNum = cost%10;

    }while (miniNum != coin && miniNum != 0);
    cout<<i;
    return 0;
}
