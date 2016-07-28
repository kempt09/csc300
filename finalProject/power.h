#ifndef POWER_H
#define POWER_H


using namespace std;

class Power {

public:

  Power();
  Power(double out, double min, double max);
  ~Power();
  const double getOutput();
  const double getMinimum();
  const double getMaximum();
  void setOutput(double num);
  void setMaximum(double num);
  void setMinimum(double num);


private:
  double output;
  double maximum;
  double minimum;
};

#endif
