//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Protobuf/GPBMessage.h>

@class GCKOCEnvironmentScan, NSData, NSString;

@interface GCKOCCreateSessionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *devicePin; // @dynamic devicePin;
@property(nonatomic) int devicePinType; // @dynamic devicePinType;
@property(copy, nonatomic) NSString *droidguardData; // @dynamic droidguardData;
@property(retain, nonatomic) GCKOCEnvironmentScan *environmentScan; // @dynamic environmentScan;
@property(nonatomic) _Bool hasDevicePin; // @dynamic hasDevicePin;
@property(nonatomic) _Bool hasDevicePinType; // @dynamic hasDevicePinType;
@property(nonatomic) _Bool hasDroidguardData; // @dynamic hasDroidguardData;
@property(nonatomic) _Bool hasEnvironmentScan; // @dynamic hasEnvironmentScan;
@property(nonatomic) _Bool hasTlsClientPkHash; // @dynamic hasTlsClientPkHash;
@property(copy, nonatomic) NSData *tlsClientPkHash; // @dynamic tlsClientPkHash;

@end

