//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, IGDManager, YTHotConfig, YTLastActionController, YTPlayerRequestFactory, YTReachabilityController;
@protocol YTAdInnerTubeConfig, YTAdsFrequencyCapProtocol;

@interface YTPlaybackRequestFactory : NSObject
{
    id <YTAdsFrequencyCapProtocol> _adsFrequencyCap;
    id <YTAdInnerTubeConfig> _adInnerTubeConfig;
    YTLastActionController *_lastActionController;
    YTReachabilityController *_reachabilityController;
    YTPlayerRequestFactory *_protoRequestFactory;
    YTHotConfig *_hotConfig;
    IGDManager *_iosguardManager;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)playbackRequestForNavigationEndpoint:(id)arg1 autoplay:(_Bool)arg2 autonav:(_Bool)arg3 flungFromMDX:(_Bool)arg4 expiredForSeconds:(int)arg5 visibility:(int)arg6 viewportSizeProvider:(id)arg7 playerRequestDecorator:(id)arg8 prefetchContext:(id)arg9 latencyLogger:(id)arg10;
- (id)playbackContextForAutoplay:(_Bool)arg1 autonav:(_Bool)arg2 flungFromMDX:(_Bool)arg3 visibility:(int)arg4;
- (id)playbackRequestForPlayerTransition:(id)arg1 visibility:(int)arg2 viewportSizeProvider:(id)arg3 prefetchContext:(id)arg4;
- (id)playbackRequestForPlayerTransition:(id)arg1 visibility:(int)arg2 viewportSizeProvider:(id)arg3;
- (id)init;

@end
