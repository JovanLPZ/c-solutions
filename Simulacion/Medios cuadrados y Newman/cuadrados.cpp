#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <string>
 
using namespace std;
 
bool repeatedNum(int arr[], int size); 
 
int main()
{
    int x, sz;
    int arr[1000];
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
    string str;
    bool repeated = false;
 
    cout << "\nIngrese un numero: ";
    cin >> x;
 
    //srand( time(NULL) );
    //x = rand() % 900 + 100;
 
    for( int i = 1; i <= 100 || x != 0; i++ ) 
    {
        str = to_string(x);
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
        
        cout << "x[" << i << "]" << " = " << x << "   central: " << str << endl;
        
        stringstream strInt( str );
        strInt >> x;

        arr[i] = x;

        cout << "\n" << arr << endl;
        

        x = x * x;

        
    }

    return 0;
}

bool repeatedNum(int arr[], int size) 
{ 
    int i, j;
    bool repeated = false;

    printf(" Repeating elements are ");
    for(i = 0; i < size || arr[i] == NULL; i++)
        for(j = i + 1; j < size || arr[i] == NULL; j++)
        if(arr[i] == arr[j])
            cout << arr[i] << " "; repeated = true;

    return repeated;
}
 