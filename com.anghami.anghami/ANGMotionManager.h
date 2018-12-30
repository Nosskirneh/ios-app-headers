//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionActivity, CMMotionActivityManager, NSDate, NSOperationQueue, NSTimer;

@interface ANGMotionManager : NSObject
{
    CMMotionActivityManager *activityManager;
    CMMotionActivity *lastActivity;
    NSTimer *clearTimer;
    NSDate *lastUpdate;
    NSOperationQueue *activityQueue;
    _Bool isListening;
    _Bool didAnswerForFirstListen;
}

+ (id)stringForConfidence:(long long)arg1;
+ (id)stringForActivity:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastUpdate;
@property(readonly, nonatomic) CMMotionActivity *lastActivity;
@property(readonly, nonatomic) _Bool listening;
- (void)stopListening;
- (void)startListeningAndCheckForStatus:(_Bool)arg1;
- (void)startListening;
- (void)didReceiveNewActivity:(id)arg1;
- (void)stopTimer;
- (void)clearActivity;
- (void)initResetTimer;
- (id)init;

@end

