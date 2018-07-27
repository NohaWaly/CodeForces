#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    int c,d;
    int flag=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>x;
            if(x == 1)
            {
                c=i;
                d=j;
                flag =1;
                break;

            }
        }

        if(flag ==1)
                break;
    }
    cout<<abs(c-2)+abs(d-2);
    return 0;
}

