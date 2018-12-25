//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPClock-Protocol.h"

@class NSString;

@interface GIPClock : NSObject <GIPClock>
{
    long long _cachedBootTimeMilliseconds;
}

+ (id)systemClock;
- (void)handleSignificantTimeChange:(id)arg1;
- (long long)uptimeMilliseconds;
- (long long)bootTimeMilliseconds;
- (long long)currentTimeMilliseconds;
- (void)scheduleAfterTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)now;
- (double)elapsedTimeSince:(id)arg1;
- (void)dealloc;
- (id)initPrivate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

