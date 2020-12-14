// by Ashevsky Alexandr
//Class TV
//Simulates TV
#pragma once
#include <string>
class TV {
private:
	bool OFForON;
	unsigned int chanel;
	const int ch = 10;
	enum{MAX=10};
	std::string ChannelsList[MAX];
public:
	TV();
	TV(bool,unsigned int);
	////////////////////////
	void SetChList();
	void OnTV();
	void OffTV();
	void showStatusTV();
};