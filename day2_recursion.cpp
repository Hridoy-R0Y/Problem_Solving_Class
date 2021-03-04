#include<bits/stdc++.h>
using namespace std;

int func(int x) {
    cout<<x<<endl;
    if(x == 0) return 0;
    if(x == 1) return 1;
    return func(x - 1) + func(x - 2);
}
int main() {
    int n;
    cin >> n;
    int c =  func(n);
    cout << c;
    return 0;
}

/// Tibonacci (Named by author for fun)
/// 0 1 2 3 6 11 20 37 68 ....... (task1)
/// 4 -> 12 , 5 -> 23 ......... (task2)

