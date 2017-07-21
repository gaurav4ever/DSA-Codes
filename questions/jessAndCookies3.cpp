#include <iostream>
#include <vector>
#include <map>
using namespace std;

long long int heap[1000001],heap_size=0;
void insert(long long int x){
    if(heap_size==0){
        heap_size++;
        heap[heap_size]=x;
        return ;
    }else{
        heap_size++;
        heap[heap_size]=x;
        long long int k=heap_size;
        while(k>1){
            if(heap[k]<heap[k/2]){
                long long int temp=heap[k];
                heap[k]=heap[k/2];
                heap[k/2]=temp;
                
                k=k/2;
            }else{
                break;
            }
        }
    }
}
void del(long long int x){
    long long int index=1;
   
    heap[1]=heap[heap_size];
    heap_size--;
    
    while(1){
        long long int left=2*index;
        long long int right=2*index+1;
        if(left<=heap_size){
            if(right<=heap_size){
                if(heap[index]>heap[left] || heap[index]>heap[right]){
                    long long int si;
                    if(heap[left]<heap[right]){
                        si=left;
                    }else{
                        si=right;
                    }
                    
                    long long int temp=heap[index];
                    heap[index]=heap[si];
                    heap[si]=temp;
                    
                    index=si;
                }else break;
            }else{
                if(heap[index]>heap[left]){
                    
                    int temp=heap[index];
                    heap[index]=heap[left];
                    heap[left]=temp;

                    index=left;
                    
                }else break;
            }
        }else{
            break;
        }
    }
    
}
int main() {
    long long int n,m;
    cin>>n>>m;
    long long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        insert(a[i]);
    }
    long long int count=0,flag=0;
    while(1){
        long long int min1=heap[1];
        if(heap_size==1 && min1<m){
            flag=1;
            break;
        }
        else if(min1<m){
            count++;
            del(min1);
            long long int min2=heap[1];
            del(min2);
            
            long long int new_val=1*min1+2*min2;
            insert(new_val);
        }else break;
    }
    if(flag==1)cout<<"-1";
    else cout<<count;
    
    
    return 0;
}