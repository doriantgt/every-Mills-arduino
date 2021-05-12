#include "DurationClass.hpp"

Duration16 globalDuration(3000);//three seconds


void setup() {

  Serial.begin(115200);

}

void loop() {
 // Serial.println(globalDuration.timePassed(300000));


if(globalDuration.timePassed(millis())){

  Serial.println("inside global if");

//you can declare your class static to keep your globals from becoming bloated like this
//this also helps you see how often timePassed will return true.
static Duration16 staticDuration(4000);

if(staticDuration.timePassed(millis())){
  Serial.println("inside static if");
//this will occur every other time becuase it is slightly longer that the globalDuration
}
}
  

}
