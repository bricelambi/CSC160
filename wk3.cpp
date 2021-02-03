
#include <fstream>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
using std::ifstream;
using std::stringstream;

int main() {

  ifstream str("US_points_hourly_CST.csv");

  vector<string>   result;

  string line;
  string header;

  getline(str, header);

  cout << header << endl;

  while (true) {
    getline(str,line);

    if (line.length() == 0) {
      break;
    }

    result.push_back(line);
  }

  cout << "read " << result.size() << " rows" << endl;

  ofstream out("mydata.csv");

  string newline = "\n";

  for (int i = 0; i < result.size(); i++) {
    line = result[i];
    out.write(line.c_str(), line.size());
    out.write(newline.c_str(), newline.length());
  }

}