void main_code(void) {

  tempC_ambient = SL19.getAmbientTempC(); // Temperature in Celcuis
  tempC_object = SL19.getObjectTempC(); // Temperature in Celcuis
  OD01.set2X();
  OD01.print(" ");
  OD01.print(tempC_object);
  OD01.println(" C");
  OD01.set1X();
  OD01.println(" Object Temp above");
  OD01.println("");
  OD01.println("Place an object in");
  OD01.println("line of site");
  OD01.print("Ambient Temp: ");
  OD01.print(tempC_ambient);
  OD01.print(" C");
}

