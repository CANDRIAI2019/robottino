#include <bits/stdc++.h>
using namespace std;

string in; int l;

int test(){
    int s=0;
    for(int i=0;i<l;i++)
        s+=(int)in[i];
    return s%2;
}

int main(){
    cin>>l; // lunghezza
    cin>>in; // stringa di input
    cout<<test();
    return 0;
}
