//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol GPMPlayerItem, OS_dispatch_queue;

@protocol GPMAudioPlayerAsyncReaderFactory <NSObject>
- (void)createAsyncReaderFromPlayerItem:(id <GPMPlayerItem>)arg1 startTime:(double)arg2 callback:(void (^)(id <AsyncReader>, NSError *))arg3 callbackQueue:(NSObject<OS_dispatch_queue> *)arg4;
@end

