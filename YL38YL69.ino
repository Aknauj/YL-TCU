void setup()
{
  Serial.begin(9600);
//Se programa el pin a utilizar por el sensor 
  pinMode(A0, INPUT); 
}

void loop()
{
//Se define la variable "Humedad" y se hace una lectura
  int Humedad = analogRead(A0); 
  
//Se utiliza la función map para convertir los valores del sensor a escala 0-100
  Humedad = map(Humedad, 511.5, 1023, 100, 0);

//Se hace un Serial.println para imprimir el valor en la pantalla de manera gráfica
  Serial.println(Humedad);
  delay(50);
}
