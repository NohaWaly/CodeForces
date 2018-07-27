#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string word1,word2;
    int counter=0,len;
    cin>>word1;
    cin>>word2;
    len = word1.length();

   for(int i=0;i<len;i++)
   {
        word1[i]= tolower(word1[i]);
        word2[i]= tolower(word2[i]);
   }
        if(word1>word2)
        {
            counter =1;
        }
        else
            if(word2>word1)
        {
            counter = -1;
        }
        else if(word1==word2)
        {
            counter = 0;
        }

    cout<<counter;
    return 0;
}
