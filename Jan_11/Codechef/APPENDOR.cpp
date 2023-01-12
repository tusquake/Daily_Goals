#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x=-1;
        int n;
        cin>>n;
        int k;
        cin>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int bor=arr[0];
        for(int i=1;i<n;i++){
           bor=bor|arr[i]; 
        }
        // cout<<bor<<endl;
        int a=k-bor;
        int check=((a&k)==a)?a:-1;
        cout<<check<<endl;
    }
	return 0;
}
