#include "common.h"
int testleft = -300;
int testright =300;

void main(void)
{
  
  DisableInterrupts();      //�ر��ж�
  
  system_init();            //ϵͳ��ʼ��

  ScheduleInit();           //���Ʋ�������ֵ
  
  EnableInterrupts();       //���ж�
  
  for(;;)
  {
    Running();

//    ���ߵ��ԡ�������ת�ķ�����������Ƿ���ͬ
  // SET_PWM_MOTL(testleft);
   //SET_PWM_MOTR(testright);
  }
}

