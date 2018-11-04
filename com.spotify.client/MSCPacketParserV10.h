//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSCPacketParserBase.h"

@class MSCNativePacketParserV10;

@interface MSCPacketParserV10 : MSCPacketParserBase
{
    MSCNativePacketParserV10 *nativePacketParser;
}

- (void).cxx_destruct;
- (void)onReceivePacketPing_IAC_10:(id)arg1;
- (void)onReceivePacketRPCCallResponse_IAC_10:(id)arg1;
- (void)onReceivePacketRPCCall_IAC_10:(id)arg1;
- (void)onReceivePacketCustomData_IAC_10:(id)arg1;
- (void)onReceivePacketCustomDataDeprecated_IAC_10:(id)arg1;
- (void)onReceivePacketVoiceSessionStatus_IAC_10:(id)arg1;
- (void)onReceivePacketVoiceSessionRequest_IAC_10:(id)arg1;
- (void)onReceivePacketVoiceSupportInfo_IAC_10:(id)arg1;
- (void)onReceivePacketAudioTypeResult_IAC_10:(id)arg1;
- (void)onReceivePacketAudioTypeCommand_IAC_10:(id)arg1;
- (void)onReceivePacketVehicleData_IAC_10:(id)arg1;
- (void)onReceivePacketNavigateTo_IAC_10:(id)arg1;
- (void)onReceivePacketPhoneCallStatusResponse_IAC_10:(id)arg1;
- (void)onReceivePacketInitiatePhoneCall_IAC_10:(id)arg1;
- (void)onReceivePacketClientState_IAC_10:(id)arg1;
- (void)onReceivePacketTouchEvent_IAC_10:(id)arg1;
- (void)onReceivePacketSoftkeyEvent_IAC_10:(id)arg1;
- (void)onReceivePacketFramebufferUpdate_IAC_10:(id)arg1;
- (void)onReceivePacketFramebufferUpdateAcknowledge_IAC_10:(id)arg1;
- (void)onReceivePacketFrameSizeAcknowledge_IAC_10:(id)arg1;
- (void)onReceivePacketSetFrameSize_IAC_10:(id)arg1;
- (void)onReceivePacketFramePropertiesAcknowledge_IAC_10:(id)arg1;
- (void)onReceivePacketSetFrameProperties_IAC_10:(id)arg1;
- (void)onReceivePacketInitDoneClient_IAC_10:(id)arg1;
- (void)onReceivePacketInitDoneServer_IAC_10:(id)arg1;
- (void)onReceivePacketInitAcknowledge_IAC_10:(id)arg1;
- (void)onReceivePacketInit_IAC_10:(id)arg1;
- (void)onReceivePacketHandshakeAcknowledge_IAC_10:(id)arg1;
- (void)onReceivePacketHandshake_IAC_10:(id)arg1;
- (id)stringWithString_IAC_10:(id)arg1;
- (unsigned char)parsePackets:(id)arg1;
- (id)init;

@end

