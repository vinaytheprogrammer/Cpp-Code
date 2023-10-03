#include<bits/stdc++.h>
using namespace std;

 string colName (long long int n)
    {
        // your code here
        string ans="";
        while(n--)
        {
        // cout<<ans<<endl;
            ans+=(char)(n%26+'A');
            n/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main()
{

int n;
cout<<"ENTER VAlue"<<endl;
cin>>n;

cout<<colName(n);
return 0;
}