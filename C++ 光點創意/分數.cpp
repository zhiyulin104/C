#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//o kjs;dlkj;flgk s;lfkg ;gjb rtkg;lfjgl;kt;kojlj;sgkldfj;gsjdl;fkjg;lskdjf;lgkj;sldkfjg;lkjs;lgkjf;kljh




using namespace std;
int main(int argc, char** argv) {
  int sc;
	cout << "score: ";
	cin >> sc;
	
	if ( sc < 60) 
	{
		cout << "rank E";
	}
	else if ( sc < 70) 
	{
		cout << "rank D";
	}
	else if ( sc < 80) 
	{
		cout << "rank C";
	}
	else if ( sc < 90) 
	{
		cout << "rank B";
	}
	else if ( sc < 100) 
	{
		cout << "rank A";
	}
	else if (sc == 100)
	{
		cout << "rank A+";
	}
}
