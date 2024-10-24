#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void NextGreaterElement(int arr[],int n)
{
    stack <int> st;
    st.push(arr[0]);
    
    for(int i=1;i<n;i++)
    {
        while(!st.empty()&&st.top()<arr[i])
        {
            cout<<st.top()<<"->"<<arr[i]<<endl;
            st.pop();
        }
        st.push(arr[i]);
    }
    
    while(!st.empty())
    {
        cout<<st.top()<<"->"<<-1<<endl;
        st.pop();
    }
}

int main()
{
    int arr[]={4,5,2,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    NextGreaterElement(arr,n);
    return 0;
}
