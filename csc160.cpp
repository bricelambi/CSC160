
#include "csc160.h"
#include <string>
#include <iostream>

WeatherReport::WeatherReport(string location) {
  this->location = location;
  this->temperature = FILL_VALUE;
  this->windSpeed = FILL_VALUE;
}

WeatherReport::~WeatherReport() {
}

void WeatherReport::setTemperature(double temperature) {
  this->temperature = temperature;
}

double WeatherReport::getTemperature() {
  return this->temperature;
}

void WeatherReport::setWindSpeed(double windSpeed) {
  this->windSpeed = windSpeed;
}

double WeatherReport::getWindSpeed() {
  return this->windSpeed;
}

string WeatherReport::getLocation() {
  return this->location;
}
