#pragma once

#include <string>

class Time {
public:
  Time(int = 0, int = 0 , int = 0);

  void setTime(int , int , int);
  void setHour(int h) { hour = (h >=0 && h < 24) ? h : 0; }
  void setMinute(int m) { minute = (m >= 0 && m < 60) ? m : 0; }
  void setSecond(int s) { second = (s >= 0 && s < 60) ? s : 0; }
  void tick();

  int getHour() const { return hour; }
  int getMinute() const { return minute; }
  int getSecond() const { return second; }

  std::string toUniversal() const;
  std::string toStandard() const;

private:
  int hour;
  int minute;
  int second;
};
