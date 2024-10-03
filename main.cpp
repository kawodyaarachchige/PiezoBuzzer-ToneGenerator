// Pin where the piezo buzzer is connected
int piezoPin = 4;

// Note frequencies in Hz
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523

// Notes of "Twinkle Twinkle Little Star"
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4
};

// Duration of each note (in milliseconds)
int noteDurations[] = {
  500, 500, 500, 500, 500, 500, 1000,
  500, 500, 500, 500, 500, 500, 1000
};

void setup() {
  // Nothing to do in setup
}

void loop() {
  // Play the melody
  for (int i = 0; i < 14; i++) {
    int noteDuration = noteDurations[i];
    tone(piezoPin, melody[i], noteDuration); // Play the note

    delay(noteDuration * 1.3); // Wait for the note to finish
  }

  delay(2000); // Pause before repeating the song
}
