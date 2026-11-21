#define motor1_in_1 5
#define motor1_in_2 9
#define motor2_in_3 6
#define motor2_in_4 11
#define buzzer 12
#define frontlight 2
#define backlight 3
#define pwm1 4
#define pwm2 5

int val=0;

char command='S';
char prevcommand='A';

void setup() {
Serial.begin(9600);
pinMode(frontlight,OUTPUT);
pinMode(backlight,OUTPUT);
pinMode(motor1_in_1,OUTPUT);
pinMode(motor1_in_2,OUTPUT);
pinMode(motor2_in_3,OUTPUT);
pinMode(motor2_in_4,OUTPUT);
pinMode(12,OUTPUT);
pinMode(pwm1,OUTPUT);
pinMode(pwm2,OUTPUT);

}

void loop() {
 if(Serial.available()>0)
 {
    //prevcommand=command;
    command=Serial.read();
    Serial.println(command);
    //pwm1=map(pwm1,0,1023,0,100);
    //pwm2=map(pwm2,0,1023,0,100);
    //if(command!=prevcommand)
    //{
      
      if(command=='0')
   {
     val=0;
   
   }
   else if(command=='1')
   {
     val=25;
   
   }
   
   else if(command=='2')
   {
     val=50;
   
   }

   else if(command=='3')
   {
     val=75;
   
   }
   
   else if(command=='4')
   {
     val=100;
   
   }
   
   else if(command=='5')
   {
     val=125;
   
   }
   else if(command=='6')
   {
     val=150;
   
   }
   
   else if(command=='7')
   {
     val=200;
   
   }
   
   else if(command=='8')
   {
     val=225;
   
   }
   
   else if(command=='9')
   {
     val=255;
   
   }

    
        switch(command)
        {
    
          case 'F':
          
          analogWrite(motor1_in_1,val);
          analogWrite(motor1_in_2,0);
          analogWrite(motor2_in_3,val);
          analogWrite(motor2_in_4,0);
          
          
          break;
          
          case 'B':
          
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,HIGH);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,HIGH);
          
          
          
          break;
          
          case 'L':
          
          digitalWrite(motor1_in_1,HIGH);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,HIGH);
              
          break;
           
          case 'R':
          
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,HIGH);
          digitalWrite(motor2_in_3,HIGH);
          digitalWrite(motor2_in_4,LOW);
          
    
          break; 
           
          case 'S':
          
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,LOW);
          
    
          break;
         
          case 'W':
          
          digitalWrite(frontlight,HIGH);
            
          break;
          
          case 'w':
          
          digitalWrite(frontlight,LOW);
            
          break;
         case 'U':
          
          digitalWrite(backlight,HIGH);
          
            
          break;
          
          case 'u':
          
          digitalWrite(backlight,LOW);
          
            
          break;
         
         case 'V':
          
          digitalWrite(12,HIGH);
            
          break;
          
          case 'v':
          
          digitalWrite(12,LOW);
            
          break;
          
          case 'G':
          
          digitalWrite(motor1_in_1,HIGH);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,LOW);
           
          break;
          
          case 'I':
          
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,HIGH);
          digitalWrite(motor2_in_4,LOW);
          
          break;
          
          case 'H':
          
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,HIGH);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,LOW);
          
          break;
          
          case 'J':
          
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,HIGH);
          
    
          break;
          
          case '1':
          val=50;
          analogWrite(motor1_in_1,val);
          analogWrite(motor2_in_3,val);
          digitalWrite(motor1_in_1,HIGH);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,HIGH);
          digitalWrite(motor2_in_4,LOW);
          
          
          break;
          
          case '5':
          val=100;
          analogWrite(motor1_in_1,val);
          analogWrite(motor2_in_3,val);
          digitalWrite(motor1_in_1,HIGH);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,HIGH);
          digitalWrite(motor2_in_4,LOW);
          
          
          break;
          
          case '8':
          val=200;
          analogWrite(motor1_in_1,val);
          analogWrite(motor2_in_3,val);
          digitalWrite(motor1_in_1,HIGH);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,HIGH);
          digitalWrite(motor2_in_4,LOW);
          
          
          break;
          
          case '9':
          val=255;
          analogWrite(motor1_in_1,val);
          analogWrite(motor2_in_3,val);
          digitalWrite(motor1_in_1,HIGH);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,HIGH);
          digitalWrite(motor2_in_4,LOW);
          
          
          break;
          
          
          default:
          
          if(command=='D')
          {
            
          digitalWrite(motor1_in_1,LOW);
          digitalWrite(motor1_in_2,LOW);
          digitalWrite(motor2_in_3,LOW);
          digitalWrite(motor2_in_4,LOW);
          digitalWrite(backlight,LOW);
          digitalWrite(frontlight,LOW);
          }
           
           
    
        //}
    
    
    
    }
 
 
 
 
 }

}
