/*
Zachary Rust
11/21/17
lab 4.1
*/
#include <iostream>
#include <string>

using namespace std;

class ArrayTools
{
    private:
    int size;
    int nums[];

    
    public:
    //ArrayTools();
    ArrayTools(int n[], int s);
    
    void Print ();
    
    int Find_min (int first, int last);
    int Find_max (int first, int last);
    int Find_sum ();
    int even();
    int odd();
    int Search (int s);
    bool Is_sorted ();
};

ArrayTools::ArrayTools (int n[], int s)
{
    size = s;

    for (int i = 0; i < size; i++)
    {
        nums[i] = n[i];
    }
}

void ArrayTools::Print ()
{
    for (int i = 0; i < (size-1); i++)
    {
        cout << nums[i] << ", ";
    }
    cout << nums[size - 1] << endl;
}

int ArrayTools::Find_min (int first, int last)
{
    int m = nums[first];
    for (int i = first; i < last; i++)
    {
        if (nums[i] < m)
        {
            m = nums[i];
        }
    }
    return m;
}

int ArrayTools::Find_max (int first, int last)
{
    int m = nums[first];
    for (int i = first; i < last; i++)
    {
        if (nums[i] > m)
        {
            m = nums[i];
        }
    }
    return m;
}

int ArrayTools::Find_sum ()
{
    int m = 0;
    for (int i = 0; i < size; i++)
    {
        m += nums[i];
    }
    
    return m;
}

//Split this into two functions
int ArrayTools::even()
{
    int even = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (nums[i]%2 == 0)
        {
            even++;
        }
    }
    
    return even;
}

int ArrayTools::odd()
{
    int odd = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (nums[i]%2 == 1)
        {
            odd++;
        }
    }
    
    return odd;
}

int ArrayTools::Search (int s)
{
    int match = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (nums[i] == s)
        {
            match = i + 1;
            return match;
        }
    }
    return -1;
}

bool ArrayTools::Is_sorted()
{
    int temp = nums[0];
    
    for (int i = 0; i < size; i++)
    {
        if (!temp <= nums[i])
        {
            return false;
        }
    }
    
    return true;
}

int main()
{
    const int SIZE = 10;
    int myArray[SIZE];
    
    for(int i = 0; i<SIZE;i++){
        cin>>myArray[i];
    }
    
    ArrayTools a(myArray,SIZE);
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Num Even/Odd: " <<a.even() << "/" << a.odd()<<endl;
    cout<<"Search 10: "<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}
/*
OUTPUT

1
2
3
4
5
6
7
8
9
10
1, 2, 3, 4, 5, 6, 7, 8, 9, 10
Min: 1
Max: 10
Sum = 55
Num Even/Odd: 5/5
Search 10: 10
Sorted? 0

*/