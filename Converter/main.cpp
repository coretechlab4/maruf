#include <iostream>

using namespace std;

int main()
{
    int c;
    cout<<"          Converter         \n";
    cout<<"............................\n";
    cout<<" 1. Fahrenheit To Celcius \n";
    cout<<" 2. Celcius To Fahrenheit \n";
    cout<<" 3. Centimetre To Feet \n";
    cout<<" 4. Centimetre TO Inches \n";
    cout<<" Enter Choice : \n";
    cin>>c;

    switch (c)
    {
    case (1):
        {
        float far;
        cout<<" Enter Temparature In Fahrenheit : ";
        cin>>far;
        cout<<"In Celcius : "<<(far-32)*5/9;
        break;
        }
    case (2):
        {
        float cel;
        cout<<" Enter Temperature In Celsius : ";
        cin>>cel;
        cout<<" In Fahrenheit : "<<cel*(9/5)+32;
        break;
        }
    case (3):
        {
        float centi;
        cout<<" Enter Centimeter : \n";
        cin>>centi;
        cout<<" In Feet : "<<centi*0.0328;
        break;
        }
    case (4):
        {
        float centi;
        cout<<" Enter Centimeter : \n";
        cin>>centi;
        cout<<" In Inches : "<<centi*0.3937;
        break;
        }
    default:
        {
            cout<<" Invalid Input ";
        }
    }
    return 0;
}
