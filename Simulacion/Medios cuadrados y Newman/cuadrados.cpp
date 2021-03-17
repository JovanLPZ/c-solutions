#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
 
using namespace std;
 
 
int main()
{
    int x, sz, n;
    string str;
 
    cout << "\nIteraciones a realizar: ";
    cin >> n;
 
    srand( time(NULL) );
    x = rand() % 900 + 100;
 
    for( int i = 1; i <= n; i++ ) 
    {
        str = to_string( x );
        sz = str.length();
        sz = sz > 4 ? sz -= 4 : 0;

        if( sz % 2 == 0 ) 
        {
            str.erase( 0, sz/2 );
            for( int j = 1; j <= sz/2; j++ ) str.pop_back();
        } 

        else 
        {
            str.erase( 0, sz/2 );
            for( int j = 1; j <= sz/2 + 1; j++ ) str.pop_back();
        }
        
        cout << "x = " << x << "\tcentral: " << str << endl;
        stringstream strInt( str );
        strInt >> x;
        x = x * x;
    }

    return 0;
}
 