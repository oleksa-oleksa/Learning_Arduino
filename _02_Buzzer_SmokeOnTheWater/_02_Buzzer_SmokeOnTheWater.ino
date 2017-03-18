#include "pitches.h"

//notes in the melody
// Deep Purple
// Smoke on the water (Keyboard)
// A quarter note is taken as a conventional unit of time and is denoted as R

int R = 500; // for song tempo of 1/4 note 

// the Array of the notes 
int melody[]={NOTE_D4, NOTE_PAUSE, NOTE_F4, NOTE_PAUSE, NOTE_G4, NOTE_PAUSE, NOTE_D4, 
              NOTE_PAUSE, NOTE_F4, NOTE_PAUSE, NOTE_F5, NOTE_G4, NOTE_PAUSE,
              NOTE_D4, NOTE_PAUSE, NOTE_F4, NOTE_PAUSE, NOTE_G4, NOTE_PAUSE, NOTE_D4,
              NOTE_PAUSE, NOTE_D4};

// multiplier for note duration
float noteDurations[]={0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5, 
                       0.5, 0.5, 0.5, 0.5, 1.5, 0.5,
                       0.5, 0.5, 0.5, 0.5, 1, 0.5, 0.5,
                       0.5, 2.5};

//digital pin 12 has a button attached to it. 
int buttonPin= 12;


void setup(){

  //make the button's pin input
  pinMode(buttonPin, INPUT);
}


void loop()
{

  //if the button is pressed
  if(digitalRead(buttonPin) == HIGH)
  {
    //iterate over the notes of the melody
    for (int thisNote = 0; thisNote < 22; thisNote++)
    {

      //to calculate the note duration, take one second. Divided by the note type
      int noteDuration = R * noteDurations [thisNote];
      tone(8, melody[thisNote], noteDuration);
      delay(noteDuration);
      //stop the tone playing
      noTone(8);
    }
  }
}
