//SSD2805_Initial
    LCD_WRITE_COMMAND(0xb7);
    LCD_WRITE_DATA(0x50);
    LCD_WRITE_DATA(0x00);   //Configuration Register

    LCD_WRITE_COMMAND(0xb8);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);   //VC(Virtual ChannelID) Control Register

    LCD_WRITE_COMMAND(0xb9);
    LCD_WRITE_DATA(0x01);
    LCD_WRITE_DATA(0x00);   //PLL enable

    LCD_WRITE_COMMAND(0xba);
    LCD_WRITE_DATA(0x31);
    LCD_WRITE_DATA(0x02);   //PLL Control Register  500MHz External OSC=40MHz  M/(P1+1)*(P2+1)=Mbps  M:OSC  P2=49 Mbps=500

    LCD_WRITE_COMMAND(0xbb);
    LCD_WRITE_DATA(0x06);
    LCD_WRITE_DATA(0x00);   //500/8/7 = 8.93MHz

    LCD_WRITE_COMMAND(0xc9);
    LCD_WRITE_DATA(0x02);
    LCD_WRITE_DATA(0x23);   //p1: HS-Data-zero  p2: HS-Data- prepare  --> 8031 issue
    Delayms(100);

// OTM8009A_initial
// enable EXTC
	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xff);
	LCD_WRITE_DATA(0x80);
	LCD_WRITE_DATA(0x09);
	LCD_WRITE_DATA(0x01);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x80);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xff);
	LCD_WRITE_DATA(0x80);
	LCD_WRITE_DATA(0x09);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x03);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xff);
	LCD_WRITE_DATA(0x01);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xb4);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc0);
	LCD_WRITE_DATA(0x50);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x89);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc4);
	LCD_WRITE_DATA(0x08);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xa3);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc0);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x82);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc5);
	LCD_WRITE_DATA(0xa3);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x90);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc5);
	LCD_WRITE_DATA(0x96);
	LCD_WRITE_DATA(0x87);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xd8);
	LCD_WRITE_DATA(0x73);
	LCD_WRITE_DATA(0x71);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xd9);
	LCD_WRITE_DATA(0x5A);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x11);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xe1);
	LCD_WRITE_DATA(0x09);
	LCD_WRITE_DATA(0x0a);
	LCD_WRITE_DATA(0x0e);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x07);
	LCD_WRITE_DATA(0x18);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x01);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x05);
	LCD_WRITE_DATA(0x06);
	LCD_WRITE_DATA(0x0e);
	LCD_WRITE_DATA(0x25);
	LCD_WRITE_DATA(0x22);
	LCD_WRITE_DATA(0x05);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x11);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xe2);
	LCD_WRITE_DATA(0x09);
	LCD_WRITE_DATA(0x0a);
	LCD_WRITE_DATA(0x0e);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x07);
	LCD_WRITE_DATA(0x18);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x01);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x05);
	LCD_WRITE_DATA(0x06);
	LCD_WRITE_DATA(0x0e);
	LCD_WRITE_DATA(0x25);
	LCD_WRITE_DATA(0x22);
	LCD_WRITE_DATA(0x05);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x81);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc1);
	LCD_WRITE_DATA(0x66);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xa1);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc1);
	LCD_WRITE_DATA(0x08);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xa3);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc0);
	LCD_WRITE_DATA(0x1b);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x81);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc4);
	LCD_WRITE_DATA(0x83);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x92);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc5);
	LCD_WRITE_DATA(0x01);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xb1);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xc5);
	LCD_WRITE_DATA(0xa9);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x80);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xce);
	LCD_WRITE_DATA(0x85);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x84);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x83);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x82);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xa0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0f);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xce);
	LCD_WRITE_DATA(0x38);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x21);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x38);
	LCD_WRITE_DATA(0x01);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x22);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xb0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0f);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xce);
	LCD_WRITE_DATA(0x38);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x23);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x30);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x24);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xc0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0f);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xce);
	LCD_WRITE_DATA(0x30);
	LCD_WRITE_DATA(0x01);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x25);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x30);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x26);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xd0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0f);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xce);
	LCD_WRITE_DATA(0x30);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x27);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x30);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x28);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xc0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0b);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xd0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x01);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcf);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xc0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcb);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xd0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcb);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x04);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xe0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0b);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcb);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x80);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0b);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcc);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x0c);
	LCD_WRITE_DATA(0x0a);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x0e);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x04);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x90);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcc);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x0b);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xa0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcc);
	LCD_WRITE_DATA(0x09);
	LCD_WRITE_DATA(0x0f);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x01);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xb0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x0b);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcc);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x0d);
	LCD_WRITE_DATA(0x0f);
	LCD_WRITE_DATA(0x09);
	LCD_WRITE_DATA(0x0b);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x01);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xc0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcc);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x0e);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x02);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0xd0);

	LCD_WRITE_COMMAND(0xB7);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x02);

	LCD_WRITE_COMMAND(0xBD);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xBC);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x00);

	LCD_WRITE_COMMAND(0xbf);
	LCD_WRITE_DATA(0xcc);
	LCD_WRITE_DATA(0x10);
	LCD_WRITE_DATA(0x0a);
	LCD_WRITE_DATA(0x0c);
	LCD_WRITE_DATA(0x04);
	LCD_WRITE_DATA(0x03);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);
	LCD_WRITE_DATA(0x00);

// Reverse display
    LCD_WRITE_COMMAND(0xB7);
    LCD_WRITE_DATA(0x50);
    LCD_WRITE_DATA(0x02);
    LCD_WRITE_COMMAND(0xBD);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_COMMAND(0xBC);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
LCD_WRITE_COMMAND(0x20);

    LCD_WRITE_COMMAND(0xB7);
    LCD_WRITE_DATA(0x50);
    LCD_WRITE_DATA(0x02);
    LCD_WRITE_COMMAND(0xBD);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_COMMAND(0xBC);
    LCD_WRITE_DATA(0x01);
    LCD_WRITE_DATA(0x00);
LCD_WRITE_COMMAND(0x36); 
LCD_WRITE_DATA(0x00);

    LCD_WRITE_COMMAND(0xB7);
    LCD_WRITE_DATA(0x50);
    LCD_WRITE_DATA(0x02);
    LCD_WRITE_COMMAND(0xBD);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_COMMAND(0xBC);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
LCD_WRITE_COMMAND(0x11); 

    LCD_WRITE_COMMAND(0xB7);
    LCD_WRITE_DATA(0x50);
    LCD_WRITE_DATA(0x02);
    LCD_WRITE_COMMAND(0xBD);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_COMMAND(0xBC);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x00);
LCD_WRITE_COMMAND(0x29); 

    LCD_WRITE_COMMAND(0xBD);
    LCD_WRITE_DATA(0x11);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_COMMAND(0xBC);
    LCD_WRITE_DATA(0x00);
    LCD_WRITE_DATA(0x94);
    LCD_WRITE_COMMAND(0xBE);
    LCD_WRITE_DATA(0xD0);
    LCD_WRITE_DATA(0x02);
LCD_WRITE_COMMAND(0x2C); 