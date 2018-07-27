#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int cases;
    int num,untreated=0,cops=0;
    cin>>cases;
    for(int i=0;i<cases;i++)
    {
        cin>>num;
        if(num <0 && cops == 0 )
        {
          untreated = untreated-num;
        }
        else if(num<0 && cops != 0)
          cops = cops-1;
        else
            cops=cops+num;
    }
    cout<<untreated;
    return 0;
}
