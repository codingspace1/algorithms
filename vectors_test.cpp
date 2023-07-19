#include<iostream>
#include<vector>

using namespace std;

//compile using g++ --std=c++14 -o vect vectors_test.cpp

void display(vector<float> value)
{
     for(int i =0; i<value.size(); i++)
    {
        cout<<value[i]<<endl;

    }

}

int main()
{

    vector<float>reps = {1.1,2.0,4.5};

    cout<<"Display elements from a function"<<endl;
    display(reps);

    return 0;


}