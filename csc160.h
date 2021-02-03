
#include <string>

using namespace std;

class WeatherReport {

  private:
    string location;
    double temperature;
    double windSpeed;

  public:
    const double FILL_VALUE = -9999;

    WeatherReport(string location);
    ~WeatherReport();
    
    double getTemperature();
    void setTemperature(double temperature);

    double getWindSpeed();
    void setWindSpeed(double windSpeed);
    
    string getLocation();
};

