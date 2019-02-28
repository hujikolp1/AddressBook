#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  int input;
  while (input != 6)
  {
    cout << "1. Add Contact" <<endl;
    cout << "2. Update Contact" <<endl;
    cout << "3. Delete Contact" <<endl;
    cout << "4. List All Sorted Contacts" <<endl;
    cout << "5. Search For Contact" <<endl;
    cout << "6. Exit" <<endl;
    cin >> input;

    if (input == 1)
    {
      //Add
    }
    if (input == 2)
    {
      //Update
    }
    if (input == 3)
    {
      //Delete
    }
    if (input == 4)
    {
      //List Sorted
    }
    if (input == 5)
    {
      //Search
    }
    if (input == 6)
    {
      break;
    }
  }
}
