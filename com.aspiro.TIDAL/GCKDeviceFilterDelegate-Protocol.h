//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKDevice, GCKError;

@protocol GCKDeviceFilterDelegate <NSObject>
- (void)filteringFailedForDevice:(GCKDevice *)arg1 withError:(GCKError *)arg2;
- (void)filteringFinishedForDevice:(GCKDevice *)arg1 withResult:(_Bool)arg2 deviceChanged:(_Bool)arg3 deviceIDChanged:(_Bool)arg4;
@end

