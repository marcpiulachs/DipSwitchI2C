#include "DipSwitchI2C.h"

/*
 * The address DIP Switch.
 * @address: The I2C address device where to read the information.
 */
DipSwitchI2C::DipSwitchI2C(int address)
{
	_address = address;
}

/*
 * Initializes the library.
 */
void DipSwitchI2C::begin()
{
	Wire.begin();
}

/*
 * Get the address configured based on the dip switch
 */
int DipSwitchI2C::getAddress()
{
	unsigned int address = 0;

	Wire.requestFrom(_address, 1);

	if (Wire.available()) {
		address = Wire.read();
	}

	Wire.endTransmission();

	return address;
}
