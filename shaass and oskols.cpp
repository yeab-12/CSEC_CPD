#include<bits/stdc++.h>
using namespace std;
int main() {
    int size,sizekill,boxnum,p;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) {
        cin>>arr[i];
    }
    cin>>sizekill;
    for(int i=0; i<sizekill; i++) {
        cin>>boxnum>>p;
        arr[boxnum-2]+=p-1;
        arr[boxnum]+=arr[boxnum-1]-p;
        arr[boxnum-1]=0;
    }
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<endl;
    }
}
