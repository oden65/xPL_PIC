/**************************************************************
 * HTTPPrint.h
 * Provides callback headers and resolution for user's custom
 * HTTP Application.
 * 
 * This file is automatically generated by the MPFS Utility
 * ALL MODIFICATIONS WILL BE OVERWRITTEN BY THE MPFS GENERATOR
 **************************************************************/

#ifndef __HTTPPRINT_H
#define __HTTPPRINT_H

#include "TCPIP Stack/TCPIP.h"

#if defined(STACK_USE_HTTP2_SERVER)

extern HTTP_CONN curHTTP;
extern HTTP_STUB httpStubs[MAX_HTTP_CONNECTIONS];
extern BYTE curHTTPID;

void HTTPPrint(DWORD callbackID);
void HTTPPrint_AlarmState(void);
void HTTPPrint_TypeList(void);
void HTTPPrint_AlarmTypeList(void);
void HTTPPrint_InstanceName(void);
void HTTPPrint_HeartBeatTime(void);
void HTTPPrint_ZoneCount(void);
void HTTPPrint_ZonesBypassed(void);
void HTTPPrint_ZonesIsolated(void);
void HTTPPrint_ZonesTriggered(void);
void HTTPPrint_ZonesArmed(void);
void HTTPPrint_ZonesAlarmed(void);
void HTTPPrint_ZonesType(void);
void HTTPPrint_ZonesAlarmType(void);
void HTTPPrint_ZonesAreaList(void);
void HTTPPrint_ZonesEntry(void);
void HTTPPrint_ZonesNO(void);
void HTTPPrint_AreaCount(void);
void HTTPPrint_AreasBypassed(void);
void HTTPPrint_AreasIsolated(void);
void HTTPPrint_AreasTriggered(void);
void HTTPPrint_AreasArmed(void);
void HTTPPrint_AreasAlarmed(void);
void HTTPPrint_config_hostname(void);
void HTTPPrint_config_ip(void);
void HTTPPrint_config_gw(void);
void HTTPPrint_config_subnet(void);
void HTTPPrint_config_dns1(void);
void HTTPPrint_config_dns2(void);
void HTTPPrint_reboot(void);
void HTTPPrint_rebootaddr(void);
void HTTPPrint_ExitDelay(void);
void HTTPPrint_EntryDelay(void);
void HTTPPrint_Alarming24Duration(void);
void HTTPPrint_SirenDelay24h(void);
void HTTPPrint_AlarmingDuration(void);
void HTTPPrint_SirenDelay(void);
void HTTPPrint_UserName(WORD);
void HTTPPrint_UserPassword(WORD);
void HTTPPrint_AreasAlarmType(void);
void HTTPPrint_AreaDesc(WORD);
void HTTPPrint_ZoneDesc(WORD);
void HTTPPrint_RejectPassword(void);
void HTTPPrint_SMTP_To(void);
void HTTPPrint_SMTP_Server(void);
void HTTPPrint_SMTP_User(void);
void HTTPPrint_SMTP_Password(void);
void HTTPPrint_SMTP_Port(void);
void HTTPPrint_SMTP_Active(void);
void HTTPPrint_SMTP_OnlyInitalAlarm(void);
void HTTPPrint_SMTP_ArmDisarm(void);
void HTTPPrint_VoltageSupply(void);
void HTTPPrint_VoltageBattery(void);
void HTTPPrint_BatteryStatus(void);
void HTTPPrint_ZonesTampered(void);
void HTTPPrint_AreaTampered(void);
void HTTPPrint_PrintEEProm(WORD);
void HTTPPrint_NTPLastUpdate(void);
void HTTPPrint_CurrentEPOC(void);
void HTTPPrint_NTPServer(void);
void HTTPPrint_AES_Active(void);
void HTTPPrint_EOLValue(WORD);
void HTTPPrint_SMTPTestOutput(void);
void HTTPPrint_SNTPTestOutput(void);

void HTTPPrint(DWORD callbackID)
{
	switch(callbackID)
	{
        case 0x00000000:
			HTTPIncFile((ROM BYTE*)"header.inc");
			break;
        case 0x00000001:
			HTTPPrint_AlarmState();
			break;
        case 0x00000002:
			HTTPPrint_TypeList();
			break;
        case 0x00000003:
			HTTPPrint_AlarmTypeList();
			break;
        case 0x00000004:
			HTTPPrint_InstanceName();
			break;
        case 0x00000005:
			HTTPPrint_HeartBeatTime();
			break;
        case 0x00000006:
			HTTPPrint_ZoneCount();
			break;
        case 0x00000007:
			HTTPPrint_ZonesBypassed();
			break;
        case 0x00000008:
			HTTPPrint_ZonesIsolated();
			break;
        case 0x00000009:
			HTTPPrint_ZonesTriggered();
			break;
        case 0x0000000a:
			HTTPPrint_ZonesArmed();
			break;
        case 0x0000000b:
			HTTPPrint_ZonesAlarmed();
			break;
        case 0x0000000c:
			HTTPPrint_ZonesType();
			break;
        case 0x0000000d:
			HTTPPrint_ZonesAlarmType();
			break;
        case 0x0000000e:
			HTTPPrint_ZonesAreaList();
			break;
        case 0x0000000f:
			HTTPPrint_ZonesEntry();
			break;
        case 0x00000010:
			HTTPPrint_ZonesNO();
			break;
        case 0x00000012:
			HTTPPrint_AreaCount();
			break;
        case 0x00000013:
			HTTPPrint_AreasBypassed();
			break;
        case 0x00000014:
			HTTPPrint_AreasIsolated();
			break;
        case 0x00000015:
			HTTPPrint_AreasTriggered();
			break;
        case 0x00000016:
			HTTPPrint_AreasArmed();
			break;
        case 0x00000017:
			HTTPPrint_AreasAlarmed();
			break;
        case 0x00000018:
			HTTPIncFile((ROM BYTE*)"footer.inc");
			break;
        case 0x0000001a:
			HTTPPrint_config_hostname();
			break;
        case 0x0000001c:
			HTTPPrint_config_ip();
			break;
        case 0x0000001d:
			HTTPPrint_config_gw();
			break;
        case 0x0000001e:
			HTTPPrint_config_subnet();
			break;
        case 0x0000001f:
			HTTPPrint_config_dns1();
			break;
        case 0x00000020:
			HTTPPrint_config_dns2();
			break;
        case 0x0000002b:
			HTTPPrint_reboot();
			break;
        case 0x0000002c:
			HTTPPrint_rebootaddr();
			break;
        case 0x0000002e:
			HTTPPrint_ExitDelay();
			break;
        case 0x0000002f:
			HTTPPrint_EntryDelay();
			break;
        case 0x00000030:
			HTTPPrint_Alarming24Duration();
			break;
        case 0x00000031:
			HTTPPrint_SirenDelay24h();
			break;
        case 0x00000032:
			HTTPPrint_AlarmingDuration();
			break;
        case 0x00000033:
			HTTPPrint_SirenDelay();
			break;
        case 0x00000034:
			HTTPPrint_UserName(0);
			break;
        case 0x00000035:
			HTTPPrint_UserPassword(0);
			break;
        case 0x00000036:
			HTTPPrint_UserName(1);
			break;
        case 0x00000037:
			HTTPPrint_UserPassword(1);
			break;
        case 0x00000038:
			HTTPPrint_UserName(2);
			break;
        case 0x00000039:
			HTTPPrint_UserPassword(2);
			break;
        case 0x0000003a:
			HTTPPrint_UserName(3);
			break;
        case 0x0000003b:
			HTTPPrint_UserPassword(3);
			break;
        case 0x0000003c:
			HTTPPrint_UserName(4);
			break;
        case 0x0000003d:
			HTTPPrint_UserPassword(4);
			break;
        case 0x00000044:
			HTTPPrint_AreasAlarmType();
			break;
        case 0x00000045:
			HTTPPrint_AreaDesc(0);
			break;
        case 0x00000046:
			HTTPPrint_AreaDesc(1);
			break;
        case 0x00000047:
			HTTPPrint_AreaDesc(2);
			break;
        case 0x00000048:
			HTTPPrint_AreaDesc(3);
			break;
        case 0x00000049:
			HTTPPrint_AreaDesc(4);
			break;
        case 0x0000004a:
			HTTPPrint_AreaDesc(5);
			break;
        case 0x0000004b:
			HTTPPrint_AreaDesc(6);
			break;
        case 0x0000004c:
			HTTPPrint_AreaDesc(7);
			break;
        case 0x0000004d:
			HTTPPrint_ZoneDesc(0);
			break;
        case 0x0000004e:
			HTTPPrint_ZoneDesc(1);
			break;
        case 0x0000004f:
			HTTPPrint_ZoneDesc(2);
			break;
        case 0x00000050:
			HTTPPrint_ZoneDesc(3);
			break;
        case 0x00000051:
			HTTPPrint_ZoneDesc(4);
			break;
        case 0x00000052:
			HTTPPrint_ZoneDesc(5);
			break;
        case 0x00000053:
			HTTPPrint_ZoneDesc(6);
			break;
        case 0x00000054:
			HTTPPrint_ZoneDesc(7);
			break;
        case 0x00000055:
			HTTPPrint_ZoneDesc(8);
			break;
        case 0x00000056:
			HTTPPrint_ZoneDesc(9);
			break;
        case 0x00000057:
			HTTPPrint_ZoneDesc(10);
			break;
        case 0x00000058:
			HTTPPrint_ZoneDesc(11);
			break;
        case 0x00000059:
			HTTPPrint_RejectPassword();
			break;
        case 0x0000005a:
			HTTPPrint_SMTP_To();
			break;
        case 0x0000005b:
			HTTPPrint_SMTP_Server();
			break;
        case 0x0000005c:
			HTTPPrint_SMTP_User();
			break;
        case 0x0000005d:
			HTTPPrint_SMTP_Password();
			break;
        case 0x0000005e:
			HTTPPrint_SMTP_Port();
			break;
        case 0x00000062:
			HTTPPrint_SMTP_Active();
			break;
        case 0x00000063:
			HTTPPrint_SMTP_OnlyInitalAlarm();
			break;
        case 0x00000064:
			HTTPPrint_SMTP_ArmDisarm();
			break;
        case 0x00000065:
			HTTPPrint_VoltageSupply();
			break;
        case 0x00000066:
			HTTPPrint_VoltageBattery();
			break;
        case 0x00000067:
			HTTPPrint_BatteryStatus();
			break;
        case 0x00000068:
			HTTPPrint_ZonesTampered();
			break;
        case 0x00000069:
			HTTPPrint_AreaTampered();
			break;
        case 0x0000006a:
			HTTPPrint_ZoneDesc(12);
			break;
        case 0x0000006b:
			HTTPPrint_ZoneDesc(13);
			break;
        case 0x0000006c:
			HTTPPrint_ZoneDesc(14);
			break;
        case 0x0000006d:
			HTTPPrint_ZoneDesc(15);
			break;
        case 0x0000006e:
			HTTPPrint_ZoneDesc(16);
			break;
        case 0x0000006f:
			HTTPPrint_ZoneDesc(17);
			break;
        case 0x00000070:
			HTTPPrint_ZoneDesc(18);
			break;
        case 0x00000071:
			HTTPPrint_ZoneDesc(19);
			break;
        case 0x00000072:
			HTTPPrint_PrintEEProm(0);
			break;
        case 0x00000073:
			HTTPPrint_PrintEEProm(50);
			break;
        case 0x00000074:
			HTTPPrint_PrintEEProm(100);
			break;
        case 0x00000075:
			HTTPPrint_PrintEEProm(150);
			break;
        case 0x00000076:
			HTTPPrint_PrintEEProm(200);
			break;
        case 0x00000077:
			HTTPPrint_PrintEEProm(250);
			break;
        case 0x00000078:
			HTTPPrint_PrintEEProm(300);
			break;
        case 0x00000079:
			HTTPPrint_PrintEEProm(350);
			break;
        case 0x0000007a:
			HTTPPrint_PrintEEProm(400);
			break;
        case 0x0000007b:
			HTTPPrint_PrintEEProm(450);
			break;
        case 0x0000007c:
			HTTPPrint_PrintEEProm(500);
			break;
        case 0x0000007d:
			HTTPPrint_PrintEEProm(550);
			break;
        case 0x0000007e:
			HTTPPrint_PrintEEProm(600);
			break;
        case 0x0000007f:
			HTTPPrint_PrintEEProm(650);
			break;
        case 0x00000080:
			HTTPPrint_PrintEEProm(700);
			break;
        case 0x00000081:
			HTTPPrint_PrintEEProm(750);
			break;
        case 0x00000082:
			HTTPPrint_PrintEEProm(800);
			break;
        case 0x00000083:
			HTTPPrint_PrintEEProm(850);
			break;
        case 0x00000084:
			HTTPPrint_PrintEEProm(900);
			break;
        case 0x00000085:
			HTTPPrint_PrintEEProm(950);
			break;
        case 0x00000086:
			HTTPPrint_PrintEEProm(1000);
			break;
        case 0x00000087:
			HTTPPrint_ZoneDesc(20);
			break;
        case 0x00000088:
			HTTPPrint_ZoneDesc(21);
			break;
        case 0x00000089:
			HTTPPrint_ZoneDesc(22);
			break;
        case 0x0000008a:
			HTTPPrint_ZoneDesc(23);
			break;
        case 0x0000008b:
			HTTPPrint_NTPLastUpdate();
			break;
        case 0x0000008c:
			HTTPPrint_CurrentEPOC();
			break;
        case 0x0000008d:
			HTTPPrint_NTPServer();
			break;
        case 0x0000008e:
			HTTPPrint_AES_Active();
			break;
        case 0x0000008f:
			HTTPPrint_EOLValue(0);
			break;
        case 0x00000090:
			HTTPPrint_EOLValue(1);
			break;
        case 0x00000091:
			HTTPPrint_EOLValue(2);
			break;
        case 0x00000092:
			HTTPPrint_EOLValue(3);
			break;
        case 0x00000093:
			HTTPPrint_EOLValue(4);
			break;
        case 0x00000094:
			HTTPPrint_EOLValue(5);
			break;
        case 0x00000095:
			HTTPPrint_EOLValue(6);
			break;
        case 0x00000096:
			HTTPPrint_EOLValue(7);
			break;
        case 0x00000097:
			HTTPPrint_EOLValue(8);
			break;
        case 0x00000098:
			HTTPPrint_EOLValue(9);
			break;
        case 0x00000099:
			HTTPPrint_EOLValue(10);
			break;
        case 0x0000009a:
			HTTPPrint_EOLValue(11);
			break;
        case 0x0000009b:
			HTTPPrint_EOLValue(12);
			break;
        case 0x0000009c:
			HTTPPrint_EOLValue(13);
			break;
        case 0x0000009d:
			HTTPPrint_EOLValue(14);
			break;
        case 0x0000009e:
			HTTPPrint_EOLValue(15);
			break;
        case 0x0000009f:
			HTTPPrint_EOLValue(16);
			break;
        case 0x000000a0:
			HTTPPrint_EOLValue(17);
			break;
        case 0x000000a1:
			HTTPPrint_EOLValue(18);
			break;
        case 0x000000a2:
			HTTPPrint_EOLValue(19);
			break;
        case 0x000000a3:
			HTTPPrint_EOLValue(20);
			break;
        case 0x000000a4:
			HTTPPrint_EOLValue(21);
			break;
        case 0x000000a5:
			HTTPPrint_EOLValue(22);
			break;
        case 0x000000a6:
			HTTPPrint_EOLValue(23);
			break;
        case 0x000000a7:
			HTTPPrint_SMTPTestOutput();
			break;
        case 0x000000a8:
			HTTPPrint_SNTPTestOutput();
			break;
		default:
			// Output notification for undefined values
			TCPPutROMArray(sktHTTP, (ROM BYTE*)"!DEF", 4);
	}

	return;
}

void HTTPPrint_(void)
{
	TCPPut(sktHTTP, '~');
	return;
}

#endif

#endif
