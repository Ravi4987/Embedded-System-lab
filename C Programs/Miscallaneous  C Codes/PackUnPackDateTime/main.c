#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <dos.h>

#define TIMEBASE1  (600U)
#define TIMEBASE2  (4U)

#define BDate14_1		(3U)
#define BDate15_1		(0x54)
#define BDate15_2		(0x00)
#define BDate15_3		(0x12)

typedef unsigned char uint8_t;
typedef unsigned short int unit16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

typedef struct sDateTimeBits_t
{
   uint32_t second:5;
   uint32_t minute:6;
   uint32_t hour:5;
   uint32_t date:5;
   uint32_t month:4;
   uint32_t year:7;
}sDateTimeBits_t;

typedef struct sRTCDateTime_t
{
	uint8_t 	Hours;
	uint8_t 	Minutes;
	uint8_t 	Seconds;
	uint8_t 	Month;
	uint8_t 	Date;
	uint8_t 	Year;	
}sRTCDateTime_t;

typedef union uDateTimeVar_t
{
   uint32_t DateTime;
   sDateTimeBits_t sDateTime;
}uDateTimeVar_t;

static uint32_t calcTimebase(void)
{
	uint32_t varX;
	uint32_t TimeBaseVal = 0;
	
	uint32_t maxUse;
	uint8_t Val14_1 = BDate14_1;
	uint8_t Val15_1 = BDate15_1;
	uint8_t Val15_2 = BDate15_2;
	uint8_t Val15_3 = BDate15_3;
	
	maxUse = Val14_1;   // Get value of maximum fiber usage

	varX = Val15_2 << 8 | Val15_3;

	if(Val15_1 == 'T')
	{
		TimeBaseVal = (TIMEBASE1 * varX) << 16 |  varX;
	}
	else if(Val15_1 == 't')
	{
		TimeBaseVal = (TIMEBASE2 * varX) << 16 | varX;
	}

   return TimeBaseVal;
}

void unPacktime(uint32_t dateTimeVar,sRTCDateTime_t *dateTime)
{
	uDateTimeVar_t uDateTime;

	uDateTime.DateTime = dateTimeVar;
	
	dateTime->Date  = uDateTime.sDateTime.date;
	dateTime->Month = uDateTime.sDateTime.month;
	dateTime->Year  = uDateTime.sDateTime.year - 20;
	
	dateTime->Hours = uDateTime.sDateTime.hour;
	dateTime->Minutes = uDateTime.sDateTime.minute;
	dateTime->Seconds = uDateTime.sDateTime.second * 2;
	
	printf("Date Time Integer value(HEX):0x%X\t",dateTimeVar);
	printf("Date Time:%u/%u/%u  %u:%u:%u\r\n",uDateTime.sDateTime.date,uDateTime.sDateTime.month,uDateTime.sDateTime.year - 20,	
									uDateTime.sDateTime.hour,uDateTime.sDateTime.minute,uDateTime.sDateTime.second * 2);
}

void packTime(uint8_t *pDateTimeDes,sRTCDateTime_t currDateTime)
{
	uDateTimeVar_t uDateTime;

	uDateTime.sDateTime.second = currDateTime.Seconds/2;
	uDateTime.sDateTime.minute = currDateTime.Minutes;
	uDateTime.sDateTime.hour   = currDateTime.Hours;

	uDateTime.sDateTime.date = currDateTime.Date;
	uDateTime.sDateTime.month = currDateTime.Month;
	uDateTime.sDateTime.year = (2000 + currDateTime.Year) - 1980;

	memcpy(pDateTimeDes,&uDateTime.DateTime,sizeof(sDateTimeBits_t));
}

int32_t DateTimeDiff(sRTCDateTime_t *blockDateTime)
{
  int32_t L,L1;
  time_t t = time(NULL);
  struct tm tm = *localtime(&t);
  
  uint8_t Y2 = blockDateTime->Year;
  uint8_t M2 = blockDateTime->Month;
  uint8_t D2 = blockDateTime->Date;
  uint8_t H2 = blockDateTime->Hours;
  uint8_t N2 = blockDateTime->Minutes;
  uint8_t S2 = blockDateTime->Seconds; 
  
  uint8_t Y1 = (tm.tm_year + 1900) - 2000;
  uint8_t M1 = tm.tm_mon + 1;
  uint8_t D1 = tm.tm_mday;
  uint8_t H1 = tm.tm_hour;
  uint8_t N1 = tm.tm_min;
  uint8_t S1 = tm.tm_sec; 
  
  printf("Block Date and Time:%u/%u/%u %u:%u:%u\r\n",D2,M2,Y2,H2,N2,S2);
  printf("Current Date and Time:%u/%u/%u %u:%u:%u\r\n\n",D1,M1,Y1,H1,N1,S1);
      
    L = 365;
	L = L*(Y1-Y2) + (Y1 / 4) - (Y2 / 4) - (Y1 / 100)+ (Y2 / 100)+ (Y1 / 400) - (Y2 / 400);
	L = L + ((M1*306+5) / 10) - ((M2*306+5) / 10);
	L = L + (D1-1) - (D2-1);                                         // {diff days}
	
	printf("Number of days difference:%d\r\n",L,L * 86400);
	
	if (L > 18250)  L = 18250;
	if (L < -18250) L = L - 18250;                                    //{limit to apprx. +/- 50 years}
	
	L  = L * 86400;                                                   //{days}
	L1 = 3600;
	L1 = L1 * (H1 - H2);                                              //{hours}
	L  = L + L1;
	L  = L + (N1 - N2) * 60;                                          //{minutes}
	L  = L + (S1 - S2);     
      
	printf("Date Time Difference:%d\r\n",L);

  return L;	
}


int main(int argc, char *argv[]) {
uint32_t dateTimeValue;
sRTCDateTime_t currDateTime;
sRTCDateTime_t blockDateTime;
	
	currDateTime.Date = 29;
	currDateTime.Month = 5;
	currDateTime.Year   = 23;
	
	currDateTime.Hours = 10;
	currDateTime.Minutes = 26;
	currDateTime.Seconds  = 22;
	
	packTime((uint8_t *)&dateTimeValue,currDateTime);
	
	printf("Packed Date Time Value:0x%X\n",dateTimeValue);
	
	unPacktime(0x56BD534B,&blockDateTime);
	
	DateTimeDiff(&blockDateTime);
	
	printf("Timebase Value:%u\r\n",calcTimebase());
	
	
	return 0;
}
