// CREATED BY: VIGHNESH VIKAS SALGAONKAR
// DATE: 16/08/2021
// NOTE:
// MOTOR1 ====> LEFT MOTOR
// MOTOR2 ====> RIGHT MOTOR

int MOTOR1FRONT = 9;
int MOTOR1BACK = 10;
int MOTOR2FRONT = 11;
int MOTOR2BACK = 12;
char val;

void setup() 
{  
pinMode(MOTOR1FRONT, OUTPUT);                       // Digital pin 10 set as output Pin
pinMode(MOTOR1BACK, OUTPUT);                        // Digital pin 11 set as output Pin
pinMode(MOTOR2FRONT, OUTPUT);                       // Digital pin 12 set as output Pin
pinMode(MOTOR2BACK, OUTPUT);                        // Digital pin 13 set as output Pin
Serial.begin(9600);                                      
}                                                                            
                                                                            
void loop()                                                         
{                                                         
  while (Serial.available() > 0)                                                         
    {                                                                            
      val = Serial.read();                                                         
      Serial.println(val);                                                         
    }                                                                            
                                                                            
  if( val == 'F')                                   // Forward
    {                                                   
      digitalWrite(MOTOR1FRONT, HIGH);                     
      digitalWrite(MOTOR1BACK, LOW);                    
      digitalWrite(MOTOR2FRONT, HIGH);                        
      digitalWrite(MOTOR2BACK, LOW);                           
    }                                                 
    else if(val == 'B')                             // Backward
    {                                                    
      digitalWrite(MOTOR1FRONT, LOW);                 
      digitalWrite(MOTOR1BACK, HIGH);                      
      digitalWrite(MOTOR2FRONT, LOW);                             
      digitalWrite(MOTOR2BACK, HIGH);                        
    }                                                 
    else if(val == 'L')                             //Left
    {                                                
      digitalWrite(MOTOR1FRONT, LOW);                 
      digitalWrite(MOTOR1BACK, LOW);                      
      digitalWrite(MOTOR2FRONT, HIGH);                    
      digitalWrite(MOTOR2BACK, LOW);                     
    }                                                     
    else if(val == 'R')                             //Right
    {
      digitalWrite(MOTOR1FRONT, HIGH);                   
      digitalWrite(MOTOR1BACK, LOW);                  
      digitalWrite(MOTOR2FRONT, LOW);                      
      digitalWrite(MOTOR2BACK, LOW);                          
    }                                                          
    else if(val == 'S')                             //Stop
    {                                                 
      digitalWrite(MOTOR1FRONT, LOW);                          
      digitalWrite(MOTOR1BACK, LOW);                      
      digitalWrite(MOTOR2FRONT, LOW);                        
      digitalWrite(MOTOR2BACK, LOW);                              
    }                                                  
    else if(val == 'I')                             //Forward Right
    {                                                    
      digitalWrite(MOTOR1FRONT, HIGH);                   
      digitalWrite(MOTOR1BACK, LOW);                        
      digitalWrite(MOTOR2FRONT, LOW);                     
      digitalWrite(MOTOR2BACK, LOW);                                  
    }                                                   
    else if(val == 'J')                             //Backward Right
    {                                                    
      digitalWrite(MOTOR1FRONT, LOW);                    
      digitalWrite(MOTOR1BACK, HIGH);                      
      digitalWrite(MOTOR2FRONT, LOW);                             
      digitalWrite(MOTOR2BACK, LOW);                     
    }                                                        
    else if(val == 'G')                             //Forward Left
    {                                                
      digitalWrite(MOTOR1FRONT, LOW);                 
      digitalWrite(MOTOR1BACK, LOW);                       
      digitalWrite(MOTOR2FRONT, HIGH);                     
      digitalWrite(MOTOR2BACK, LOW);                       
    }                                                     
    else if(val == 'H')                             //Backward Left
    {                                                   
      digitalWrite(MOTOR1FRONT, LOW);                                            
      digitalWrite(MOTOR1BACK, LOW);                                          
      digitalWrite(MOTOR2FRONT, LOW);                                          
      digitalWrite(MOTOR2BACK, HIGH);                                                         
    }                                                 
}                                                     
