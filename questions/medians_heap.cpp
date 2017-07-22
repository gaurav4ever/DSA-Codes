/* Sample program illustrating input and output */
#include <iostream>
#include <set>
using namespace std;
int main()
{
int n;
cin>>n;
multiset<int> s1,s2;
int b; char c;
int flag = 0;
long long int median=0;
multiset<int>::iterator it;
for(int i=0;i<n;i++) {
    flag = 0;
    cin >> c >> b;
    if(c=='a') {
       if(s1.size() == 0) s1.insert(b);
       else {
          it = s1.end(); it--;
          int max = *it;
          if(b > max) s2.insert(b);
          else s1.insert(b);
       }
    }
    else if (c == 'r') {
       it = s1.find(b);
       if(it!=s1.end() && *it == b) s1.erase(it);
       else {
          it = s2.find(b);
          if(it!=s2.end() && *it == b) s2.erase(it);
          else flag = 1;
       }
    }
    if(s2.size() > s1.size()) {
       it = s2.begin();
       s1.insert(*it);
       s2.erase(it);  
    }
    if(s1.size() > s2.size()+1) {
       it = s1.end();it--;
       s2.insert(*it);
       s1.erase(it);
    }
    if(flag == 1 || (s1.size() == 0 && s2.size() == 0))
      cout << "Wrong!\n";
    else if(s1.size() != s2.size()) {
       if(s1.size() > 0) {
         it = s1.end(); it--;
         cout << *it << endl;
       }
       else if(s2.size() > 0) {
         it = s2.begin();
         cout << *it << endl;
       }
    }
    else if(s1.size()== s2.size()){
       it = s1.end(); it--;
       median = *it;
       it = s2.begin();
       median += *it;
       if(median%2==0)
              printf("%.0lf\n", median/2.);
       else
              printf("%.1lf\n", median/2.);
    }
    else cout << "Wrong!\n";
}


}