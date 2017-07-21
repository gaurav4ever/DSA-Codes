#include <bits/stdc++.h>

using namespace std;

int getGcd(int a,int b){
    if (a == 0)
        return b;
    return getGcd(b%a, a);
}
int d1[1000001]={0};
int d2[1000001]={0};
int max_pos_a=0,max_pos_b=0,max_gcd=0;
int max_a=0,max_b=0;
int maximumGcdAndSum(vector <int> A, vector <int> B,int n) {
    // Complete this function
    
    sort(A.begin(),A.end());
    //A.erase( unique( A.begin(), A.end() ), A.end() );
    sort(B.begin(),B.end());
    //B.erase( unique( B.begin(), B.end() ), B.end() );
    
    for(int i=n-1;i>=0;i--){
        if(A[i]%max_gcd==0){
            max_a=A[i];
            break;
        }
    }
    
    for(int i=n-1;i>=0;i--){
        //cout<<B[i]<<" ";
        if(B[i]%max_gcd==0){
            max_b=B[i];
            break;
        }
        
    }
    //cout<<max_a<<" "<<max_b<<endl;
    return max_a+max_b;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    int x,y;
    for(int A_i = 0; A_i < n; A_i++){
        cin>>x;
        if(d1[x]==0){
            A[A_i]=x;
            if(max_pos_a<A[A_i])max_pos_a=A[A_i];
            for(int j=1;j*j<=A[A_i];j++){
                
                if(A[A_i]%j==0){
                    
                    d1[j]++;
                    
                    if(d1[A[A_i]/j]!=0)break;
                    d1[A[A_i]/j]++;
                }
            }    
        }
    }
    vector<int> B(n);
    for(int B_i = 0; B_i < n; B_i++){
        cin>>y;
        if(d2[y]==0){
            B[B_i]=y;
            if(max_pos_b<B[B_i])max_pos_b=B[B_i];
            for(int j=1;j*j<=B[B_i];j++){
                if(B[B_i]%j==0){
                    d2[j]++;
                    
                    if(d2[B[B_i]/j]!=0)break;
                    d2[B[B_i]/j]++;
                }
            }
        }
    }
    
    int max_pos=0;
    if(max_pos_a>max_pos_b)max_pos=max_pos_a;
    else max_pos=max_pos_b;
    
    for(int i=max_pos;i>=0;i--){
        if(d1[i]>=1 && d2[i]>=1){
            max_gcd=i;
            break;
        }
        
    }
    
    //cout<<max_gcd;
    int res = maximumGcdAndSum(A, B,n);
    cout << res << endl;
    return 0;
}
