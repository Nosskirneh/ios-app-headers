//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDXScreenManagerObserver-Protocol.h"
#import "YTMPlaylistPanelHeaderViewControllerProtocol-Protocol.h"
#import "YTMQueueControllerObserverProtocol-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSString, YTIPlaylistPanelRenderer, YTImageService, YTMButtonVisibilityLogger, YTMQueueController, YTMQueuePanelHeaderView;
@protocol YTMPlaylistControlsResponderProvider, YTResponder;

@interface YTMQueueHeaderViewController : UIViewController <MDXScreenManagerObserver, YTMQueueControllerObserverProtocol, YTMPlaylistPanelHeaderViewControllerProtocol, YTResponder>
{
    id <YTResponder> _parentResponder;
    id <YTMPlaylistControlsResponderProvider> _playlistControlsProvider;
    YTMQueuePanelHeaderView *_headerView;
    YTImageService *_imageService;
    YTIPlaylistPanelRenderer *_playlistPanelRenderer;
    YTMButtonVisibilityLogger *_shuffleButtonVisibilityLogger;
    YTMButtonVisibilityLogger *_loopButtonVisibilityLogger;
    GIMMe *_gimme;
    YTMQueueController *_queueController;
}

@property(nonatomic) __weak YTMQueueController *queueController; // @synthesize queueController=_queueController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(retain, nonatomic) YTIPlaylistPanelRenderer *playlistPanelRenderer; // @synthesize playlistPanelRenderer=_playlistPanelRenderer;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)updateNextVideo;
- (void)queueController:(id)arg1 didRemoveAutomixRenderersAtIndexes:(id)arg2;
- (void)queueController:(id)arg1 didInsertAutomixRenderersAtIndexes:(id)arg2;
- (void)queueControllerDidPromoteAutoplayItemToPlaylist:(id)arg1;
- (void)queueController:(id)arg1 willRemoveVideoAtIndex:(unsigned long long)arg2;
- (void)queueControllerDidShuffleQueue:(id)arg1;
- (void)queueController:(id)arg1 didRemoveVideoAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 didUpdateVideoAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 nowPlayingItemAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 didInsertVideoCount:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)queueController:(id)arg1 numberOfItemsDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)queueController:(id)arg1 didShuffleQueueWithPreviousIndexPaths:(id)arg2;
- (void)queueController:(id)arg1 didReplacePlaylistWithPlaylistPanel:(id)arg2;
- (void)didTapLoopButton:(id)arg1;
- (void)didTapShuffleButton:(id)arg1;
- (void)MDXScreenManager:(id)arg1 sessionDidChange:(id)arg2;
- (void)sendInteractionLoggingForButtons;
- (void)updateHeaderControls;
- (struct CGSize)sizeForHeaderWithSize:(struct CGSize)arg1;
- (void)reset;
- (void)attachAllButtons;
@property(readonly, nonatomic) YTMQueuePanelHeaderView *headerView;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

