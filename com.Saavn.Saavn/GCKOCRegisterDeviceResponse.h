//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKOCAudioPinData, GCKPB_PBMutableArray, NSString;

@interface GCKOCRegisterDeviceResponse : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKOCAudioPinData *audioPinData; // @dynamic audioPinData;
@property(retain, nonatomic) GCKPB_PBMutableArray *bleTokensArray; // @dynamic bleTokensArray;
@property(nonatomic) _Bool hasAudioPinData; // @dynamic hasAudioPinData;
@property(nonatomic) _Bool hasBleTokensArray; // @dynamic hasBleTokensArray;
@property(nonatomic) _Bool hasPin; // @dynamic hasPin;
@property(nonatomic) _Bool hasRegistrationKey; // @dynamic hasRegistrationKey;
@property(retain, nonatomic) NSString *pin; // @dynamic pin;
@property(retain, nonatomic) NSString *registrationKey; // @dynamic registrationKey;

@end
