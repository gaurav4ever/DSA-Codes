#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int,int> hm;
int heap[500001],heap_size=0;
void insert(int x){
    if(heap_size==0){
        heap_size++;
        heap[heap_size]=x;
        hm[x]=heap_size;
        return ;
    }else{
        heap_size++;
        heap[heap_size]=x;
        hm[x]=heap_size;
        int k=heap_size;
        while(k>1){
            if(heap[k]<heap[k/2]){
                hm[heap[k]]=k/2;
                hm[heap[k/2]]=k;
                
                int temp=heap[k];
                heap[k]=heap[k/2];
                heap[k/2]=temp;
            }else{
                break;
            }
        }
    }
}
void del(int x){
    int index=hm[x];
    hm[x]=0;
    heap[index]=heap[heap_size];
    hm[heap[heap_size]]=index;
    heap_size--;
    
    while(1){
        int left=2*index;
        int right=2*index+1;
        if(left<=heap_size){
            if(right<=heap_size){
                if(heap[index]>heap[left] || heap[index]>heap[right]){
                    int si;
                    if(heap[left]<heap[right]){
                        si=left;
                    }else{
                        si=right;
                    }
                    hm[heap[index]]=si;
                    hm[heap[si]]=index;
                    
                    int temp=heap[index];
                    heap[index]=heap[si];
                    heap[si]=temp;
                    
                    index=si;
                }else break;
            }else{
                if(heap[index]>heap[left]){
                    
                    hm[heap[index]]=left;
                    hm[heap[left]]=index;

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
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x;
        if(x==1){
            cin>>y;
            insert(y);
        }else if(x==2){
            cin>>y;
            del(y);
        }else{
            cout<<heap[1]<<endl;
        }
    }
    return 0;
}