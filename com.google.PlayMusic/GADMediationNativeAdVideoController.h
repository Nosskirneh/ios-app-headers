//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOVideoControlling-Protocol.h"

@class NSString;
@protocol NSObject;

@interface GADMediationNativeAdVideoController : NSObject <GADOVideoControlling>
{
    id <NSObject> _mediatedNativeAdDidPlayVideoObserver;
    id <NSObject> _mediatedNativeAdDidPauseVideoObserver;
    id <NSObject> _mediatedNativeAdDidEndVideoPlaybackObserver;
    _Bool _hasVideoContent;
    long long _videoPlaybackState;
}

@property(nonatomic) long long videoPlaybackState; // @synthesize videoPlaybackState=_videoPlaybackState;
@property(nonatomic) _Bool hasVideoContent; // @synthesize hasVideoContent=_hasVideoContent;
- (void).cxx_destruct;
- (void)stopObservingMediatedNativeAd;
- (void)observeMediatedNativeAd:(id)arg1;
- (_Bool)clickToExpandEnabled;
- (_Bool)customControlsEnabled;
- (double)aspectRatio;
- (void)setInitialStateWithVideoOptions:(id)arg1;
- (void)pause;
- (void)play;
- (void)setMute:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMediatedUnifiedNativeAd:(id)arg1;
- (id)initWithMediatedNativeContentAd:(id)arg1;
- (id)initWithMediatedNativeAppInstallAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
