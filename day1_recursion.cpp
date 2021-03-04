/*
Need to follow 2 steps
1. must have exit or terminate point
2. must call recursive function into that function body
*/

#include<bits/stdc++.h>
using namespace std;

void Fun1(int i, int n)
{
    if(i > n) {
            cout<<endl;
            return;
    }
    cout<<i<<"+";
    Fun1(i + 1 , n);
}
void Fun2(int i, int n)
{
    if(i < n) {
            cout<<endl;
            return;
    }
    cout<<i<<"+";
    Fun2(i - 1 , n);
}
int main()
{
    int n;
    cin>>n;
    Fun1(1, n);
    Fun2(n,1);

}
