#include <iostream>
#include <format>
#include "Time.hpp"

using std::cout, std::endl, std::format;

Time::Time(int hr, int min, int sec) {
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s) {
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

std::string Time::toUniversal() const {
	return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const {
	return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

void Time::tick(){
    setSecond(second+1);
    if(second == 0) {
        setMinute(minute+1);
        if(minute == 0) {
            setHour(hour+1);
            if(hour == 0){
                
            }
        }
    }
}