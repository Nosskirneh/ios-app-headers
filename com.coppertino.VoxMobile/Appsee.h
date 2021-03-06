//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FABKit-Protocol.h"

@class NSString;

@interface Appsee : NSObject <FABKit>
{
}

+ (void)initializeIfNeeded;
+ (id)kitBuildVersion;
+ (id)kitDisplayVersion;
+ (id)bundleIdentifier;
+ (void)registerCrashHandlers;
+ (void)set3rdPartyID:(id)arg1 forSystem:(id)arg2 persistent:(_Bool)arg3;
+ (id)generate3rdPartyID:(id)arg1 persistent:(_Bool)arg2;
+ (_Bool)getOptOutStatus;
+ (void)setOptOutStatus:(_Bool)arg1;
+ (void)setDebugToNSLog:(_Bool)arg1;
+ (void)overlayImage:(id)arg1 inRect:(struct CGRect)arg2;
+ (void)startScreen:(id)arg1;
+ (void)unmarkLayerAsSensitive:(id)arg1 inView:(id)arg2;
+ (void)unmarkViewAsSensitive:(id)arg1;
+ (void)markLayerAsSensitive:(id)arg1 inView:(id)arg2;
+ (void)markViewAsSensitive:(id)arg1;
+ (void)addEvent:(id)arg1 withProperties:(id)arg2;
+ (void)addEvent:(id)arg1;
+ (void)addScreenAction:(id)arg1;
+ (void)setLocationDescription:(id)arg1;
+ (void)setLocation:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4;
+ (void)setUserID:(id)arg1;
+ (void)resume;
+ (void)pause;
+ (void)addInternalDelegate:(id)arg1;
+ (void)setDelegate:(id)arg1;
+ (void)forceNewSession;
+ (void)upload;
+ (void)finishSession:(_Bool)arg1 upload:(_Bool)arg2;
+ (void)stop;
+ (void)appendSDKType:(id)arg1;
+ (void)start:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

