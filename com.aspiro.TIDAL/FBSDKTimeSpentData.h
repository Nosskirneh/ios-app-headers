//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface FBSDKTimeSpentData : NSObject
{
    _Bool _isCurrentlyLoaded;
    _Bool _shouldLogActivateEvent;
    _Bool _shouldLogDeactivateEvent;
    long long _secondsSpentInCurrentSession;
    long long _timeSinceLastSuspend;
    int _numInterruptionsInCurrentSession;
    long long _lastRestoreTime;
    long long _lastSuspendTime;
    NSString *_sessionID;
}

+ (void)registerAutoResetSourceApplication;
+ (void)resetSourceApplication;
+ (id)getSourceApplication;
+ (void)setSourceApplication:(id)arg1 isFromAppLink:(_Bool)arg2;
+ (void)setSourceApplication:(id)arg1 openURL:(id)arg2;
+ (id)singleton;
+ (void)restore:(_Bool)arg1;
+ (void)suspend;
- (void).cxx_destruct;
- (id)appEventsParametersForDeactivate;
- (id)appEventsParametersForActivate;
- (void)instanceRestore:(_Bool)arg1;
- (void)instanceSuspend;

@end

