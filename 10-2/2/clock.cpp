#include "clock.h"
#include <iostream>

double count = 0;


Clock::Clock(int hour, int minute, int second, double driftPerSecond) {
	_clockTime.setTime(hour, minute, second, 1);
	_driftPerSecond = driftPerSecond;
	_totalDrift = _clockTime.second() * _driftPerSecond; 
}

void Clock::reset() {
	_clockTime.reset();
}

void Clock::tick() {
	_clockTime.increment();
	_clockTime.setTime(_clockTime.hour(), _clockTime.minute(), _clockTime.second(), _clockTime.secondsPerTick());
	count++;
}

//생성자

NaturalClock::NaturalClock(int hour, int minute, int second, double driftPerSecond) :
	Clock(hour, minute, second, driftPerSecond) {}

MechanicalClock::MechanicalClock(int hour, int minute, int second, double driftPerSecond) :
	Clock(hour, minute, second, driftPerSecond) {}

DigitalClock::DigitalClock(int hour, int minute, int second, double driftPerSecond) :
	Clock(hour, minute, second, driftPerSecond) {}

QuantumClock::QuantumClock(int hour, int minute, int second, double driftPerSecond) :
	Clock(hour, minute, second, driftPerSecond) {}

//concrete class
SundialClock::SundialClock(int hour, int minute, int second) :

	NaturalClock(hour, minute, second, error) {}

void SundialClock::showTime() {
	count = 0;
	std::cout << "Sundial alarm at ";
	_clockTime.display();
	std::cout << std::endl;
}

void SundialClock::displayTime() {
	std::cout << "SundialClock ";
	_clockTime.display();
	_totalDrift = error / 5 * count;
	std::cout << ", total drift: " << _totalDrift << std::endl;
}

CuckooClock::CuckooClock(int hour, int minute, int second) :
	MechanicalClock(hour, minute, second, error) {}

void CuckooClock::showTime() {
	count = 0;
	std::cout << "Cuckoo alarm at ";
	_clockTime.display();
	std::cout << std::endl;
}

void CuckooClock::displayTime() {
	std::cout << "CuckooClock ";
	_clockTime.display();
	_totalDrift = error / 5 * count;
	std::cout << ", total drift: " << _totalDrift << std::endl;
}

GrandFatherClock::GrandFatherClock(int hour, int minute, int second) :
	MechanicalClock(hour, minute, second, error) {}

void GrandFatherClock::showTime() {
	count = 0;
	std::cout << "GrandFather alarm at ";
	_clockTime.display();
	std::cout << std::endl;
}

void GrandFatherClock::displayTime() {
	std::cout << "GrandFatherClock ";
	_clockTime.display();
	_totalDrift = error / 5 * count;
	std::cout << ", total drift: " << _totalDrift << std::endl;
}

WristClock::WristClock(int hour, int minute, int second) :
	DigitalClock(hour, minute, second, error) {}

void WristClock::showTime() {
	count = 0;
	std::cout << "Wrist alarm at ";
	_clockTime.display();
	std::cout << std::endl;
}

void WristClock::displayTime() {
	std::cout << "WristClock ";
	_clockTime.display();
	_totalDrift = error / 5 * count;
	std::cout << ", total drift: " << _totalDrift << std::endl;
}

AtomicClock::AtomicClock(int hour, int minute, int second) :
	QuantumClock(hour, minute, second, error) {}

void AtomicClock::showTime() {
	count = 0;
	std::cout << "Atomic alarm at ";
	_clockTime.display();
	std::cout << std::endl;
}

void AtomicClock::displayTime() {
	std::cout << "AtomicClock ";
	_clockTime.display();
	_totalDrift = error / 5 * count;
	std::cout << ", total drift: " << _totalDrift << std::endl;
}

