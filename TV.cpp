// by Ashevsky Alexandr
//Class TV
//Simulates TV
#include <iostream>
#include "TV.h"
#include <string>
#include <ctime>
using namespace std;
///////////////////////

TV::TV(): OFForON(false),chanel(0) {}
TV::TV(bool nf,unsigned int ch): OFForON(nf),chanel(ch) {}
///////////////////////////////////////////////////////////
void TV::OnTV() { OFForON = true; }

void TV::OffTV() { OFForON = false; }

void TV::SetChList()
{
	for (int i = 0; i < ch; i++) {
		cin >> ChannelsList[i];
	}
}

void TV::showStatusTV() {
	if (OFForON) { cout << "TV ON" << endl;}
	else cout << "TV OFF" << endl; 
	while (OFForON) {
		int i = 0;
		char otv;
		cin >> otv;
		if (otv == 'y' && chanel < ch) {
			i++;
			chanel++;
			cout << "Channel: " << chanel<<" "<<ChannelsList[i]<< endl;
		}
		else if (otv == 'h' && chanel > 1) {
			i--;
			chanel--;
			cout << "Channel: " << chanel << " " << ChannelsList[i] << endl;
		}
		else if (otv == 'g') { OFForON = false; }
		else cout << "MAX channel or MIN channel" << endl;
	}
}