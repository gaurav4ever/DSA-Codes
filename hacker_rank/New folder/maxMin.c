#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// It is NOT mandatory to use the provided template. You can handle the IO section differently.

int main() {
   
    int N, K, unfairness;
    cin >> N >> K;
    int candies[N];
    for (int i=0; i<N; i++){
        cin >> candies[i];
    }
 
    sort(candies, candies + N);
 
    unfairness = candies[N-1] - candies[0];
    
    for(int i = 0; i < (N - K - 1); i++){
        int compareUnfair = candies[i + K - 1] - candies[i];
        if(unfairness > (compareUnfair)){
            unfairness = compareUnfair;
        }
    }
    cout << unfairness << "\n";
    return 0;
}
