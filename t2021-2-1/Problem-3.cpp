#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int count=1;
        int x = i%2==0 ? i-1 : i;
        for(int j=1;j<x;j++){
            cout<<count<<",";
            count+=2;
        }
        cout<<count;
        cout<<endl;
    }
    return 0;
}
