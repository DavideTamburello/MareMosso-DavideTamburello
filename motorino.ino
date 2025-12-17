int EN = 9; 
int IN1 = 2;
int IN2 = 3;

int verso;
int velocita;

void setup() 
{  
  Serial.begin(9600);
  Serial.setTimeout(3000);

  pinMode(EN, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
}

void loop() 
{
  Serial.println("inserisci verso(1 o 2), (spazio), velocita (0-255)");
  Serial.println("esempio: 1 200");

  while (Serial.available() == 0) 
  {}
  verso = Serial.parseInt(); 

  while (Serial.available() == 0) 
  {}
  velocita = Serial.parseInt();

  while (Serial.available() > 0) 
  {
    Serial.read();
  }

  if (velocita > 255) velocita = 255;
  if (velocita < 0) velocita = 0;

  Serial.print("verso: ");
  Serial.println(verso);
  Serial.print("velocità: ");
  Serial.println(velocita);

  if (verso == 1) 
  {
    // orario
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    analogWrite(EN, velocita);

  }else if (verso == 2) 
  {
    // antiorario
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    analogWrite(EN, velocita);
  }else 
  {
    Serial.println("il verso inserito non è valido");
  }

  Serial.println("INIZIO");
  delay(3000);
  Serial.println("FINE");

  // Serial.println("scrivi qualcosa per fermare il motorino");
  // while(Serial.available() == 0)
  // {}
  // while (Serial.available() > 0) 
  // {
  //   Serial.read();
  // }

  analogWrite(EN, 0);     
  digitalWrite(IN1, LOW); 
  digitalWrite(IN2, LOW);

  delay(1000);
}