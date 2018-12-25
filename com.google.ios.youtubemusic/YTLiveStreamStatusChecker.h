//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTPlayerHeartbeatResponseHandlerProtocol-Protocol.h"
#import "YTSingleVideoIsAtLiveHeadSideEffectfulObserver-Protocol.h"

@class NSString, YTIPlayabilityStatus;
@protocol YTLiveStreamStatusCheckerDelegate, YTSingleVideoObservable;

@interface YTLiveStreamStatusChecker : NSObject <YTSingleVideoIsAtLiveHeadSideEffectfulObserver, YTPlayerHeartbeatResponseHandlerProtocol>
{
    CDUnknownBlockType _offlineBlock;
    YTIPlayabilityStatus *_playabilityStatus;
    int _status;
    id <YTSingleVideoObservable> _contentVideoObservable;
    id <YTLiveStreamStatusCheckerDelegate> _delegate;
}

@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) __weak id <YTLiveStreamStatusCheckerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attemptToStopPlayback;
- (void)attemptToSuspendPlayback;
- (void)attemptToTransitionToStreamEndpoint:(id)arg1;
- (void)attemptToReloadLiveStream;
- (void)checkLivestreamPlayability;
- (void)potentiallyMutatedSingleVideo:(id)arg1 isAtLiveHeadDidChange:(_Bool)arg2;
- (void)processPlayabilityStatus:(id)arg1 heartbeatParams:(id)arg2;
- (_Bool)heartbeatShouldRunForPlayabilityStatus:(id)arg1;
- (void)setOfflineBlock:(CDUnknownBlockType)arg1;
- (id)initWithContentVideoObservable:(id)arg1 initialStatus:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
