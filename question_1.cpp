#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void Reverse(stack <int> &st)
{
    queue <int> Q;
    while(!st.empty())
    {
        Q.push(st.top());
        st.pop();
    }
    while(!Q.empty())
    {
        st.push(Q.front());
        Q.pop();   
    }
}
int main()
{
    stack <int> st;
    for (int i =31; i >= 28; i--)
    {
        st.push(i);
    }
    Reverse(st);

    while(!st.empty())
    {
        cout<<st.top()<<' ';
        st.pop();
    }

    return 0;
}   
