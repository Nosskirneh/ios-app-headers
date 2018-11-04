//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAdNPVModeGeneratorProtocol.h"

@class NSString, SPTAdNowPlayingVideoShowStateManager, SPTNowPlayingVideoAdMode;

@interface SPTAdNowPlayingVideoAdModeGenerator : NSObject <SPTAdNPVModeGeneratorProtocol>
{
    SPTNowPlayingVideoAdMode *_videoAdMode;
    SPTAdNowPlayingVideoShowStateManager *_showStateManager;
}

@property(retain, nonatomic) SPTAdNowPlayingVideoShowStateManager *showStateManager; // @synthesize showStateManager=_showStateManager;
@property(retain, nonatomic) SPTNowPlayingVideoAdMode *videoAdMode; // @synthesize videoAdMode=_videoAdMode;
- (void).cxx_destruct;
- (void)updateAdModeWithAdEntity:(id)arg1;
- (id)getNPVAdMode;
- (id)initWithAdManager:(id)arg1 videoSurfaceManager:(id)arg2 player:(id)arg3 playerObserver:(id)arg4 theme:(id)arg5 eventLogger:(id)arg6 featureChecker:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

