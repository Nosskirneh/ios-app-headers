//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRTrace;

@interface FPRAppActivityTracker : NSObject
{
    long long _applicationState;
    FIRTrace *_foregroundSessionTrace;
    FIRTrace *_backgroundSessionTrace;
    FIRTrace *_appStartTrace;
}

+ (id)sharedInstance;
+ (void)windowDidBecomeVisible:(id)arg1;
+ (void)load;
@property(retain, nonatomic) FIRTrace *appStartTrace; // @synthesize appStartTrace=_appStartTrace;
@property(retain, nonatomic) FIRTrace *backgroundSessionTrace; // @synthesize backgroundSessionTrace=_backgroundSessionTrace;
@property(retain, nonatomic) FIRTrace *foregroundSessionTrace; // @synthesize foregroundSessionTrace=_foregroundSessionTrace;
@property(nonatomic) long long applicationState; // @synthesize applicationState=_applicationState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)appWillResignActiveNotification:(id)arg1;
- (void)appDidBecomeActiveNotification:(id)arg1;
@property(readonly, nonatomic) FIRTrace *activeTrace;
- (void)startAppActivityTracking;
- (id)initAppActivityTracker;

@end

