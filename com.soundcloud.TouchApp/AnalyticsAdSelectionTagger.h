//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnalyticsEntityTagger.h"

#import "_TtP8Features28AdRequestIdentifierProviding_-Protocol.h"

@class AdCallFactory, AdStorage, PlayableAd, _TtC10SoundCloud32AdRequestEventAttributesProvider, _TtC10SoundCloud33AdDeliveryEventAttributesProvider;

@interface AnalyticsAdSelectionTagger : AnalyticsEntityTagger <_TtP8Features28AdRequestIdentifierProviding_>
{
    _Bool _hasTrackedAdSelection;
    PlayableAd *_currentAd;
    AdStorage *_adStorage;
    AdCallFactory *_callFactory;
    _TtC10SoundCloud32AdRequestEventAttributesProvider *_adRequestEventAttributesProvider;
    _TtC10SoundCloud33AdDeliveryEventAttributesProvider *_adDeliveryEventAttributesProvider;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _TtC10SoundCloud33AdDeliveryEventAttributesProvider *adDeliveryEventAttributesProvider; // @synthesize adDeliveryEventAttributesProvider=_adDeliveryEventAttributesProvider;
@property(readonly, nonatomic) _TtC10SoundCloud32AdRequestEventAttributesProvider *adRequestEventAttributesProvider; // @synthesize adRequestEventAttributesProvider=_adRequestEventAttributesProvider;
@property(readonly, nonatomic) AdCallFactory *callFactory; // @synthesize callFactory=_callFactory;
@property(readonly, nonatomic) AdStorage *adStorage; // @synthesize adStorage=_adStorage;
@property(nonatomic) _Bool hasTrackedAdSelection; // @synthesize hasTrackedAdSelection=_hasTrackedAdSelection;
@property(retain, nonatomic) PlayableAd *currentAd; // @synthesize currentAd=_currentAd;
- (void).cxx_destruct;
- (id)cleanupAndReturnRequestAdRequestIdentifierFor:(id)arg1;
- (id)adRequestIdentifierFor:(id)arg1;
- (id)metadataDictionaryWithUrn:(id)arg1 priority:(double)arg2;
- (id)adsReceivedAsJSON:(id)arg1;
- (id)selectionEventForTrackUrn:(id)arg1 eventName:(id)arg2 requestStatus:(_Bool)arg3 fromEndpoint:(id)arg4 originalAd:(id)arg5 currentAd:(id)arg6 adsReceived:(id)arg7;
- (void)tagAdRequestForTrack:(id)arg1 forCurrentAd:(id)arg2;
- (void)tagSelectionEventOnNoReceivedAdsForTrack:(id)arg1 requestEndpoint:(id)arg2;
- (void)tagSelectionEventOnDownloadFailureForTrack:(id)arg1 requestEndpoint:(id)arg2;
- (void)tagSelectionEventForTrack:(id)arg1 currentAd:(id)arg2;
- (id)subscribeCurrentItem:(id)arg1;
- (id)subscribePlayStateChange:(id)arg1 playbackService:(id)arg2;
- (id)initWithAnalyticsController:(id)arg1 adStorage:(id)arg2 adRequestEventAttributesProvider:(id)arg3 adDeliveryEventAttributesProvider:(id)arg4;

@end

