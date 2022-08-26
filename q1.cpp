// ANSH GOEL
// 2010993041
// TEST - 3
// QUESTION - 1
// G21
#include <iostream>

using namespace std;

int main()
{
    // Asking user for Number of Elements in the Array
    int input;
    cout<<"Enter Number of Inputs - ";
    cin>>input;

    // Entering the Values in the Array
    int arr[input];
    for(int i = 0; i < input; i++)
    {
        cout<<"Enter Element "<<i+1<<" - ";
        cin>>arr[i];
    }

    // Displaying the Original Array
    cout<<"Original Array - ";
    for(int i = 0; i < input; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // Comparing and Swapping the values based on the requirements
    for(int i = 1; i < input; i+=2)
    {
        // If the total number of elements in the array are Odd
        if(input % 2 != 0)
        {
            if(arr[i] < arr[i - 1])
            {
                int temp1;
                temp1 = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp1;

                if(arr[i] < arr[i + 1])
                {
                    int temp2; 
                    temp2 = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp2;
                }
            }
            else
            {
                if(arr[i] < arr[i + 1])
                {
                    int temp3; 
                    temp3 = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp3;
                }
            }
        }
        // If total Number of elements in the Array are Even
        else
        {
            if(i == arr[input - 2])
            {
                if(arr[i] < arr[i - 1])
                {
                    int temp1;
                    temp1 = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = temp1;

                    if(arr[i] < arr[i + 1])
                    {
                        int temp2; 
                        temp2 = arr[i + 1];
                        arr[i + 1] = arr[i];
                        arr[i] = temp2;
                    }
                    i = i + 3;
                }
                else
                {
                    if(arr[i] < arr[i + 1])
                    {
                        int temp3; 
                        temp3 = arr[i + 1];
                        arr[i + 1] = arr[i];
                        arr[i] = temp3;
                    }
                }
                i = i + 3;
            }
            else
            {
                if(arr[i] < arr[i - 1])
                {
                    int temp1;
                    temp1 = arr[i - 1];
                    arr[i - 1] = arr[i];
                    arr[i] = temp1;

                    if(arr[i] < arr[i + 1])
                    {
                        int temp2; 
                        temp2 = arr[i + 1];
                        arr[i + 1] = arr[i];
                        arr[i] = temp2;
                    }
                }
                else
                {
                    if(arr[i] < arr[i + 1])
                    {
                        int temp3; 
                        temp3 = arr[i + 1];
                        arr[i + 1] = arr[i];
                        arr[i] = temp3;
                    }
                }
            }
        }
        
    }

    // Displaying the Updated Array
    cout<<"Updated Array - ";
    for(int i = 0; i < input; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}