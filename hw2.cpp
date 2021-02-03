
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include "csc160.h"

using namespace std;

const double temps[] = { 41.5, 43.5, 51.4};
const double wind_speeds[] = { 7.1, 5.3, 11.2};
const string locations[] = { "klmo", "kbdu", "kbjc"};

double getAverageTemperature(vector<WeatherReport> reports);
double getAverageWindSpeed(vector<WeatherReport> reports);

int main() {
  
  int numElements = sizeof(temps) / sizeof(temps[0]);

  vector<WeatherReport> reports;

  for (int i = 0; i < numElements; i++) {
    double temp = temps[i];
    double windSpeed = wind_speeds[i];

    string location = locations[i];

    WeatherReport report = WeatherReport(location);
    report.setTemperature(temp);
    report.setWindSpeed(windSpeed);
    reports.push_back(report);
  }

  double avgTemp = getAverageTemperature(reports);
  cout << "average temperature is " << avgTemp << endl;

  double avgWindSpeed = getAverageWindSpeed(reports);
  cout << "average wind speed is " << avgWindSpeed << endl;
}


double getAverageTemperature(vector<WeatherReport> reports) {
  double sum = 0;
  int size = reports.size();
  for (int i = 0; i < size; i++) {
    double temp = reports.at(i).getTemperature();
    sum = sum + temp;
  }
  double avg = sum / size;
  return avg;
}

double getAverageWindSpeed(vector<WeatherReport> reports) {
  double sum = 0;
  int size = reports.size();
  for (int i = 0; i < size; i++) {
    double windSpeed = reports.at(i).getWindSpeed();
    sum = sum + windSpeed;
  }
  double avg = sum / size;
  return avg;
}
