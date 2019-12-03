//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNInternalNativeAd, GADNMediatedIntermission, GADNObserverCollection, UIView;
@protocol OS_dispatch_queue;

@interface GADNMediatedNativeAdMonitor : NSObject
{
    id _mediatedNativeAd;
    GADNInternalNativeAd *_internalNativeAd;
    GADNObserverCollection *_observers;
    NSObject<OS_dispatch_queue> *_lockQueue;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    UIView *_trackedView;
    GADNMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (id)internalVideoController;
- (void)handleMediatedNativeAdDidEndVideoPlayback;
- (void)handleMediatedNativeAdDidPauseVideo;
- (void)handleMediatedNativeAdDidPlayVideo;
- (void)handleUntrackViewNotification:(id)arg1;
- (void)handleTrackViewNotification:(id)arg1;
- (void)handleWillLeaveApplicationEvent;
- (void)handleDidDismissScreenEvent;
- (void)handleWillDismissScreenEvent;
- (void)handleWillPresentScreenEvent;
- (void)handleThirdPartyClickEvent;
- (void)handleFirstPartyClickEvent:(id)arg1;
- (void)handleThirdParyImpressionEvent;
- (void)handleFirstPartyImpressionEvent;
- (void)dealloc;
- (id)initWithInternalNativeAd:(id)arg1 mediatedNativeAd:(id)arg2 adapterHandlesImpressions:(_Bool)arg3 adapterHandlesClicks:(_Bool)arg4;

@end
