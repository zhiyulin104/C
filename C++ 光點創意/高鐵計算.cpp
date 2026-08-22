#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//o kjs;dlkj;flgk s;lfkg ;gjb rtkg;lfjgl;kt;kojlj;sgkldfj;gsjdl;fkjg;lskdjf;lgkj;sldkfjg;lkjs;lgkjf;kljh




using namespace std;
int main(int argc, char** argv) {
  int s, e, M;
	s = 0;
	cout << "歡迎來到高鐵票價計算機~~\n";
	while (1) {
		cout << "1.南港\n"  
			 << "2.台北\n" 
			 << "3.板橋\n" 
			 << "4.新竹\n" 
			 << "5.彰化\n"
			 << "6.雲林\n" 
			 << "7.嘉義\n" 
			 << "8.左營";
		cout << "\nFrom:";
		cin >> s;
		while ((s>=1) && (s<=8))
		{
			cout << "\nEnd:";
			cin >> e;
			if ((e >= 1) && (e <= 8))
			{
				M = (s - e) * 300;
				if (M < 0) {
					M *= (-1);
				}
				cout << "cost: " << M;
			}
		
			else 
			{
				cout << "請輸入有效站號(1~8)";
				continue;
			}
		 
		}
		cout << "請輸入有效站號(1~8)";
		continue;
		
		
		
		
    }
}
