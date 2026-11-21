#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include<string.h>

#define HTTP_SEND_DATABUF_SIZE 256

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;

char FileBuff[] = "var WCC:1\r\nvar WAC:0.5\r\nvar WAD:0;\r\n";

typedef struct
{
   uint16_t start_line;
   uint16_t current_line;
   uint16_t current_pos;
   uint32_t last_bytes_to_send;
   uint32_t last_pend_bytes;
    
}sDynamicFile;

sDynamicFile sDynFile;


void MEMCPY(uint8_t *des,uint8_t *src,uint32_t len)
{
	uint32_t loop;
	
	for(loop=0;loop<len;loop++)
	{
	   *des++ = *src++;	
	}
}

void MEMSET(uint8_t *src,uint32_t val,uint32_t len)
{
	uint32_t loop;
	for(loop=0;loop<len;loop++)
	{
	    *src = 0;
		src++;	
	}
	
}

void setFileLineLoc(sDynamicFile *fileInfo,uint8_t *sendbuff)
{
	uint32_t loop=0;
	uint8_t nobline=0;
	uint16_t line_count = fileInfo->start_line;
	
	if(sendbuff!=NULL)
    {
        if(fileInfo->last_pend_bytes>0)
        {
            while(loop<(fileInfo->last_bytes_to_send - fileInfo->last_pend_bytes))
            {    
                nobline++;
                if(sendbuff[loop] == '\n')
                {    
                    nobline = 0;
                    line_count++;
                } 
                loop++;
            }          
            fileInfo->current_line = line_count;
            fileInfo->current_pos  = nobline;    	
        }
    }
}

int sendDynamicFile(sDynamicFile *fileInfo,uint8_t *sendbuff,uint32_t length)
{
    
    char linebuff[100];
    uint16_t bytes_written=0;
    uint8_t line_length;
    uint32_t loop=0;
    uint8_t *pSrc;
    uint16_t line_count = fileInfo->current_line;
    
    bytes_written = 0;
    pSrc = &sendbuff[0];	
    
    
    fileInfo->start_line = fileInfo->current_line;
    
    for(line_count = fileInfo->current_line;line_count<19;line_count++)
    {  
       // memcpy(linebuff,0,100);
        
        switch(line_count)
        {
            case 0:
                line_length = sprintf(linebuff, "var TS=%.2f;\r\n", 1908.79);  // TimeStamp
                break;
                
            case 1:
                line_length = sprintf(linebuff, "var SIMU=false;\r\n");     // Simulation
                break;
                
            case 2:
                line_length = sprintf(linebuff, "var WAA=%d;\r\n", 0);  // Password
                break; 
                
                
            case 3:
                line_length = sprintf(linebuff, "var WAD=%d;\r\n", 0);  // Language
                break;
                
            case 4:
                line_length = sprintf(linebuff, "var WAH=%d;\r\n",2);     // Resolution
                break;
                
            case 5:
                line_length = sprintf(linebuff, "var WCC=%d;\r\n", 5);  // Number of values to be displayes: 1..5
                break;
                
             case 6:
                line_length = sprintf(linebuff, "var W_A=[%0.5f,%0.5f,%0.5f,%0.5f,%0.5f];\r\n", 1.34736,4.77662,4.49145,1.00000,1.00000);  // Current
                break;
                
            case 7:
                line_length = sprintf(linebuff, "var W_B=[%d,%d,%d,%d,%d];\r\n",3,1,2,4,5);     // Selection of the values to be displayes
                break;
                
            case 8:
                line_length = sprintf(linebuff, "var VI=%d;\r\n", 10);  // Chart values
                break;
                
             case 9:
                line_length = sprintf(linebuff, "var V=[\r\n", 1.34736,4.77662,4.49145,1.00000,1.00000);  // Current
                break;
                
            case 10:
                line_length = sprintf(linebuff, "[%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f],\r\n",1.25707,1.20774,1.17118,1.11911,1.20370,1.24744,1.19017,1.17459,1.11712,1.19632);     //
                break;
                
            case 11:
                line_length = sprintf(linebuff, "[%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f],\r\n", 4.69914,4.76794,4.83835,4.88266,4.92142,4.87875,4.88041,4.87458,4.88258,4.92245);  // 
                break;
                
            case 12:
                line_length = sprintf(linebuff, "[%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f,%.5f],\r\n",4.41629,4.38599,4.37154,4.45819,4.36172,4.39747,4.32570,4.37984,4.41944,4.35764);     //
                break;
                
            case 13:
                line_length = sprintf(linebuff, "[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d],\r\n", 1,1,1,1,1,1,0,0,0,0);  // 
                break;
                
            case 14:
                line_length = sprintf(linebuff, "[%d,%d,%d,%d,%d,%d,%d,%d,%d,%d]\r\n", 1,1,1,1,1,1,1,1,1,1);  // 
                break;
                
             case 15:
                line_length = sprintf(linebuff, "];\r\n", 10);  //
                break;
                
            case 16:
                line_length = sprintf(linebuff, "var WSA=%d;\r\n", 0);  // 
                break;
                
             case 17:
                line_length = sprintf(linebuff, "var WSB=%d;\r\n", 0);  // 
                break;
                
             case 18:
                line_length = sprintf(linebuff, "var WSC=%d;\r\n", 0);  // 
                break;
                               
        }
       
    
       
        if(bytes_written + line_length > length)  // 256 -(250+10)
        {
        	MEMCPY(pSrc,linebuff,length - bytes_written);
        	fileInfo->current_pos = length - bytes_written;
        	bytes_written += length - bytes_written;
        //	printf("Line no:%d Line_len:%d Bytes_Written:%d\r\n",line_count,line_length,bytes_written);  
            break;
        }
        
        if(fileInfo->current_pos>0)
        {
            if(sendbuff!=NULL)
            {
                MEMCPY(pSrc,&linebuff[fileInfo->current_pos],line_length - fileInfo->current_pos);
                pSrc += line_length - fileInfo->current_pos; 
            }
            bytes_written += line_length - fileInfo->current_pos;
            fileInfo->current_pos = 0;
				
		}
        else
        {
            if(sendbuff!=NULL)
            {
              memcpy(pSrc,linebuff,line_length);   
              pSrc += line_length;
            }
          bytes_written += line_length;
        }  
		
	//	printf("Line no:%d Line_len:%d Bytes_Written:%d\r\n",line_count,line_length,bytes_written);    
    } 
   
    fileInfo->current_line = line_count;
    fileInfo->last_bytes_to_send = bytes_written;
    fileInfo->last_pend_bytes = 0;
    
    return fileInfo->last_bytes_to_send;
    
}






int main()
{
	int length=0;
	int loop=0;
	char buff[100];
	int Total_file_lenght=0;
	int bytes_to_put=0;
	int total_bytes_send=0;
	
	uint8_t sendFileBuff[HTTP_SEND_DATABUF_SIZE];
	
	sDynFile.start_line =0;
	sDynFile.current_line = 0;
	sDynFile.last_bytes_to_send = 0;
	sDynFile.last_pend_bytes = 0;
	sDynFile.current_pos = 0;
	
	
	Total_file_lenght = sendDynamicFile(&sDynFile,NULL,0xFFFF);
	
	printf("Total file length:%d\r\n",Total_file_lenght);
	
	sDynFile.start_line =0;
	sDynFile.current_line = 0;
	sDynFile.last_bytes_to_send = 0;
	sDynFile.last_pend_bytes = 0;
	sDynFile.current_pos = 0;
	
Read:
	length = sendDynamicFile(&sDynFile,sendFileBuff,HTTP_SEND_DATABUF_SIZE);
	
	printf("\r\nTotal Byte In Buff:%d\r\n",length);
	
	scanf("%d",&bytes_to_put);
	
	
	for(loop=0;loop<bytes_to_put;loop++)
	{
	    printf("%c",sendFileBuff[loop]);	
	}
	
	total_bytes_send += bytes_to_put;
	
	if(total_bytes_send != Total_file_lenght)
	{
		printf("\r\nTotal Byte send:%d\r\n",total_bytes_send);
		 if(bytes_to_put!=length)
		{
			sDynFile.last_pend_bytes = length-bytes_to_put;
			setFileLineLoc(&sDynFile,sendFileBuff);
		}
		goto Read;
	}
	else
	{
		printf("File send!!!");
	}

	return 0;
}


