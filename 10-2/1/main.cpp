#include "clock.h"
#include "clock_time.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
	
{
	int time;
	cin >> time;

	//1.객체 생성
	vector<Clock*> clock;
	clock.push_back(new SundialClock(0, 0, 0));
	clock.push_back(new CuckooClock(0, 0, 0));
	clock.push_back(new GrandFatherClock(0, 0, 0));
	clock.push_back(new WristClock(0, 0, 0));
	clock.push_back(new AtomicClock(0, 0, 0));
	
	//2.reset
	for (int i = 0; i < clock.size(); i++) {
		clock[i]->reset();
	}

	cout << "Reported clock times after resetting :" << endl;

	//3.설정 전 시간 보여주기
	for (int i = 0; i < clock.size(); i++) {
		clock[i]->displayTime();
	}
	cout << endl;
	cout << "Running the clocks .." << endl << endl;

	for (int i = 0; i < clock.size(); i++) {
		for (int j = 0; j < time; j++) {
			clock[i]->tick();
		}
	}

	for (int i = 0; i < clock.size(); i++) {
		clock[i]->displayTime();
		
	}


	for (int i = 0; i < clock.size(); i++) {
		delete clock[i];
	}

	return 0;
}
