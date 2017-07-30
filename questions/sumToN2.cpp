#include <iostream>
using namespace std;
int count=0;
void printSums(int N)
{
    int start = 1, end = 1;
    int sum = 1;
 
    while (start <= N/2)
    {
        if (sum < N)
        {
            end += 1;
            sum += end;
        }
        else if (sum > N)
        {
            sum -= start;
            start += 1;
        }
        else if (sum == N)
        {
            count++;
            sum -= start;
            start += 1;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    printSums(n);
    cout<<count;
    return 0;
}