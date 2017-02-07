#ifndef SITL_H
#define SITL_H

#include "WProgram.h"
#include "Flight_Configuration.h"
#include "Salt_Rev0.h"



class SITL{
public:

  bool initialize();
  byte readESense();
  byte readIsoSense();
  Bmp_Data* readBMP();
  float readVbat();

private:
  void float2Bytes(float val, byte* bytes_array);
  float bytes2Float(byte* bytes_array);
  void request(byte select);
  byte requestMsg[5];
  elapsedMillis global_time;

};







#endif
