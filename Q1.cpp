#include<iostream>
#include<vector>
using namespace std;
void printelements(vector<int>&arr,int currindex,int n){
    if (currindex == n) {
        return;
    }
    printelements(arr,currindex+1,n);
    cout<<arr[currindex]<<" ";
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printelements(arr,0,n);
    return 0;
}