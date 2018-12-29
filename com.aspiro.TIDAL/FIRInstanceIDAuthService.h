//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FIRInstanceIDCheckinPreferences, FIRInstanceIDCheckinService, FIRInstanceIDStore, NSMutableArray, NSTimer;

@interface FIRInstanceIDAuthService : NSObject
{
    _Bool _isCheckinInProgress;
    int _checkinRetryCount;
    FIRInstanceIDStore *_store;
    FIRInstanceIDCheckinService *_checkinService;
    FIRInstanceIDCheckinPreferences *_checkinPreferences;
    NSMutableArray *_checkinHandlers;
    NSTimer *_scheduledCheckinTimer;
}

@property int checkinRetryCount; // @synthesize checkinRetryCount=_checkinRetryCount;
@property(retain) NSTimer *scheduledCheckinTimer; // @synthesize scheduledCheckinTimer=_scheduledCheckinTimer;
@property _Bool isCheckinInProgress; // @synthesize isCheckinInProgress=_isCheckinInProgress;
@property(readonly, nonatomic) NSMutableArray *checkinHandlers; // @synthesize checkinHandlers=_checkinHandlers;
@property(retain, nonatomic) FIRInstanceIDCheckinPreferences *checkinPreferences; // @synthesize checkinPreferences=_checkinPreferences;
@property(retain, nonatomic) FIRInstanceIDCheckinService *checkinService; // @synthesize checkinService=_checkinService;
@property(retain, nonatomic) FIRInstanceIDStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (_Bool)cachedCheckinMatchesCheckin:(id)arg1;
- (void)notifyCheckinHandlersWithCheckin:(id)arg1 error:(id)arg2;
- (void)resetCheckin:(id *)arg1;
- (void)stopCheckinRequest;
- (void)fetchCheckinInfoWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasValidCheckinInfo;
- (long long)calculateNextCheckinRetryIntervalInSeconds;
- (void)performScheduledCheckin;
- (void)onScheduledCheckinTimerFired:(id)arg1;
- (void)clearScheduledCheckinTimer;
- (void)startCheckinTimerWithDuration:(double)arg1;
- (void)scheduleCheckin:(_Bool)arg1;
- (id)initWithStore:(id)arg1;
- (void)dealloc;
- (id)initWithCheckinService:(id)arg1 store:(id)arg2;

@end

