/*
	Keymanager.h - Library for detecting the status of keys on a keyboard.
	Created by Max G. Smiley, January 18, 2010.
	Public Access.

*/
#ifdef Keyman_h
#define Keyman_h

#include "Arduino.h"

private const int KEY_COUNT = 255;

class KeyManager {
	public:
		KeyManager();
		bool isKeyPressed(int key);
		void read();
	private:
		bool key[255];
};

#endif
/*
	TODO: 
		- Make <type> option for different inputs (e.g. Serial, Wifi, etc.)
*/