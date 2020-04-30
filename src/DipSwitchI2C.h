#ifndef DIPSWITCH_H
#define DIPSWITCH_H

#include "Arduino.h"
#include "Wire.h"

/*
 * I2C DipSwitch class.
 */
class DipSwitchI2C
{
    public:

		/*
		 * The address DIP Switch.
		 * @address: The I2C address device where to read the information.
		 */
		DipSwitchI2C(int address);

		/*
		 * Get the address configured based on the dip switch
		 */
        int getAddress();

        /*
         * Initializes the library.
         */
        void begin();

    private:

        /*
         * Get the address.
         */
        int _address;
};

#endif
