#include<iostream>
#include<vector>
using namespace std;
int indexof(vector<int>&arr,int currelem,int end,int x){
    if (currelem == end) return -1;
    if(arr[currelem]==x){
        return currelem;
    }
    return indexof(arr,currelem+1,end,x);
}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);
       for(int i=0;i<n;i++){
        cin >> v[i];
       }
    int x;
    cin >> x;
    cout<<indexof(v,0,n,x);
    
}