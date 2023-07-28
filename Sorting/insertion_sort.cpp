#include<iostream>
#include<vector>


int main()
{

    std::vector<int> arr = {9,5,1,4,3};

    for (int i= 1; i<arr.size(); i++)
    {
        int sorted_array = arr[i];
        int key = arr[i+1];

        for(int j = 0; j<arr.size()-1; j++)
        {
            if(sorted_array>key)
            {
                int temp = sorted_array;
                sorted_array = key;
                key = temp;

            }
        }

        std::cout<<arr[i]<<"\n";
        
    }






    return 0;
}