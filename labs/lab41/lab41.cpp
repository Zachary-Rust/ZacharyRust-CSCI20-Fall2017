#include <iostream>

using namespace std;

class ArrayTools
{
    private:
    int nums[];
    int size;
    
    public:
    //ArrayTools();
    ArrayTools(int n[], int s);
    
    void Print ();
    
    int Find_min (int first, int last);
    int Find_max (int first, int last);
    int Find_sum ();
    //void Num_even/odd ();
    //int Search ();
    //bool Is_sorted ();
};

ArrayTools::ArrayTools (int n[], int s)
{
    for (int i = 0; i < s; i++)
    {
        nums[i] = n[i];
    }
    size = s;
}

void ArrayTools::Print ()
{
    for (int i = 0; i < size; i++)
    {
        cout << nums[i] << ", ";
    }
}

int ArrayTools::Find_min (int first, int last)
{
    int m = nums[0];
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
    int m = nums[0];
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
    //cout<<"Search 10"<<a.Search(10)<<endl;
    //cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}