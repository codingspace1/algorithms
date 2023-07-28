#include<iostream>
#include<vector>


int main()
{

    std::vector<int> arr = {9,5,1,4,3,8,12,13,6};

    for (int step = 1; step<arr.size(); step++)
    {
        int key = arr[step];
        int j = arr[step-1];

        while( key<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j + 1] = key;

        }

    for(int i = 0; i<arr.size(); i++)
    {
        std::cout<<arr[i]<<"\n";
    }
    return 0;
}