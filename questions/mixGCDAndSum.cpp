#include <bits/stdc++.h>

using namespace std;
map<int,int>hs;
map<int,int>bs;
int getGcd(int a,int b){
    if (a == 0)
        return b;
    return getGcd(b%a, a);
}
int maximumGcdAndSum(vector <int> A, vector <int> B,int n) {
    // Complete this function
    
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    int max_gcd=0,max_sum=0;
    int pos_i,pos_j,gcd;
    for(int i=n-1;i>=0;i--){
        if(A[i]>max_gcd){
            
                for(int j=n-1;j>=0;j--){
                    if(B[j]>max_gcd){

                        
                            if(A[i]==B[j]){
                                gcd=A[i];
                            }else if(A[i]==1 || B[j]==1 || A[i]==(B[j]+1) || B[j]==(A[i]+1)){
                                gcd=1;
                            }else{
                                gcd=getGcd(A[i],B[j]);
                            }

                            if(gcd>max_gcd){
                                max_gcd=gcd;   
                                max_sum=A[i]+B[j];
                                pos_i=i;
                                pos_j=j;
                            }else if(gcd==max_gcd){

                                if(A[i]+B[j]>max_sum){
                                    max_sum=A[i]+B[j];

                                }
                                
                                pos_i=i;
                                pos_j=j;
                            }
                    }else{
                        break;
                    }

                }
        }else{
            break;
        }
        
    }
    //cout<<A[pos_i]<<" "<<B[pos_j]<<endl;
    return max_sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    int x,y;
    for(int A_i = 0; A_i < n; A_i++){
        cin>>x;
        if (hs.find(x) == hs.end() ) {
            hs[x]=1;
          A[A_i]=x;
        }
    }
    vector<int> B(n);
    for(int B_i = 0; B_i < n; B_i++){
        cin>>y;
        if (bs.find(y) == bs.end() ) {
            bs[y]=1;
          B[B_i]=y;
        }
    }
    int res = maximumGcdAndSum(A, B,n);
    cout << res << endl;
    return 0;
}
