#include <iostream>

int pinary_search(int arr[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    int mid;
    //sorting the array
    for(int i = 0; i < size; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    while(low <= high)
    {
        mid = low + (high - low)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{   
    int arr[5] = {2,1,4,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = pinary_search(arr, size, 4);
    if(index == -1)
    {
        std::cout << "Element not found" << std::endl;
    }
    else
    {
        std::cout << "Element found at index: " << index << std::endl;
    }

    return 0;
}
