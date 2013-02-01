
#include "Arduino.h"
#include "KeyManager.h"

private const int KEY_COUNT = 255;

KeyManager::KeyManager(){
	//If serial port not started, start it.
	if (!Serial) { Serial.begin(9600) };
	//Initialize keys to false
	for(int i = 0; i < KEY_COUNT; i ++){
		key[i] = false;
	}
}

bool KeyManager::isKeyPressed(int key){
	return key[i];
}

void KeyManager:: read(){
	char val = ' ';
	if(Serial.available()){
		//TODO: add verifier flag infront of message
		val = Serial.read();
	}
	//Set pressed keys to true
	key[val] = true;
  //Set released keys (represented by capitals thus +32) to false
  key[val+32] = false;
}

