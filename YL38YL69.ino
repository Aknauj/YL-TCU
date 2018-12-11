void setup()
{
  Serial.begin(9600);
//Se programa el pin a utilizar por el sensor 
  pinMode(A0, INPUT); 
}

void loop()
{
//Se define la variable "SensorValue" y se hace una lectura
  int SensorValue = analogRead(A0); 
  
//Se utiliza la función map para convertir los valores del sensor a escala 0-100
  SensorValue = map(SensorValue, 0, 1023, 100, 0);

//Se hace un Serial.print para imprimir el valor en la pantalla
  Serial.print(SensorValue); Serial.print(" - ");
  delay(50);
}
