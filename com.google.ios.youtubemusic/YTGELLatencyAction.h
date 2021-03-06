//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTLegacyCSIAction-Protocol.h"

@class GIMMe, NSMutableArray, NSMutableSet, NSString, YTILatencyActionInfo;

@interface YTGELLatencyAction : NSObject <YTLegacyCSIAction>
{
    int _actionType;
    YTILatencyActionInfo *_actionInfo;
    double _lastActivityTime;
    _Bool _stopped;
    NSString *_actionName;
    NSMutableSet *_startedTicks;
    NSMutableArray *_latencyEvents;
    NSString *_clientActionNonce;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateLastActivityTime;
- (double)lastActivityTime;
- (void)setUserAuthenticated:(_Bool)arg1;
- (_Bool)stopped;
- (void)stopAction;
- (void)report;
- (_Bool)endOngoingTickVariable:(id)arg1;
- (void)startTickVariable:(id)arg1;
@property(copy, nonatomic) NSString *actionName;
- (id)latencyEvents;
- (id)latencyActionInfo;
- (id)initWithActionType:(int)arg1 actionName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

