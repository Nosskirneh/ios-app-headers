//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKDBDiscoveryInfo.h"

@class GCKDBDeviceInfo, NSDate, NSSet, NSString;

@interface GCKDBBluetoothDiscoveryInfo : GCKDBDiscoveryInfo
{
}

+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) GCKDBDeviceInfo *deviceInfo; // @dynamic deviceInfo;
@property(copy, nonatomic) NSString *guestModePIN; // @dynamic guestModePIN;
@property(copy, nonatomic) NSString *hardwareID; // @dynamic hardwareID;
@property(nonatomic) short ipAddressLowBytes; // @dynamic ipAddressLowBytes;
@property(retain, nonatomic) NSSet *probedNetworks; // @dynamic probedNetworks;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(copy, nonatomic) NSDate *tokenExpirationTime; // @dynamic tokenExpirationTime;

@end

