///////////////////////////////////////////////////////////////////////////////
// Untitled2Services.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_Untitled2 = 0x3F000000;
#define SRVNAME_UNTITLED2 "Untitled2"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_Untitled2CModule1 = {0x5da29c80,0xdcd3,0x4524,{0x85,0xd8,0x16,0x7e,0xa5,0x1b,0xb1,0xd1}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_Module1Parameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _Module1Parameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} Module1Parameter, *PModule1Parameter;

typedef struct _Module1Inputs
{
	ULONG Value;
	ULONG Status;
	ULONG Data;
	LONG Q1_position;
	LONG Q1_velocity;
	LONG Q1_torque;
	LONG Q2_position;
	LONG Q2_velocity;
	LONG Q2_torque;
	LONG Q3_position;
	LONG Q3_position2;
	LONG Q3_velocity;
	LONG Q3_torque;
	LONG Q4_position;
	LONG Q4_velocity;
	LONG Q4_torque;
} Module1Inputs, *PModule1Inputs;

typedef struct _Module1Outputs
{
	ULONG Value;
	ULONG Control;
	ULONG Data;
	SHORT Q1_targettorque;
	SHORT Q2_targettorque;
	SHORT Q3_targettorque;
	SHORT Q4_targettorque;
	ULONG TaskCycleTime;
} Module1Outputs, *PModule1Outputs;

#pragma pack(push,1)
typedef struct _Module1ADS_data
{
	struct {
		float PX;
		float PY;
		float PZ;
		float PHI;
		float PSI;
		float FX;
		float FY;
		float FZ;
		float TY;
		float out_torque;
		float out_vel;
	} MotorComm;
	struct {
		float EncoderValue;
	} ArduinoComm;
	struct {
		bool ZeroPos;
		bool LaryngLiftSim;
		bool ChirpSim;
	} ExternalComm;
	struct {
		SHORT Q1_torque;
		SHORT Q2_torque;
		SHORT Q3_torque;
		SHORT Q4_torque;
		LONG Q1_vel;
		LONG Q2_vel;
		LONG Q3_vel;
		LONG Q4_vel;
	} MeasureComm;
} Module1ADS_data, *PModule1ADS_data;
#pragma pack(pop)

typedef struct _Module1Controls
{
	float Q1_realposition;
	float Q1_realvelocity;
	float Q1_offset;
	float Q2_realposition;
	float Q2_realvelocity;
	float Q2_offset;
	float Q3_realposition;
	float Q3_realvelocity;
	float Q3_offset;
	float Q4_realposition;
	float Q4_realvelocity;
	float Q4_offset;
	float Q5_realposition;
	float Q5_offset;
} Module1Controls, *PModule1Controls;

typedef struct _Module1System
{
	bool CALIBRATE;
	bool FORCE_ON;
} Module1System, *PModule1System;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_Module1Inputs 0
#define ADI_Module1Outputs 1
#define ADI_Module1ADS_data 2
#define ADI_Module1Controls 3
#define ADI_Module1System 4
///</AutoGeneratedContent>
