//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class NSNumber, NSString;

@interface GTLRUserLocation_WifiStrengthProto : GTLRObject
{
}

+ (id)wifiScansForWiFiNetworks:(id)arg1;
+ (id)wifiStrengthProtoFromWifiNetwork:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSNumber *frequencyMhz; // @dynamic frequencyMhz;
@property(retain, nonatomic) NSNumber *isConnected; // @dynamic isConnected;
@property(retain, nonatomic) NSNumber *mac; // @dynamic mac;
@property(retain, nonatomic) NSNumber *strength; // @dynamic strength;
@property(copy, nonatomic) NSString *wifiAuthType; // @dynamic wifiAuthType;

@end

