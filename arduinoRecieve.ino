char BTString;

if (serial1.available()) {
BTString = serial1.read();

/* S is the command that my Ionic application sends to start the measurement */
if (BTString == 'S') {
  		BTString = "";

	/* Here is where I will do the calculations of the measurements and send the results via Bluetooth, but in this example I will only send hypothetical results */
	
 		Serial.write("D"); // This indicates Start
  		Serial.write("45.55"); // measurement 1
  		Serial.write("79.80"); // measurement 2
  		Serial.write("67.20"); // measurement 3
  		Serial.write("F"); // This indicates the end
}
}
