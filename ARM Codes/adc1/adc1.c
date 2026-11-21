int t;
char a;
char b;
char lcd[3];

void main()
{
  ADCON1 = 0x08;
  Lcd_Init(&PORTB);
  Lcd_Cmd(LCD_CURSOR_OFF);

  do
  {
    Lcd_Cmd(LCD_CLEAR);
    //Lcd_out(1,1, "Temperature:");
    t = ADC_Read(0);


    t = t * 4.887;
    IntToStr(t,a);
    LCD_Out(1,10,a);
    Delay_ms(500);
    /*a = t%10;
    lcd[2] = a + '0';

    t = t/10;
    a = t%10;
    lcd[1] = a + '0';

    t = t/10;
    a = t%10;
    lcd[0] = a + '0';

    Lcd_out(2,1,lcd);
    Delay_ms(100);*/
  }while(1);
}
