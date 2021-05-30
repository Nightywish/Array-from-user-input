#include <iostream>
using namespace std;

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i];

    }
}

int main()
{
    const int Size = 10;
    int guesses[Size];
    int count = 0;


    for (int i = 0; i < Size; i++)
    {
        if (cin >> guesses[i])
        {
            count++;

        }
        else {

        }
    }
    print_array(guesses, Size);

    cin.clear();

}
