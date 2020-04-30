# DipSwitch IC2

This is a Arduino library for handling DIP Switch connected to I2C bus.

## Example

```cpp
#include <DipSwitchI2C.h>

DipSwitchI2C dipSwitch(0x27);

void seup()
{
  Serial.begin(9600);
}

void loop() 
{
	// Read the address from the dip switch
	byte address = dipSwitch.getAddress());
	
	// Shows the address
	Serial.println(address);
}
```
