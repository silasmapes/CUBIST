#include <AutoPID.h>

bool active = true;


double kp = 0.1;
double ki = 0;
double kd = 0;

double input1 = 0;
double input2 = 0;
double input3 = 0;

double setpoint1 = 0;
double setpoint2 = 0;
double setpoint3 = 0;

double output1 = 0;
double output2 = 0;
double output3 = 0;


AutoPID pid1 = AutoPID(input1, setpoint1, output1, -1, 1, kp, ki, kd);
AutoPID pid2 = AutoPID(input2, setpoint2, output2, -1, 1, kp, ki, kd);
AutoPID pid3 = AutoPID(input3, setpoint3, output3, -1, 1, kp, ki, kd);

void setup() {
  pid1.setTimeStep(10);
  pid2.setTimeStep(10);
  pid3.setTimeStep(10);

  pid1.reset();
  pid2.reset();
  pid3.reset();
}

void loop() {
  if(active){
    pid1.run();
    pid2.run();
    pid3.run();
    
    setM1(output1);
    setM2(output2);
    setM3(output3);
  }


}


void setM1(double val){

}

void setM2(double val){
  
}

void setM3(double val){
  
}
