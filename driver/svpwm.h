#ifndef SVPWM_H
#define SVPWM_H



typedef struct current MT_CUR
typedef struct motor_param MT_PARA
typedef struct driver_param DRV_PARA
typedef struct svpwm_motor_ctr_handle MT_CTR_HANDLE
  

struct motor_current
{
  float i_a;
  float i_b;
  float i_c; 
  
};

struct motor_param
{

};

struct driver_param
{

};

struct 



struct svpwm_motor_ctr_handle
{
  
  MT_PARA motor_param;
  MT_CUR motot_current;
  DRV_PARA driver_param;
  

  
  void (*init)();
  void (*duty_cycle)(*MT_CTR_HANDLE mt_ctr);
  void (*get_info)(*MT_CTR_HANDLE mt_ctr);


};


void Read_Current(*CURRENT mt_cur);

void FOC_cal(*MT_CTR_HANDLE);










#endif
