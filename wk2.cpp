
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <iomanip>
#include "csc160.h"

using namespace std;

int main() {
  
  int numElements;

  // cout << "enter number of elements: ";
  // cin >> numElements;

/*
  const int NUM_ELEMENTS = 5;

  // int userIds[NUM_ELEMENTS];
  int* userIds = new int[numElements];

  for (int i = 0; i < numElements; i++) {
    userIds[i] = i;
    cout << userIds[i] << endl;
  }

  delete [] userIds;
*/

  // vector<int> userIds;
  // userIds.push_back(42);
  // userIds.push_back(43);
  // userIds.push_back(12);
  
  // numElements = userIds.size();

  // vector<int>* userIds = new vector<int>();

  // userIds->push_back(42);
  // userIds->push_back(43);

  // numElements = userIds->size();

  // cout << numElements << " in your vector" << endl;
  
  // for (int i = 0; i < numElements; i++) {
  //   int value = userIds->at(i);
  //   if (value > 20) {
  //     cout << value << endl;
  //   }
  // }
  
  // delete userIds;


  // map<int,string> mymap;
  // map<int,string>::iterator it = mymap.begin();


  // mymap.insert(it, pair<int,string>(2,"hello"));
  // mymap.insert(it, pair<int,string>(43,"forty three"));

  // cout << mymap.at(43) << endl;
  

  /*
  int i = 0;
  while (i < NUM_ELEMENTS) {
    cout << userIds[i] << endl;
    i++;
  }

  i = 0;
  do {
    cout << userIds[i] << endl;
    i++;
  } while (i < NUM_ELEMENTS);
  */


  
  string location;

  cout << "Please enter your airport:";
  cin >> location;

  WeatherReport report = WeatherReport(location);

  cout << "temperature is " << report.getTemperature() << " at " << report.getLocation() << endl;

}
