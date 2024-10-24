#include <iostream>
#include <queue>
using namespace std;

void firstNegativeInteger(int arr[], int n, int k)
{
    queue<int> q;
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            q.push(i);
    }
    
    if (!q.empty())
        cout << arr[q.front()] << " ";
    else
        cout << "0 ";
    
    for (int i = k; i < n; i++) {
        if (!q.empty() && q.front() <= i - k)
            q.pop();

        if (arr[i] < 0)
            q.push(i);
        
        if (!q.empty())
            cout << arr[q.front()] << " ";
        else
            cout << "0 ";
    }
}

int main()
{
    int arr[]={1,3,4,9,-2,5,-8,2,3,-6,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    firstNegativeInteger(arr,n,k);
    return 0;
}
