#include <iostream>
#include <cstdlib>
using namespace std;

void ciag_fibonacciego(int);
void ciag_arytmetyczny(int);


int main(int argc, char** argv)
{
    int n = atoi(*(argv+1));
    char znak = **(argv+2);

    if(znak == 'f')
    ciag_fibonacciego(n);

    else if(znak == 'a')
    ciag_arytmetyczny(n);

    else
    cout << "Podales niewlasciwa litere \n";
}

void ciag_fibonacciego(int ile_wyrazow)
{
    int* t = new int[ile_wyrazow];

    for( int i=0; i<ile_wyrazow; i++ )
        {
            if(i<2)
            t[i] = 1;

            else
            t[i] = t[i-2] + t[i-1];
        }

    for ( int i=0; i<ile_wyrazow; i++ )
    cout << t[i] << endl;

    delete [] t;
}


void ciag_arytmetyczny(int ile_wyrazow)
{
    for( int i=1; i<=ile_wyrazow; i++ )
    {
        cout << (7*i+2) << endl;  //i-ty wyraz ciagu arytmetycznego
    }

}
