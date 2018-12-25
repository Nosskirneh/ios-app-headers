//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionActivityManager, ULRMotionActivity;

@interface ULRMotionActivityManager : NSObject
{
    CMMotionActivityManager *_motionManager;
    ULRMotionActivity *_lastUpdateActivity;
    _Bool _updatesRunning;
}

+ (void)setMotionActivityPromptAllowed:(_Bool)arg1;
+ (_Bool)isMotionActivityPromptAllowed;
+ (_Bool)isMotionActivityPromptComplete;
+ (_Bool)motionActivitySupported;
- (void).cxx_destruct;
- (void)saveMotionPromptSuccessful;
- (_Bool)appHasRequisiteMotionAccessDescription;
- (_Bool)canProceedWithMotionActivityAccess;
@property(readonly, nonatomic) ULRMotionActivity *currentActivity;
- (id)queryActivityStartingFromDate:(id)arg1;
- (id)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2;
- (void)startSharedMotionQueue;
- (id)init;

@end
