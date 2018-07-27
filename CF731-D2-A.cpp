#include <iostream>
#include <cstring>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    string word;
    int different1, different2,sum=0,initial1=0,initial=0,initial2=0;
    cin>>word;
    if(word[0]!='a')
        {
           initial1= abs('a'- word[0]);
           initial2=abs(26-initial1);
           if(initial1 < initial2)
           {sum = sum + initial1;}
           else
           {sum = sum + initial2;}
        }
    for(int i=0;i<word.length()-1;i++)
    {
        different1 = abs(word[i]-word[i+1]);
        different2 = 26-different1;
        if(different1 < different2)
        {
            sum=sum+different1;
        }
        else
        {
            sum=sum+different2;
        }
    }
    cout<<sum;
    return 0;
}
