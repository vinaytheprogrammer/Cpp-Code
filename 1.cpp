#include<bits/stdc++.h>
using namespace std;

// C++ STL 
int main()
{
    string s="asdfghjhgfdsasdfhgfds";
    int n=s.length();
    map<char ,int> m;

for(int i=0;i<n;i++)
{
    m[s[i]]++;
}

for(auto i:m)
{
    cout<<i.first<<"  "<<i.second<<endl;
}

return 0;
}