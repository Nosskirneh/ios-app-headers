//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface AFNetworkActivityIndicatorManager : NSObject
{
    _Bool _enabled;
    _Bool _networkActivityIndicatorVisible;
    double _activationDelay;
    double _completionDelay;
    long long _activityCount;
    NSTimer *_activationDelayTimer;
    NSTimer *_completionDelayTimer;
    CDUnknownBlockType _networkActivityActionBlock;
    long long _currentState;
}

+ (id)sharedManager;
@property(nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property(copy, nonatomic) CDUnknownBlockType networkActivityActionBlock; // @synthesize networkActivityActionBlock=_networkActivityActionBlock;
@property(retain, nonatomic) NSTimer *completionDelayTimer; // @synthesize completionDelayTimer=_completionDelayTimer;
@property(retain, nonatomic) NSTimer *activationDelayTimer; // @synthesize activationDelayTimer=_activationDelayTimer;
@property(nonatomic) long long activityCount; // @synthesize activityCount=_activityCount;
@property(nonatomic) double completionDelay; // @synthesize completionDelay=_completionDelay;
@property(nonatomic) double activationDelay; // @synthesize activationDelay=_activationDelay;
@property(nonatomic, getter=isNetworkActivityIndicatorVisible) _Bool networkActivityIndicatorVisible; // @synthesize networkActivityIndicatorVisible=_networkActivityIndicatorVisible;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)cancelCompletionDelayTimer;
- (void)cancelActivationDelayTimer;
- (void)completionDelayTimerFired;
- (void)startCompletionDelayTimer;
- (void)activationDelayTimerFired;
- (void)startActivationDelayTimer;
- (void)updateCurrentStateForNetworkActivityChange;
- (void)networkRequestDidFinish:(id)arg1;
- (void)networkRequestDidStart:(id)arg1;
- (void)decrementActivityCount;
- (void)incrementActivityCount;
@property(readonly, nonatomic, getter=isNetworkActivityOccurring) _Bool networkActivityOccurring;
- (void)setNetworkingActivityActionWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

