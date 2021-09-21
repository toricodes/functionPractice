#include <iostream>

void DisplayMessage(int);
int pollutionIndex;
using namespace std;

int main()
{
   cout << "Enter air pollution index: ";
   cin >> pollutionIndex;
   DisplayMessage(pollutionIndex); // Function call //
   return 0;
}

void DisplayMessage(int index){
    if (index < 35)
            cout << "Pleasant";
    else if(index <= 60)
        cout << "Unpleasant";
    else
        cout << "Health Hazard";
}
