#include <iostream>
using namespace std;
int main()
{
    char light;
    int time;
    int i;
    cout << "Enter current light (R/G/Y): ";
    cin >> light;
    cout << "Enter remaining time: ";
    cin >> time;
    if (light == 'R')
    {
        cout << "Current = Red light" << endl;
        cout << "Countdown:";
        for (i = time; i >= 0; i--)
        {
            cout << i << " ";
            if(i==0){
                cout << endl;
            }
        }
        cout << "Green light will be activated for 45 sec" << endl;
        cout << "Next: Yellow light will be activated for 5 sec" << endl;
    }
    else if (light == 'G')
    {
        cout << "Current = Green light" << endl;
        cout << "Countdown:";
        for (i = time; i >= 0; i--)
        {
            cout << i << " ";
            if(i==0){
                cout<<endl;
            }
        }
        cout << "Yellow light will be activated for 5 sec" << endl;
        cout << "Next: Red light will be activated for 30 sec" << endl;
    }
    else if (light == 'Y')
    {
        cout << "Current = Yellow light" << endl;
        cout << "Countdown:";
        for (i = time; i >= 0; i--)
        {
            cout << i << " ";
            if(i==0){
                cout << endl;
            }
        }
        cout << "Red light will be activated for 30 sec" << endl;
        cout << "Next: Green will be activated for 45" << endl;
    }
    return 0;
}
