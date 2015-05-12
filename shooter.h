//Edited 1:20pm 5/12
void ShooterStateMachine() //Counter keeps track of buttons pushed to increase state
{
  if(shootstate >=0 && shootstate <= 99)
  {
    if(SHOOTUP==PRESS)
    {shootstate=shootstate+100;}
    
    IF(SHOOTDOWN==PRESS)
    {shootstate=shootstate+200;}
  }
  
  if(shootstate>=100 && shootstate <= 199)
  {
    if(SHOOTUP==NOTPRESS)
    {shootstate=shootstate-100;}
  }
  
  if(shootstate>=200 && shootstate <= 299)
  {
    if(SHOOTDOWN==NOTPRESS)
    {shootstate=shootstate+200}
  }
}

void ShooterSpeed(int speed)//uses motors shootfrontleft, shootbackleft, shootfrontright, shootbackright
{
  motor[shootfrontleft]=  speed;
  motor[shootbackleft]=   speed;
  motor[shootfrontright]= speed;
  motor[shootbackright]=  speed;
}

void SetShooter() //sets shooter speed based on shooter state
{
  if(shootstate==0)
  {ShooterSpeed(0);}
  
  if(shootstate=1)
  {ShooterSpeed(30);}
  
  if(shooterstate==2)
  {ShooterSpeed(60);}
   
  if(shooterstate==3)
  {ShooterSpeed(90);}
  
  if(shooterstate==4)
  {ShooterSpeed(95);} 
  
  if(shooterstate==5)
  {ShooterSpeed(100);} 
  
  if(shooterstate==6)
  {ShooterSpeed(105);} 
  
  if(shooterstate==7)
  {ShooterSpeed(110);} 
  
  if(shooterstate==8)
  {ShooterSpeed(115);} 
  if(shooterstate==9)
  {ShooterSpeed(120);} 
  if(shooterstate==10)
  {ShooterSpeed(125);} 
  if(shooterstate==11)
  {ShooterSpeed(127);} 
  
  
  
  
}
