#include <iostream>
#include "base/IntArray.h"

using namespace std;


int main() 
{

    IntArray* arr = new IntArray(5);

    IntArray& l = *arr;

    for (size_t i = 0; i < arr->getLength(); i++)
    {
        arr->get(i) = i;
        cout << "i = " << arr->get(i) << ", ";
    }


    arr->Add(123);


    arr->insertAt(9, 6);
    cout << "\n";

    IntArray arr2(*arr);

    for (int i = 0; i < arr->getLength(); i++)
    {
        cout << "i = " << arr2[i] << ", ";
    }

    cout << endl;
    
    delete arr;

    return 0;
}