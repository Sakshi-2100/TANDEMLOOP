#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of list"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mp;
    for(int i=1;i<=9;i++){
        mp[i]=0;
    }
    mp[1]=n;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
            mp[2]++;
        if(arr[i]%3==0)
            mp[3]++;
        if(arr[i]%4==0)
            mp[4]++;
        if(arr[i]%5==0)
            mp[5]++;
        if(arr[i]%6==0)
            mp[6]++;
        if(arr[i]%7==0)
            mp[7]++;
        if(arr[i]%8==0)
            mp[8]++;
        if(arr[i]%9==0)
            mp[9]++;
    }
    cout<<"{";
    for(auto it : mp){
        cout<<it.first<<":"<<it.second<<",";
    }
    cout<<"}";

    return 0;
}