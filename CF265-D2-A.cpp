#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
   int counter=1,i=0;
   string word, instruction;
   cin>>word>>instruction;
   for(int x=0;x<instruction.size();x++)
   {
       if(word[i]== instruction[x])
       {
          counter++;
          i++;
       }
   }
   cout<<counter;
    return 0;
}
