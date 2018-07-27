#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[s.length()],j=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '+') continue;
        arr[j]=s[i]-48;
        j++;
    }
    for(int i=0;i<j;i++){
        for(int r=1;r<j;r++){
            if(arr[r]<arr[r-1]){
                swap(arr[r],arr[r-1]);
            }
        }
    }
    for(int i=0;i<j;i++){
        if(i==(j-1)){
            cout<<arr[i];
        }
        else{
        cout<<arr[i]<<'+';
        }
    }
    return 0;
}
