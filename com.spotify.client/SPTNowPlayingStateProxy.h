//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingBarViewControllerObserver-Protocol.h"
#import "SPTNowPlayingStateObservable-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingUnitProviderObserver-Protocol.h"

@class NSString, SPTNowPlayingBarContainerViewController, SPTNowPlayingTrackMetadataQueue, SPTObserverManager, SPTStatefulPlayer;

@interface SPTNowPlayingStateProxy : NSObject <SPTNowPlayingTrackMetadataQueueObserver, SPTNowPlayingBarViewControllerObserver, SPTNowPlayingStateObservable, SPTNowPlayingUnitProviderObserver>
{
    SPTStatefulPlayer *_statefulPlayer;
    SPTNowPlayingTrackMetadataQueue *_trackMetadataQueue;
    SPTNowPlayingBarContainerViewController *_currentNowPlayingBarContainerViewController;
    SPTObserverManager *_observerManager;
}

@property(retain, nonatomic) SPTObserverManager *observerManager; // @synthesize observerManager=_observerManager;
@property(nonatomic) __weak SPTNowPlayingBarContainerViewController *currentNowPlayingBarContainerViewController; // @synthesize currentNowPlayingBarContainerViewController=_currentNowPlayingBarContainerViewController;
@property(readonly, nonatomic) SPTNowPlayingTrackMetadataQueue *trackMetadataQueue; // @synthesize trackMetadataQueue=_trackMetadataQueue;
@property(retain, nonatomic) SPTStatefulPlayer *statefulPlayer; // @synthesize statefulPlayer=_statefulPlayer;
- (void).cxx_destruct;
- (void)handleBarReplacementWithNewViewController:(id)arg1;
- (void)updateCurrentNowPlayingBarContainerViewControllerWithBarViewController:(id)arg1;
- (id)barContainerViewControllerFromBarViewController:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)provider:(id)arg1 willReplaceViewController:(id)arg2 with:(id)arg3;
- (void)nowPlayingBarViewControllerWillDisappear:(id)arg1;
- (void)nowPlayingBarViewControllerDidAppear:(id)arg1;
- (void)trackMetadataQueueWillSkipToNextTrack:(id)arg1;
- (void)dealloc;
- (id)initWithStatefulPlayer:(id)arg1 trackMetadataQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

