#include<iostream>
#include<vector>
#include<cassert>

using namespace std;

bool is_sparse_matrix(vector<vector<int>> vect)
{
    int zero_counter = 0;

     for(int i =0; i<vect.size(); i++)
    {
        for(int j = 0; j<vect[i].size(); j++)
        {
            if (vect[i][j]==0)
            {
                zero_counter+=1;
            }
        }
    }

    if(zero_counter>((vect.size()* vect[0].size())/2))
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void display(vector<vector<int>> vect)
{
    for(int i =0; i<vect.size(); i++)
    {
        for(int j = 0; j<vect[i].size(); j++)
        {
            cout<<vect[i][j]<<" ";
        }
        cout<<endl;
    }

}

static void tests()
{
    vector<vector<int>> vect1 = {{1, 0, 0, 1}, {0, 1, 0, 2}, {1, 0, 1, 4}}; 
    vector<vector<int>> vect2 = {{1, 1, 1, 0}, {0, 1, 0, 2}, {1, 1, 1, 1}}; 
    vector<vector<int>> vect3 = {{0, 0, 0, 1}, {0, 0, 0, 2}, {0, 1, 0, 4}};

    assert(is_sparse_matrix(vect1)== 0);
    assert(is_sparse_matrix(vect2)== 0); 
    assert(is_sparse_matrix(vect3)== 1);  
    cout<<"all tests are passed"<<endl;

}

int main()
{

    vector<vector<int>> v = {{1, 0, 0}, {0, 1, 0}, {1, 0, 1}};
    tests();

    cout<<is_sparse_matrix(v);
    
    return 0;
}