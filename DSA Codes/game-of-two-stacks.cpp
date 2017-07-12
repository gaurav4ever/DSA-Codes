#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        long long int n,m,x,top1=-1,top2=-1;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i <n; a_i++){
           cin >> a[a_i];
            top1++;
        }
        vector<int> b(m);
        for(int b_i =0; b_i<m; b_i++){
           cin >> b[b_i];
            top2++;
        }

        int sum1=0,count1=0,topNew1=0;
        for(int i=0;i<n;i++){
            if(sum1+a[i] > x)break;
            sum1+=a[i];count1++;topNew1++;
        }
        int i=0;
            while(i<m && topNew1>=0){
                sum1+=b[i++];
                while(sum1 > x && topNew1>0){
                    sum1-=a[--topNew1];
                }
                if(sum1<=x && count1<topNew1+i)
                    count1=topNew1+i;
            }
            cout<<count1<<endl;
                  
    }
    return 0;
}
