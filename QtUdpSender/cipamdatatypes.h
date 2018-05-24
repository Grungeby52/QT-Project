/*
#   Eretna Technology
#
#   Description:
#       CIPAM modul kartindan alinan veriler icin veri yapisi
*/

#include <QHash>

#ifndef CIPAMDATATYPES_H
#define CIPAMDATATYPES_H
//##############################################################################
//  Ana->Data->Waweform-> Painent
//##############################################################################

//##############################################################################
//  Ana->Data->Waweform veri yapilari
//##############################################################################
typedef struct tagWaveFormData
{
	short int ECG_I;
	short int ECG_II;
	short int ECG_III;
	short int ECG_aVR;
	short int ECG_aVL;
	short int ECG_aVF;
	short int ECG_V1;
	short int ECG_V2;
	short int ECG_V3;
	short int ECG_V4;
	short int ECG_V5;
	short int ECG_V6;
	short int RSP1;
	short int Phasic_BP1;
	short int Phasic_BP2;
	short int Phasic_BP3;
	short int Phasic_BP4;
	short int Mean_BP1;
	short int Mean_BP2;
	short int Mean_BP3;
	short int Mean_BP4;
	short int DPDT1;
	short int DPDT2;
	short int DPDT3;
	short int DPDT4;
	short int UIM1[13];
	short int UIM2[13];
	short int TEMP1;
	short int TEMP2;
	short int TEMP3; // TBODY
	short int TEMP4; // TINJ
	short int SPO2;
	short int NIBP;
	short int EtCO2;
	short int Spare[3];

}TWaveFormData,*PWaveFormData;

//##############################################################################
//  Ana->Data Veri yapisi
//##############################################################################
typedef struct tagMessageData
{
    TWaveFormData WaveFormData ;

	unsigned short int EventFlags;
	// secondStrobe, UIM1_EventFlag, UIM2_EventFlag, Reserved1, Reserved2, Reserved3, Reserved4, ECG_BeatStrobe,
	// IBP4_PulseStrobe, IBP3_PulseStrobe, IBP2_PulseStrobe, IBP1_PulseStrobe, SpO2_PulseStrobe, BreathIndicationFlag,
	// QRSIndicationFlag, PacerDetectionFlag

	unsigned short int MuxID;
	short int MuxData[64];
}TMessageData,*PMessageData;

//##############################################################################
// Ana veri yapisi
//##############################################################################
typedef struct tagHostMessage
{
	quint32 MessageHeader;
	//short MessageHeader[2];
	TMessageData MessageData;
	short int    CheckSum;
}THostMessage,*PHostMessage;

#endif // CIPAMDATATYPES_H
