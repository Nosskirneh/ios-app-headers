//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTHotConfigObserver-Protocol.h"

@class GIMMe, HAMRenderLoop, MLHAMAudioEngineProvider, MLPIPController, MLStreamStore, NSString, UIView, YTIHamplayerHotConfig, YTIIosAvPlayerHotConfig, YTReachabilityController;
@protocol MLHAMPlayerViewProtocol, MLMediaServicesConfig, MLPlayer, MLPlayerViewFactory, MLPlayerViewProtocol;

@interface MLPlayerPool : NSObject <YTHotConfigObserver>
{
    id <MLPlayerViewFactory> _playerViewFactory;
    MLPIPController *_pipController;
    YTReachabilityController *_reachability;
    MLStreamStore *_streamStore;
    MLHAMAudioEngineProvider *_audioEngineProvider;
    id <MLMediaServicesConfig> _mediaConfig;
    YTIHamplayerHotConfig *_hamplayerHotConfig;
    YTIIosAvPlayerHotConfig *_AVPlayerHotConfig;
    id <MLPlayer> _activePlayer;
    HAMRenderLoop *_hamRenderLoop;
    UIView<MLHAMPlayerViewProtocol> *_hamPlayerView;
    GIMMe *_gimme;
    UIView<MLPlayerViewProtocol> *_renderingView;
}

@property(readonly, nonatomic) UIView<MLPlayerViewProtocol> *renderingView; // @synthesize renderingView=_renderingView;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)createHamResourcesForVideo:(id)arg1 playerConfig:(id)arg2;
- (void)hotConfigDidChange:(id)arg1;
- (void)setActivePlayer:(id)arg1;
- (void)returnPlayer:(id)arg1;
- (id)acquirePlayerForVideo:(id)arg1 playerConfig:(id)arg2;
- (void)prepare;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

