#ifndef LIGHT_H
#define LIGHT_H


using namespace std;

class Light {

public:

  Light();
  Light(bool value);
  ~Light();
  const bool getIsIlluminated();
  void setIsIlluminated(bool value);


private:
  bool isIlluminated;
};

#endif
