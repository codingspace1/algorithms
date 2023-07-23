/*
This program checks if a given matrix is sparse or not
i.e in a sparse matrix zero valued elements are much more as compared to no zero values elements
here if zero valued elemts are more than the 50% size of the matrix, we will call it a sparse matrix
*/
#include<iostream> ///for I/O operations
#include<vector>   /// for std::vector
#include<cassert> /// for assert

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

/*******************************************************************************
 * @brief Self-test implementation #1
 * @returns void
 *******************************************************************************/

void test1()
{
    std::vector<std::vector<int>> vect1 = {{1, 0, 0, 1}, {0, 1, 0, 2}, {1, 0, 1, 4}};
    int expected_ans = 0;
    int derived_ans = is_sparse_matrix(vect1);
    std::cout<<"Test #1: ";
    assert(derived_ans == expected_ans);
    std::cout<<"Passed! \n"; 

}

/*******************************************************************************
 * @brief Self-test implementation #2
 * @returns void
 *******************************************************************************/

void test2()
{
    std::vector<std::vector<int>> vect1 = {{1, 1, 1, 0}, {0, 1, 0, 2}, {1, 1, 1, 1}};
    int expected_ans = 0;
    int derived_ans = is_sparse_matrix(vect1);
    std::cout<<"Test #2: ";
    assert(derived_ans == expected_ans);
    std::cout<<"Passed! \n"; 

}
/*******************************************************************************
 * @brief Self-test implementation #3
 * @returns void
 *******************************************************************************/

void test3()
{
    std::vector<std::vector<int>> vect1 = {{0, 0, 0, 1}, {0, 0, 0, 2}, {0, 1, 0, 4}};
    int expected_ans = 1;
    int derived_ans = is_sparse_matrix(vect1);
    std::cout<<"Test #3: ";
    assert(derived_ans == expected_ans);
    std::cout<<"Passed! \n"; 

}

int main()
{
    /*******************************************************************************
     * @brief Main function
     * @returns 0 on exit
     *******************************************************************************/

    test1();  // run self-test implementation #1
    test2();  // run self-test implementation #2
    test3();  // run self-test implementation #3
    
    return 0;
}