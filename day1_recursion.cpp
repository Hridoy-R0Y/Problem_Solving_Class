/*
2 steps
1. must have exit or terminate point
2. must call recursive function into that function body
*/


#include<bits/stdc++.h>
using namespace std;

void Fun(int i)
{
    if(i == 0) return;
    cout<<i<<"  I am Hridoy"<<endl;
    i--;
    Fun(i);
}

int main()
{
    int n;
    cin>>n;

    ///for(int i = 1 ; i <= n; i++){
    ///    cout<<i<<"  I am Hridoy"<<endl;
    ///}

    Fun(n);
}
