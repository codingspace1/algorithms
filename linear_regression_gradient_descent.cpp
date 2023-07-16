#include<iostream>
// #include<thread>
// #include<chrono>


using namespace std;

int main()
{
   const int size = 10;
   int input[size] = {10,20,1,2,3,4,5,6,7,8};
   int output[size] = {1,2,3,4,5,6,7,8,9,10};

   float  m = 1.1;
   float  c = 0.5;

   for(int i =0; i<size; i++)
   {

    int pred = (m * input[i]) + c;
    int error = output[i]- pred;
    cout<<"Print predicted value: "<<pred<<endl;
    cout<<"Error Value: "<<error<<endl;
   }
    return 0;


}



//  std::cout<<"first line"<<endl;

//     for(int i =0; i<10; i++)
//     {
//         std::this_thread::sleep_for(std::chrono::seconds(1));
//          std::cout<<"Hello world!"<<std::endl;

//     }