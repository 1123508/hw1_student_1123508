#include <iostream>
#include <queue>
using namespace std;
//1 2 3 4 5 6 7 8
//1 5 2 6 3 7 4 8
void queueInterleave(queue <int> &q)
{
    queue <int> q1;
    int n=q.size();
    for(int i=0;i<n/2;i++)
    {
        q1.push(q.front());
        q.pop();
    }
    //1 2 3 4
    queue <int> q2;
    for(int i=n/2;i<n;i++)
    {
        q2.push(q.front());
        q.pop();
    }
    //5 6 7 8
    for(int i=0;i<n;i++)
    {
        if (i%2==0)
        {
            q.push(q1.front());
            q1.pop();
        }
        else
        {
            q.push(q2.front());
            q2.pop();
        }
    }
}
int main()
{
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    queueInterleave(q);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
