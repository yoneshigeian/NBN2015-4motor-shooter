
void DriveFwd(int speed)
{
  motor[frontleft]  =speed;
  motor[backleft]   =speed;
  motor[frontright] =speed;
  motor[backright]  =speed;
}

UserDrive()
{
  if(vexRT[Ch2] > DEADBAND || vexRT[Ch2] < DEADBAND)
  {
  motor[frontleft]  =vexRT[Ch2];
  motor[backleft]   =vexRT[Ch2];
  }
  else
  {
  motor[frontleft]  =0;
  motor[backleft]   =0;
  }
  
  if(vexRT[Ch3] > DEADBAND || vexRT[Ch3] < DEADBAND)
  {
  motor[frontright]   =vexRT[Ch3];
  motor[backright]    =vexRT[Ch3];
  }
  else
  {
  motor[frontright] =0;
  motor[backright]  =0;
  }
}
