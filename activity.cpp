#include<iostream>
#include<algorithm>
using namespace std;

struct Activitiy
{
    int start, end;
};
bool sort_activity(Activitiy act1, Activitiy act2)
{
    return (act1.end < act2.end);
}
void maxActivity(Activitiy act[], int n)
{
    sort(act, act+n, sort_activity);
    cout << "Selected Activities : " << endl;
    int i = 0;
    cout << i << "  " <<act[i].start << "  " << act[i].end <<endl;
    for (int j = 1; j < n; j++)
    {
        if (act[j].start >= act[i].end)
        {
            cout << j << "  " <<act[j].start << "  " << act[j].end <<endl;
            i = j;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of activities : ";
    cin>>n;
    Activitiy arr[n];
    for(int i = 0; i<= n-1; i++)
    {
        cout<<"Enter start time : ";
        cin>>arr[i].start;
        cout<<"Enter finish time: ";
        cin>>arr[i].end;
    }
    maxActivity(arr,n);
    return 0;
}
