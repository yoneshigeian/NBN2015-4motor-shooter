//Edited 1:20pm 5/12
void ShooterStateMachine()
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
