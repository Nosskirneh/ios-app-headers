//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTVideoBaseTracker.h"

@class NSDictionary, NSString, SPSession, SPTNetworkConnectivityController, SPTVideoPlayRange;

@interface SPTEndVideoLogger : SPTVideoBaseTracker
{
    _Bool _paused;
    id <SPTLogCenter> _logCenter;
    SPSession *_loginSession;
    SPTNetworkConnectivityController *_networkConnectivityController;
    NSDictionary *_pendingMessageID;
    id <SPTVideoPlaybackIdentity> _nextIdentity;
    long long _endEventReason;
    NSString *_connectionTypeStart;
    NSString *_connectionTypeEnd;
    SPTVideoPlayRange *_uiLatencyTimeRange;
}

@property(retain, nonatomic) SPTVideoPlayRange *uiLatencyTimeRange; // @synthesize uiLatencyTimeRange=_uiLatencyTimeRange;
@property(nonatomic) NSString *connectionTypeEnd; // @synthesize connectionTypeEnd=_connectionTypeEnd;
@property(nonatomic) NSString *connectionTypeStart; // @synthesize connectionTypeStart=_connectionTypeStart;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) long long endEventReason; // @synthesize endEventReason=_endEventReason;
@property(retain, nonatomic) id <SPTVideoPlaybackIdentity> nextIdentity; // @synthesize nextIdentity=_nextIdentity;
@property(retain, nonatomic) NSDictionary *pendingMessageID; // @synthesize pendingMessageID=_pendingMessageID;
@property(retain, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(nonatomic) __weak SPSession *loginSession; // @synthesize loginSession=_loginSession;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (long long)timeWeightedBitrate;
- (id)audioCodec;
- (id)videoCodec;
- (_Bool)isSystemInitialized;
- (_Bool)incognitoMode;
- (id)streamingRule;
- (id)reasonEnd;
- (_Bool)shuffle;
- (id)reasonStartForIdentity:(id)arg1;
- (id)reasonStart;
- (id)sequenceID;
- (id)sequenceNumber;
- (void)updatePendingMessageWithStatistics:(id)arg1;
- (void)updatePendingMessageAtPosition:(double)arg1;
- (void)updatePendingMessage;
- (void)sendMessage;
- (void)videoPlaybackDidEndAtPosition:(double)arg1 withEndReason:(long long)arg2;
- (void)videoPlaybackRateDidChangeTo:(double)arg1 atPosition:(double)arg2;
- (void)videoPlaybackReadyAtPosition:(double)arg1 duration:(double)arg2 playWhenReady:(_Bool)arg3;
- (void)videoPlaybackWillEndWithNextPlaybackIdentity:(id)arg1;
- (void)videoPlaybackDidCreateSessionWithIdentity:(id)arg1 timeObservable:(id)arg2 inBackground:(_Bool)arg3;
- (void)dealloc;
- (id)initWithLogCenter:(id)arg1 loginSession:(id)arg2 networkConnectivityController:(id)arg3;

@end
