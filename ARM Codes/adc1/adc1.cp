#line 1 "H:/Electronics/Codes/ARM Codes/adc1/adc1.c"
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

 t = ADC_Read(0);


 t = t * 4.887;
 IntToStr(t,a);
 LCD_Out(1,10,a);
 Delay_ms(500);
#line 36 "H:/Electronics/Codes/ARM Codes/adc1/adc1.c"
 }while(1);
}
