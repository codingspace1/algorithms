/*
This program checks if a given matrix is sparse or not
i.e in a spaarse matrix zero valued elements are much more as compared to no zero values elements
here if zero valued elemts are more than the 50% size of the matrix, we will call it a sparse matrix
*/
#include<iostream>
#include<vector>
#include<cassert>

/*
counts the number of  zero valued elements
check if the count is more than the half of the size of matrix

*/
bool is_sparse_matrix(std::vector<std::vector<int>> vect)
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

    return (zero_counter>(vect.size() * vect[0].size())* 0.5);

}

void display(std::vector<std::vector<int>> vect)
{
    for(int i =0; i<vect.size(); i++)
    {
        for(int j = 0; j<vect[i].size(); j++)
        {
            std::cout<<vect[i][j]<<" ";
        }
        std::cout<<"\n";
    }

}

static void tests()
{
    std::vector<std::vector<int>> vect1 = {{1, 0, 0, 1}, {0, 1, 0, 2}, {1, 0, 1, 4}}; 
    std::vector<std::vector<int>> vect2 = {{1, 1, 1, 0}, {0, 1, 0, 2}, {1, 1, 1, 1}}; 
    std::vector<std::vector<int>> vect3 = {{0, 0, 0, 1}, {0, 0, 0, 2}, {0, 1, 0, 4}};

    assert(is_sparse_matrix(vect1)== 0);
    assert(is_sparse_matrix(vect2)== 0); 
    assert(is_sparse_matrix(vect3)== 1);  
    std::cout<<"all tests are passed"<<"\n";

}

int main()
{

    std::vector<std::vector<int>> v = {{1, 0, 0}, {0, 1, 0}, {1, 0, 1}};
    tests();

    std::cout<<is_sparse_matrix(v);
    
    return 0;
}