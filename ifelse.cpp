#include <iostream>
using namespace std;
int main()
{
    int vote;
    cout << " ENTER THE YOUR AGE " << endl;
    cin >> vote;
    {

        if (vote >= 18 || vote <= 90)
        {
            cout << " YOU CAN VOTE " << endl;
            
        }
        else if ( vote >= 91 || vote <= 149)
        {
            cout<< " YOU CAN 2 TIMES VOTE  "<< endl;
        }

        else
        {
            cout << " YOUR AGE IS OVER LIMITS " << endl;
        }
    }
}6