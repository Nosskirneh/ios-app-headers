//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTGaiaDevice;

@protocol SPTGaiaDeviceDelegate <NSObject>
- (void)device:(SPTGaiaDevice *)arg1 volumeChanged:(float)arg2;
- (void)device:(SPTGaiaDevice *)arg1 reportedError:(NSError *)arg2;
@end

