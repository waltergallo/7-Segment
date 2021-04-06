
void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);

//This sets all of the pins being used as outputs of energy
  
}

//-----------------------------------------------------------------------------------------------------------------------

void loop() {
  zero();
  delay(1000);
  reset(); 

  one();
  delay(1000);
  reset();     
             
  two();
  delay(1000);
  reset();
  
  three();
  delay(1000);
  reset();
  
  four();
  delay(1000); 
  reset();    
  
  five();
  delay(1000);
  reset();  
           
  six();
  delay(1000);
  reset();
  
  seven();
  delay(1000);
  reset();
  
  eight();
  delay(1000);  
  reset();      
          
  nine();
  delay(1000);
  reset();

  
///
  
}

//-----------------------------------------------------------------------------------------------------------------------

void zero(){
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);

//Sends electricity through specific pins to light up specific leds and turn on a zero
  
  }

  void one(){
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a one

  }

  void two(){
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a two

  }

  void three(){
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a three

  }

  void four(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a four

  }

  void five(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a five

  }

  void six(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a six

  }

  void seven(){
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a seven

  }

  void eight(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up all leds (exept period) and turn on an eight

  }

  void nine(){
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(5, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a nine

  }

  void ten(){
  digitalWrite(11, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);

  //Sends electricity through specific pins to light up specific leds and turn on a letter "E", for error

  }

  void reset(){
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  }
