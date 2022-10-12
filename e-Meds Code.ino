//Coding for the light:
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output
  pinMode(LED_BUILTIN, OUTPUT):
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(60000);                    // wait for 60 secoonds
  digitalWrite(LED_BUILTIN, LOW);  // turn the LED off by making voltage LOW
  delay(10000);                    // wait for 10 seconds
}

//Coding for the sound:
const int buzzer = 9; //buzzer to arduino pin 9

void setup(){
  pinMode(buzzer,OUTPUT); // set buzzer - pin 9 as an output
}

void loop(){
  tone(sound, 1000);      // play a tone with 1000Hz
  delay(5000);         // wait for 5 seconds
  tone(sound, 6000);    // play a tone with 6000 Hz
  delay(60000)          // wait for 60 seconds
}

// Combining light and sound:
int led = 13;           // LED connected to pin 13
int sound = 9;          // piezo buzzer connected to pin 8

void setup()
{
  pinMode(led, OUTPUT);     // sets the LED as an output
  pinMode(sound, OUTPUT);   // sets the buzzer alarm as output
}

void loop()     // run the program continuously
{
  digitalWrite(led, HIGH);    //turn the LED on
  tone(sound,1000);          // play a tone with 1000 Hz
  delay(5000);              // wair 5 seconds
  digitalWrite(led, LOW);    // turn the LED off
  tone(sound, 6000);          // play a tone with 6000 Hz
  delay(60000);              // wait for 60 seconds

}