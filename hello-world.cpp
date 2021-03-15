#include <iostream>
using namespace std;
int findNth(int N)
{

    int result = 0;
 
    int p = 1;

    while (N > 0)
    {
        result += (p * (N % 9));
        N = N / 9;
        p = p * 10;
    }
    return result;
}
 

int main()
{
    int N;
    cout<<"Enter n ";
    cin>>N;
    cout << findNth(N);
    return 0;
}
