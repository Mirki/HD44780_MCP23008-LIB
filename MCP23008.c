#include "i2cmaster.h"
#include "MCP23008.h"


void mcp23008_reg_write (int mcp23008_address, int regnumber, int regvalue)
{
	
	i2c_start(mcp23008_address+I2C_WRITE);
	i2c_write(regnumber);
	i2c_write(regvalue);
	//i2c_stop();
}

uint8_t mcp23008_reg_read (int mcp23008_address, int regnumber)
{
	int regvalue;
	i2c_start(mcp23008_address+I2C_READ);
	i2c_write(regnumber);
	regvalue = i2c_readAck();
	//i2c_stop();
	return regvalue;
	
}


