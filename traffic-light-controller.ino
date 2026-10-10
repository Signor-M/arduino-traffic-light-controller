// Définition des broches de l'Arduino
const int redPin = 13;
const int yellowPin = 12;
const int greenPin = 11;

// Contrôle l'état des trois LEDs pendant une durée donnée
void showColor(int red,int yellow, int green, int time){
  digitalWrite(redPin, red);
  digitalWrite(yellowPin, yellow);
  digitalWrite(greenPin, green);
  delay(time);  
}

void setup() {
  // Configuration des broches en sorties numériques
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
  // Allume le feu rouge pendant 5 secondes
  showColor(HIGH,LOW,LOW,5000);   
   // Allume le feu vert pendant 4 secondes      
  showColor(LOW,LOW,HIGH,4000);
  // Allume le feu jaune pendant 1 seconde                
  showColor(LOW,HIGH,LOW,1000);                  
}