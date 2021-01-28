
#include "csc160.h"
#include <string>
#include <iostream>

WeatherReport::WeatherReport(string location) {
  this->location = location;
  this->temperature = FILL_VALUE;
}

WeatherReport::~WeatherReport() {
}

double WeatherReport::getTemperature() {
  return this->temperature;
}

string WeatherReport::getLocation() {
  return this->location;
}

// vector<string> getNextLineAndSplitIntoTokens(istream& str)
// {
//     vector<string>   result;
//     string                line;
//     std::getline(str,line);

//     std::stringstream          lineStream(line);
//     std::string                cell;

//     while(std::getline(lineStream,cell, ','))
//     {
//         result.push_back(cell);
//     }
//     // This checks for a trailing comma with no data after it.
//     if (!lineStream && cell.empty())
//     {
//         // If there was a trailing comma then add an empty element.
//         result.push_back("");
//     }
//     return result;
// }
