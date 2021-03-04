#include<bits/stdc++.h>
using namespace std;

int func(int x) {
    if(x <= 0) return 0;
    return func(x - 1) + x;
}
int main() {
    int n;
    cin >> n;
    int c =  func(n);
    cout << c;
    return 0;
}

