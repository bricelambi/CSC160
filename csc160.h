
#include <string>

using namespace std;

class WeatherReport {

  private:
    string location;
    double temperature;

  public:
    const double FILL_VALUE = -9999;

    WeatherReport(string location);
    ~WeatherReport();
    
    double getTemperature();
    string getLocation();
};

