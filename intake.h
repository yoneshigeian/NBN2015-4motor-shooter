void Intake(int speed)
{
motor[inleft]=speed;
motor[inright]=speed;
}

void UserIntake()
{
  if(INTAKE==PRESS)
  {Intake(127);}

  if(OUTTAKE==PRESS)
  {Intake(-127);}
 
   if(INTAKE==NOTPRESS && OUTTAKE==NOTPRESS)
   {Intake(0);}
}
  
