//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ULREddystoneIDBeacon.h"

@interface ULREddystoneEIDBeacon : ULREddystoneIDBeacon
{
}

+ (id)beaconWithAdvertisementData:(id)arg1 RSSI:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)typeString;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBeaconID:(id)arg1 RSSI:(long long)arg2 transmissionPower:(long long)arg3 timestamp:(id)arg4;

@end
