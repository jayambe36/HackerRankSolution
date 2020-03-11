
#include <iostream>
#include <deque> 
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
        {
        int n,i,k;
        cin>>n>>k;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        deque<int>d(k);
        for(i=0;i<k;i++)
            {
            while((!d.empty())&&arr[i]>=arr[d.back()])
                d.pop_back();
            d.push_back(i);
        }
        for(;i<n;i++)
            {
            cout<<arr[d.front()]<<" ";
            while((!d.empty())&&d.front()<=i-k)
                d.pop_front();
             while((!d.empty())&&arr[i]>=arr[d.back()])
                d.pop_back();
            d.push_back(i);
        }
        cout<<arr[d.front()]<<"\n";
            
        }
    return 0;
}