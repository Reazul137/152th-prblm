#include<iostream>
using namespace std;
int main()
{
    int status;
    double income, tax=0;

    cout << " 0. Single filer \n 1. Married jointly or Qualifying widow(er) \n 2. Married Separately \n 3. Head of household\n" << endl;
    cout << " Enter the filing status : ";
    cin >> status;

    cout << " Enter the tax able income : ";
    cin >> income;

    if ( status == 0)
    {
        if ( income <= 8350)
            tax = income * 0.10;
        else if ( income <= 33950)
            tax = 8350 * 0.10 + (income - 8350) * 0.15;
        else if ( income <= 82250)
            tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25;
        else if ( income <= 171550)
            tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28;
        else if ( income <= 372950)
            tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33;
        else
            tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33 + (income - 372950) * 0.35 ;

    }

    else if ( status == 1)
    {
        if ( income <= 16700)
            tax = income * 0.10;
        else if ( income <= 67900)
            tax = 16700 * 0.15 + (income - 16700) * 0.15;
        else if ( income <= 82250)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25;
        else if ( income <= 171550)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28;
        else if ( income <= 372950)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33;
        else
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33 + (income - 372950) * 0.35 ;
    }

    else if ( status == 2)
    {
        if ( income <= 16700)
            tax = income * 0.10;
        else if ( income <= 33950)
            tax = 16700 * 0.10 + (income - 16700) * 0.15;
        else if ( income <= 82250)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25;
        else if ( income <= 171550)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28;
        else if ( income <= 372950)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33;
        else
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33 + (income - 372950) * 0.35 ;

    }
    else if (status == 3)
    {
        if ( income <= 16700)
            tax = income * 0.10;
        else if ( income <= 33950)
            tax = 16700 * 0.10 + (income - 16700) * 0.15;
        else if ( income <= 82250)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25;
        else if ( income <= 171550)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28;
        else if ( income <= 372950)
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33;
        else
            tax = 16700 * 0.10 + (33950 - 16700) * 0.15 + (income - 33950) * 0.25 + (income - 82250) * 0.28 + (income - 171550) * 0.33 + (income - 372950) * 0.35 ;
    }
    else
    {
        cout <<"Error : Invalid status ";
        return 0;
    }

    cout << " Tax is " << static_cast<int>(tax*100)/100.0 << endl;
    cout << endl;


    return 0;
}
