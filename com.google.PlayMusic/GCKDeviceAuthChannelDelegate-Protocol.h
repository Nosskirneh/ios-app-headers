//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKDeviceAuthChannel, NSError;

@protocol GCKDeviceAuthChannelDelegate <NSObject>
- (void)deviceAuthChannel:(GCKDeviceAuthChannel *)arg1 didFailToAuthenticateWithError:(NSError *)arg2;
- (void)deviceAuthChannelDidAuthenticate:(GCKDeviceAuthChannel *)arg1;
@end
