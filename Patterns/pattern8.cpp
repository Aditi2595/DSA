#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1, j = 1;
    while(i<=n){
        int k = 1;
        while(k<=n){
            cout<<j<<"\t";
            j++;
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}