#include "Vending_Machine_Items.h"
#include<iostream>
using namespace std;

int main()
{
    Vending_Machine_Items object;
    object.Vending_Machine_Money_input();
    object.Vending_Machine_Choices_Items();
    object.Vending_Machine_Money();


    while (object.item_Choice_number == 0){break;}




    return 0;
}
