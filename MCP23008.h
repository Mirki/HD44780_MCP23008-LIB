
#define LCD_I2C_DEVICE	0x40

void mcp23008_reg_write (int mcp23008_address, int regnumber, int regvalue);
uint8_t mcp23008_reg_read (int mcp23008_address, int regnumber);


#define MCP23008_IODIR		0x00
#define MCP23008_IOPOL		0x01
#define MCP23008_GPINTEN	0x02
#define MCP23008_DEFVAL		0x03
#define MCP23008_INTCON		0x04
#define MCP23008_IOCON		0x05
#define MCP23008_GPPU		0x06
#define MCP23008_INTF		0x07
#define MCP23008_INTCAP		0x08
#define MCP23008_GPIO		0x09
#define MCP23008_OLAT		0x0A

