#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct stacks{
    int s1[100];
    int s2[100];
    int s3[100];
    int top1,top2,top3;
};
void push(struct stacks* s,int ele){
    s->top1++;
    s->s1[s->top1]=ele;
}
//element from one stack to another stack
void pushStack3(struct stacks *s,int ele){
    s->top3++;
    s->s3[s->top3]=ele;
    //cout<<"\nPushed "<<ele<<" to stack3";
}
void pushStack2(struct stacks *s,int ele){
    s->top2++;
    s->s2[s->top2]=ele;
}
bool isEmptyStack1(struct stacks *s){
    if(s->top1==-1)return true;
    return false;
}
bool isEmptyStack2(struct stacks *s){
    if(s->top2==-1)return true;
    return false;
}
int popStack2(struct stacks *s){
    int x=s->s2[s->top2];
    s->top2--;
    return x;
}

void backToStack1(struct stacks *s){
    while(!isEmptyStack2(s)){
        push(s,popStack2(s));
    }
}

int pop(struct stacks *s){
    int x=s->s1[s->top1];
    //cout<<"Value of Top : "<<s->top1<<endl;
    s->top1--;
    return x;
}
int peek(struct stacks *s){
    return s->s1[s->top1];
}

void printStack1(struct stacks *s){
    int n=s->top1;
    for(int i=s->top1;i>=0;i--)cout<<s->s1[i]<<endl;
}
void printStack2(struct stacks *s){
    int n=s->top2;
    for(int i=s->top2;i>=0;i--)cout<<s->s2[i]<<endl;
}
void printStack3(struct stacks *s){
    int n=s->top3;
    for(int i=s->top3;i>=0;i--)cout<<s->s3[i]<<endl;
}
int main() {
    // Store 1200 Prime Numbers
    int a[1300],k=2;
    a[0]=2;a[1]=3;
    int flag=0,count=0;#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct stacks{
    int s1[50001];
    int s2[50001];
    int s3[50001];
    int top1,top2,top3;
};
void push(struct stacks* s,int ele){
    s->top1++;
    s->s1[s->top1]=ele;
}
//element from one stack to another stack
void pushStack3(struct stacks *s,int ele){
    s->top3++;
    s->s3[s->top3]=ele;
    //cout<<"\nPushed "<<ele<<" to stack3";
}
void pushStack2(struct stacks *s,int ele){
    s->top2++;
    s->s2[s->top2]=ele;
}
bool isEmptyStack1(struct stacks *s){
    if(s->top1==-1)return true;
    return false;
}
bool isEmptyStack2(struct stacks *s){
    if(s->top2==-1)return true;
    return false;
}
int popStack2(struct stacks *s){
    int x=s->s2[s->top2];
    s->top2--;
    return x;
}

void backToStack1(struct stacks *s){
    while(!isEmptyStack2(s)){
        push(s,popStack2(s));
    }
}

int pop(struct stacks *s){
    int x=s->s1[s->top1];
    //cout<<"Value of Top : "<<s->top1<<endl;
    s->top1--;
    return x;
}
int peek(struct stacks *s){
    return s->s1[s->top1];
}

void printStack1(struct stacks *s){
    int n=s->top1;
    for(int i=0;i<=s->top1;i++)cout<<s->s1[i]<<endl;
}
void printStack2(struct stacks *s){
    int n=s->top2;
    for(int i=s->top2;i>=0;i--)cout<<s->s2[i]<<endl;
}
void printStack3(struct stacks *s){
    int n=s->top3;
    for(int i=0;i<=s->top3;i++)cout<<s->s3[i]<<endl;
}
int main() {
    // Store 1200 Prime Numbers
    int a[1300],k=2;
    a[0]=2;a[1]=3;
    int flag=0,count=0;
    for(int i=4;i<10000;i++){
        if(count>1200){
            flag=-1;
        }
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            a[k++]=i;
            count++;
        }else if(flag==-1)break;
        flag=0;
    }
    
    /*
    for(int i=0;i<k;i++)cout<<a[i]<<" ";
    cout<<"\n COunt :"<<count;
    */
    
    struct stacks s;
    s.top1=-1;s.top2=-1;s.top3=-1;
    
    int n,q;
    cin>>n>>q;
    int stack1[n],stack2[n],stack3[n];
    int top1=-1,top2=-1,top3=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        push(&s,x);
    }
    //printStack1(&s);
    
    for(int i=1;i<=q;i++){
        while(!isEmptyStack1(&s)){
            int ele=pop(&s);
            //cout<<"Top : "<<s.top1<<endl;
            if(ele%a[i-1]==0){
                pushStack3(&s,ele);
            }else{
                pushStack2(&s,ele);
            }    
        }
        
        
        backToStack1(&s);
    }
    //cout<<"Top : "<<s.top1<<endl;
    
    //printStack1(&s);
    //printStack2(&s);
    if(isEmptyStack1(&s))
        printStack3(&s);
    else{
        printStack3(&s);
        printStack1(&s);
    }
    
  
    return 0;
}

    for(int i=4;i<10000;i++){
        if(count>1200){
            flag=-1;
        }
        for(int j=2;j<i/2;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            a[k++]=i;
            count++;
        }else if(flag==-1)break;
        flag=0;
    }
    
    /*
    for(int i=0;i<k;i++)cout<<a[i]<<" ";
    cout<<"\n COunt :"<<count;
    */
    
    struct stacks s;
    s.top1=-1;s.top2=-1;s.top3=-1;
    
    int n,q;
    cin>>n>>q;
    int stack1[n],stack2[n],stack3[n];
    int top1=-1,top2=-1,top3=-1;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        push(&s,x);
    }
    //printStack1(&s);
    
    for(int i=1;i<=q;i++){
        while(!isEmptyStack1(&s)){
            int ele=pop(&s);
            //cout<<"Top : "<<s.top1<<endl;
            if(ele%a[i-1]==0){
                pushStack3(&s,ele);
            }else{
                pushStack2(&s,ele);
            }    
        }
        
        
        backToStack1(&s);
    }
    //cout<<"Top : "<<s.top1<<endl;
    
    //printStack1(&s);
    //printStack2(&s);
    if(isEmptyStack1(&s))
        printStack3(&s);
    else{
        printStack3(&s);
        printStack1(&s);
    }
    
  
    return 0;
}
