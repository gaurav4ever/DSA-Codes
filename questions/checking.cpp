#include <bits/stdc++.h>
using namespace std;
int main(){

    int a[5]={1,2,3,4,5};
    int *t1=&a[0];
    int *t2=&a[5];
    reverse(t1,t2);


    for(int i=0;i<5;i++)cout<<a[i]<<" ";

    return 0;
}
// #include <iostream>     // std::cout
// #include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
// #include <vector>       // std::vector
// using namespace std;
// int main () {
//   int myints[] = {10,20,30,30,20,10,10,20};
//   std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

//   std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

//   std::vector<int>::iterator low,up;
//   low=std::lower_bound (v.begin(), v.end(), 20); //          ^
//   up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

//   std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
//   std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

//   return 0;
// }
// #include <iostream>
// #include <bits/stdc++.h>
// #include <string>
// using namespace std;
// int main(){
	
// 	int x=123;
// 	string s=to_string(x);
// 	cout<<s;
// 	return 0;
// }
// #include <iostream>
// #include <string>
// using namespace std;
 
// int main()
// {
//     string str1 = "45";
//     string str2 = "3.14159";
//     string str3 = "31337 geek";
 
//     int myint1 = stoi(str1);
//     int myint2 = stoi(str2);
//     int myint3 = stoi(str3);
 
//     cout << "stoi(\"" << str1 << "\") is "
//          << myint1 << '\n';
//     cout << "stoi(\"" << str2 << "\") is "
//          << myint2 << '\n';
//     cout << "stoi(\"" << str3 << "\") is "
//          << myint3 << '\n';
 
//     return 0;
// }