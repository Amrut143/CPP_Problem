#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {

	int coin, counter, tails = 0, heads = 0;
	do {
			srand(time(0));
			coin = (rand() % 2);

			if(coin == 0)
			{
				cout<<"T ";
				tails = tails + 1;
			}
			else if( coin == 1)
			{
				cout<<"H ";
				heads = heads + 1;
			}
	} while( heads < 11 && tails < 11 );

	cout<<endl;
	cout<<"Tails was tossed "<< tails <<" times"<<endl;
	cout<<"Heads was tossed "<< heads <<" times"<<endl;
}
