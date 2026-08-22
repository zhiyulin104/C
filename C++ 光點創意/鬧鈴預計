#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//o kjs;dlkj;flgk s;lfkg ;gjb rtkg;lfjgl;kt;kojlj;sgkldfj;gsjdl;fkjg;lskdjf;lgkj;sldkfjg;lkjs;lgkjf;kljh




using namespace std;
int main(int argc, char** argv) {
	
	int hr, mi;
	int hrtwo, mitwo;
	int realmin, upmintohr;
	int realhr;
	cout << "請輸入現在小時數";
	cin >> hr;
	cout << "請輸入現在分鐘數";
	cin >> mi;
	cout << "請輸入幾小時後響鈴(待會再問分鐘數)";
	cin >> hrtwo;
	cout << "請輸入幾分鐘後響鈴";
	cin >> mitwo;
	realmin = (mitwo + mi) % 60;
	upmintohr = (mitwo + mi) / 60;
	if ((hr + hrtwo + upmintohr) < 11)
	{
		realhr = (hr + hrtwo + upmintohr) % 12 + (((hr + hrtwo + upmintohr) % 12) == 0) * 12;
		cout << realhr << ":" << realmin << "a.m.";
	}
	else 
	{
		realhr = (hr + hrtwo + upmintohr) % 12 + (((hr + hrtwo + upmintohr) % 12) == 0) * 12;
		cout << realhr << ":" << realmin << "p.m.";
	}
  return 0;
}
