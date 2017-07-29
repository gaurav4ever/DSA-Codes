#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <conio.h>
#include <algorithm>
using namespace std;
int main(){
    int n,k,count=0,t;
    cin >> n >> k;
    int x[100001]={0};
    for(int x_i = 0;x_i < n;x_i++){
       cin >>t;
       x[t]=1;
    }

    for(int i=1;i<=100000;i++){
        if(x[i]==1){
            count++;
            int loc=i+k;
            loc=loc>100000?100000:loc;
            while(x[loc]!=1)loc--;
            i=loc+k;
        }
    }
    cout<<count;
    getch();    
    return 0;
}
