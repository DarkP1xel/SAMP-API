/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "KeyStuff.h"

CPad *&SAMP::KeyStuff::pInternalKeys = *(CPad **)SAMP_ADDROF(0x1016E8);
CPad *SAMP::KeyStuff::pLocalPlayerKeys = (CPad *)SAMP_ADDROF(0x13D2C0);
CPad *SAMP::KeyStuff::aPlayerKeys = (CPad *)SAMP_ADDROF(0x13D3F8);
bool *&SAMP::KeyStuff::pDriveByLeft = *(bool **)SAMP_ADDROF(0x1016EC);
bool *&SAMP::KeyStuff::pDriveByRight = *(bool **)SAMP_ADDROF(0x1016F0);
bool &SAMP::KeyStuff::bSavedDriveByLeft = *(bool *)SAMP_ADDROF(0x14D0A0);
bool &SAMP::KeyStuff::bSavedDriveByRight = *(bool *)SAMP_ADDROF(0x14D0A1);

void SAMP::KeyStuff::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xA2240))();
}

void SAMP::KeyStuff::ApplyKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA2260))();
}

void SAMP::KeyStuff::UpdateKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA22A0))();
}

void SAMP::KeyStuff::SetKeys(int nPlayerNumber, const CPad *pPad) {
	((void(__cdecl *)(int, const CPad *))SAMP_ADDROF(0xA22E0))(nPlayerNumber, pPad);
}

void SAMP::KeyStuff::ApplyKeys(int nPlayerNumber) {
	((void(__cdecl *)(int))SAMP_ADDROF(0xA2300))(nPlayerNumber);
}

CPad *SAMP::KeyStuff::GetInternalKeys() {
	return ((CPad *(__cdecl *)())SAMP_ADDROF(0xA2350))();
}

CPad *SAMP::KeyStuff::GetKeys(int nPlayerNumber) {
	return ((CPad *(__cdecl *)(int))SAMP_ADDROF(0xA2370))(nPlayerNumber);
}

void SAMP::KeyStuff::ResetKeys(int nPlayerNumber) {
	((void(__cdecl *)(int))SAMP_ADDROF(0xA2380))(nPlayerNumber);
}

void SAMP::KeyStuff::ResetInternalKeys() {
	((void(__cdecl *)())SAMP_ADDROF(0xA23A0))();
}

CPad *SAMP::KeyStuff::GetKeys() {
	return ((::CPad *(__cdecl *)())SAMP_ADDROF(0xA2360))();
}
