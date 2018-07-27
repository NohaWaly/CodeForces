#include <iostream>

using namespace std;

int main()
{
    int rounds,counter=0;
    cin>>rounds;
    int home[rounds],guest[rounds];
    for(int i=0;i<rounds;i++)
    {
        cin>>home[i]>>guest[i];
    }
    for(int x=0;x<rounds;x++)
    {
        for(int y=0;y<rounds;y++)
        {
            if(home[x]==guest[y])
            {
                counter = counter +1;
            }
        }
    }
    cout<<counter;
    return 0;
}
