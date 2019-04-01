//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VOXPlayerControllerNotifierDelegate-Protocol.h"

@class NSArray, NSString, VOXContentListAdapter, VOXPlayerControllerNotifier;

@interface VOXMediaItemStateIndicatorManager : NSObject <VOXPlayerControllerNotifierDelegate>
{
    VOXContentListAdapter *_listAdapter;
    VOXPlayerControllerNotifier *_playerControllerNotifier;
    NSArray *_visualizerViewTrackDurations;
    NSArray *_visualizerViewTrackPauseInfo;
    NSArray *_visualizerViewTrackContainerDurations;
    NSArray *_visualizerViewTrackContainerPauseInfo;
}

@property(retain, nonatomic) NSArray *visualizerViewTrackContainerPauseInfo; // @synthesize visualizerViewTrackContainerPauseInfo=_visualizerViewTrackContainerPauseInfo;
@property(retain, nonatomic) NSArray *visualizerViewTrackContainerDurations; // @synthesize visualizerViewTrackContainerDurations=_visualizerViewTrackContainerDurations;
@property(retain, nonatomic) NSArray *visualizerViewTrackPauseInfo; // @synthesize visualizerViewTrackPauseInfo=_visualizerViewTrackPauseInfo;
@property(retain, nonatomic) NSArray *visualizerViewTrackDurations; // @synthesize visualizerViewTrackDurations=_visualizerViewTrackDurations;
@property(retain, nonatomic) VOXPlayerControllerNotifier *playerControllerNotifier; // @synthesize playerControllerNotifier=_playerControllerNotifier;
@property(retain, nonatomic) VOXContentListAdapter *listAdapter; // @synthesize listAdapter=_listAdapter;
- (void).cxx_destruct;
- (long long)indicatorMaskForPlayingItem:(_Bool)arg1 withLikedState:(_Bool)arg2;
- (void)playerTrackDidStartPlaying;
- (void)playerTrackChangedWithPlayableItem:(id)arg1;
- (void)playerPlaybackStateChanged;
- (void)reloadVisibleIndicatorViews;
- (void)applicationWillEnterForeground;
- (void)refreshVisualizerViewTrackContainerDurations;
- (void)refreshVisualizerViewTrackDurations;
- (id)stateModelForTrackContainer:(id)arg1;
- (id)stateModelForTrack:(id)arg1;
- (void)dealloc;
- (id)initWithContentListAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

