#include<iostream>

using namespace std;

int linear_search(int *array, int size, int key)
{
    for(int i=0;i<size; i++)
    {
        if (array[i]==key)
        {
            return i;
        }
        
    }

    return -1;
}
int main()
{
    int size = 7;
    int key = 3;
    int arr[7] = {1,2,3,4,5,6,7};

    int result = linear_search(arr,size,key);
    cout<<result<<endl;
    return 0;

}