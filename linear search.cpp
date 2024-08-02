/*Assignment Based on Linear Search
Roll No:54
Name :Jagdale Supriya 
College Name:Sanjivani college of Engineering Kopargoan*/


#include <iostream>

using namespace std;

// Function to perform linear search
int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] == target)
        {
            return i; // Return the index of the target if found
        }
    }
    return -1; // Return -1 if target is not found
}

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    
int arr[5];
    
    cout << "Enter array elements: ";
    for (int i = 0; i < size; ++i) 
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter the value to search for: ";
    cin >> target;

    // Perform linear search
    int result = linearSearch(arr, size, target);

    if (result != -1)
    {
        cout << "Element found at index position "<<result<<endl;
    }
    else
    {
        cout << "Element not found in the array" <<endl;
    }

    

    return 0;
}

