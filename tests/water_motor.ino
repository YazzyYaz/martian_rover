//	Title: Test Code for Motor Pump with PWM
//	Author: Yaz Khoury
//	Date: September 2015

int pulse = 9;	// PWM Output
int phase = 8;	// Phase Output

// Duty cycle variables
int zeroDuty = 0;
int quarterDuty = 64;
int halfDuty = 127;
int tripQuartDuty = 191;
int fullDuty = 255;



void setup() {
	pinMode(pulse, OUTPUT);
	pinMode(phase, OUTPUT);

}

void loop() {
	analogWrite(pulse, halfDuty);
	digitalWrite(phase, HIGH);

}