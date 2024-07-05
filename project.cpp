#include <bits/stdc++.h>
#include "src.cpp"
using namespace std;

int main()
{
    Convertors CONV;
    int choice = 0;
    do
    {
        cout << endl;
        cout << "|-------------------------------|" << endl;
        cout << "|\t\t1.Area\t\t|" << endl;
        cout << "|\t\t2.Length\t|" << endl;
        cout << "|\t\t3.Temperature\t|" << endl;
        cout << "|\t\t4.Mass\t\t|" << endl;
        cout << "|\t\t5.Time\t\t|" << endl;
        cout << "|\t\t6.Speed\t\t|" << endl;
        cout << "|\t\t0.EXIT\t\t|" << endl;
        cout << "|-------------------------------|" << endl;
        cout << endl;
        cout<<"Enter Choice :: ";
        cin >> choice;
        switch (choice)
        {
          
        case 1:
            CONV.Area_conversion();
            break;
        case 2:
             CONV.Length_conversion();
             break;
            case 3:
             CONV.Temperature_conversion();
                 break;
            case 4:
            CONV.Mass_conversion();
                 break;
            case 5:
             CONV.Time_conversion();
                 break;
            case 6:
              CONV.Speed_conversion();
                 break;
            case 0:
             cout<<"THANK YOU ..."<<endl;
           break;  
           default:
           cout<<"Wrong choice !!!  chose between 0 to 6";
           break;
        }
    } while (choice != 0);
    return 0;
}