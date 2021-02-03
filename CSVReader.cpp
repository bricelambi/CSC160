#include "CSVReader.h"
#include <fstream>

using namespace std;
using std::ifstream;
using std::stringstream;

vector<vector<string>> CSVReader::getRowData(string filename)
{
  ifstream str(filename);
  vector<vector<string>> rows;
    vector<string>   result;
    string                line;
    getline(str,line);

    stringstream          lineStream(line);
    string                cell;

    while(std::getline(lineStream,cell, ','))
    {
        result.push_back(cell);
    }
    // This checks for a trailing comma with no data after it.
    if (!lineStream && cell.empty())
    {
        // If there was a trailing comma then add an empty element.
        result.push_back("");
    }

    return rows;
}
