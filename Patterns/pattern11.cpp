// method 1: using a third variable
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int count = i;
//         int j=1;
//         while(j<=i){
//             cout<<count<<"\t";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }

// method2: without using a third variable
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}