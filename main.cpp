#include<bits/stdc++.h>
using namespace std;
bool f(int x,int y)
{
    return x>y;
}
int main()
{
    int n;cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end(),f);
    auto it=v.begin();
    it++;
    int max = *v.begin()*1;
    for(int i=1;i<n;i++)
    {
        it++;
        int cnt = it-v.begin();
        if(v[i]*cnt>max)
        {
            max=v[i]*cnt;
        }
    }
    cout<<max<<endl;
    return 0;
}
