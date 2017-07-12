#include <cmath>
#include <iostream>
using namespace std;
int check(int a[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1],b[n+1],count[n+1]={0},c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=i+1;
        }
        int flag,done=0;
        for(int k=0;k<2;k++){
            for(int j=n-1;j>0;j--){
             
                if(a[j]<a[j-1]){   
                    count[a[j-1]]++;
                    if(count[a[j-1]]>2){done=1;break;}
                    int temp=a[j];
                    a[j]=a[j-1];
                    a[j-1]=temp;
                    c++;
                }
                flag=check(a,n);
                if(flag==0)break;
                if(done==1)break;
            }  
             if(flag==0)break;
            if(done==1)break;
        }
        if(done==1)cout<<"Too chaotic"<<endl;
        else
            cout<<c<<endl;
    }
    return 0;
}
