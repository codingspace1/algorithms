#include<iostream>
#include<vector>

int main()
{
    std::vector<int> arr;

    for(int k = 500; k>0; k--)
    {
        arr.push_back(k);
    }

    for (int step = 1; step<arr.size(); step++)
    {
        int key = arr[step];
        int j = step-1;

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