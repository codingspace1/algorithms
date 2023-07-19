#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> a;


    for(int i=0; i<=7; i++)
    {
        a.push_back(i);
    }
    cout<<"vector details: "<<endl;
    cout<<"Size: "<<a.size()<<endl;
    cout<<"Max size: "<<a.max_size()<<endl;
    cout<<"Capacity: "<<a.capacity()<<endl;
    cout<<"Is empty: "<<a.empty()<<endl;


    cout<<"Display elements"<<endl;
    for(int i =0; i<=7; i++)
    {
        cout<<a[i]<<endl;

    }

    return 0;


}