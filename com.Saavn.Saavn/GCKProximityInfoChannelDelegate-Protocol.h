//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKProximityInfoChannel, NSString;

@protocol GCKProximityInfoChannelDelegate <NSObject>
- (void)proximityInfoChannel:(GCKProximityInfoChannel *)arg1 didReceiveDeviceInfoWithDeviceID:(NSString *)arg2 friendlyName:(NSString *)arg3 forBSSID:(NSString *)arg4;
@end
