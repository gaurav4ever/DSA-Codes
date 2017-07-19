#include <bits/stdc++.h>

using namespace std;
int getGcd(int a,int b){
    if(a==0 || b==0)return 0;
    if(a==b)return a;
    if(a>b)return getGcd(a-b,b);
    return getGcd(a,b-a);
}
int maximumGcdAndSum(vector <int> A, vector <int> B,int n) {
    // Complete this function
    
    //sort(A.begin(),A.end());
    //sort(B.begin(),B.end());
    
    int max_gcd=0,max_sum=0;
    int pos_i,pos_j,gcd;
    for(int i=n;i>=0;i--){
        for(int j=n;j>=0;j--){
            
            
            if(A[i]==B[j]){
                gcd=A[i];
            }else if(A[i]%B[j]==0){
                gcd=B[j];
            }else if(B[j]%A[i]==0){
                gcd=A[i];
            }else if(A[i]==1 || B[j]==1){
                gcd=1;
            }else if(A[i]==(B[j]+1) || B[j]==(A[i]+1)){
                gcd=1;
            }else{
                gcd=getGcd(A[i],B[j]);
            }
            
            if(gcd>max_gcd){
                max_gcd=gcd;   
                max_sum=A[i]+B[j];
            }else if(gcd==max_gcd){
                
                if(A[i]+B[j]>max_sum){
                    max_sum=A[i]+B[j];
                    
                }
            }
            
        }
    }
    //cout<<A[pos_i]<<" "<<B[pos_j]<<endl;
    return max_sum;
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
