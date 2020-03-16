#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int status;
unsigned long MessageCounter = 0;

char terminator = '~';

String FullString = "#";
String SticksMessageHeader = "AB56FE21,";
// String Message2Header = "CD34DC43,";
// String Message3Header = "EF12BA65,";
String GeneralMessageHeader = "AF61BE52,";
String Message = "";
String GeneralMessage = "#";
String TextFromPort = "";

char ThrottleString[5];
char LeftRightString[5];

void SendMessageRF(String MHeader, String MBody) 
{
  Message = "";
  MessageCounter++;
  MBody.concat("~");
  int MessageSize = MBody.length();

  Message.concat(MHeader);
  Message.concat(MessageSize);
  Message.concat(",");
  Message.concat(MessageCounter);
  Message.concat(MBody);
  //Serial.println(Message);
  //Serial1.println(Message);
  FullString = "#";
  GeneralMessage = "#";
  MHeader = "";
  MBody = "";
}
