#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//o kjs;dlkj;flgk s;lfkg ;gjb rtkg;lfjgl;kt;kojlj;sgkldfj;gsjdl;fkjg;lskdjf;lgkj;sldkfjg;lkjs;lgkjf;kljh




using namespace std;
int main(int argc, char** argv) {
	int a, b, c;
	cout << "請分別輸入abc"; 
	cin >> a >> b >> c;
	if (a > b) {
		if (b > c) {
			cout << a << ">" << b << ">" << c;
		}
		else {
			if (c > a) {
				cout << c << ">" << a << ">" << b;
			}
			else {
				cout << a << ">" << c << ">" << b;
			}
		}
	}
	else {
		if (a > c) {
			cout << b << ">" << a << ">" << c;
		}
		else {
		
			if (c > b) {
				cout << c << ">" << b << ">" << a;
			}
			else {
				cout << b << ">" << c << ">" << a;
			}
		}
	}
	
}
