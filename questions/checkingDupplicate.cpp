#include <bits/stdc++.h>

using namespace std;

int getGcd(int a,int b){
    if (a == 0)
        return b;
    return getGcd(b%a, a);
}
int maximumGcdAndSum(vector <int> A, vector <int> B,int n) {
    // Complete this function
    
    sort(A.begin(),A.end());
    set<int> s( A.begin(), A.end() );
    A.assign( s.begin(), s.end() );
    sort(B.begin(),B.end());
    set<int> s1( B.begin(), B.end() );
    B.assign( s1.begin(), s1.end() );
    
    vector<int>::iterator it;
    for(it=A.begin();it!=A.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    vector<int> B(n);
    for(int B_i = 0; B_i < n; B_i++){
       cin >> B[B_i];
    }
    int res = maximumGcdAndSum(A, B,n);
    cout << res << endl;
    return 0;
}
