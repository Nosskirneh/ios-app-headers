//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTEditPlaylistControllerObserver-Protocol.h"
#import "YTMMusicDetailHeaderViewDelegate-Protocol.h"
#import "YTMOfflinePlaylistStatusControllerObserver-Protocol.h"
#import "YTResponseViewController-Protocol.h"

@class GIMMe, NSString, YTIMusicDetailHeaderRenderer, YTMMusicDetailHeaderView, YTMOfflinePlaylistStatusController, YTMQuiltThumbnailController, YTThumbnailController;
@protocol YTMFlexibleHeaderResponderProvider, YTResponder;

@interface YTMMusicDetailHeaderViewController : UIViewController <YTMMusicDetailHeaderViewDelegate, YTMOfflinePlaylistStatusControllerObserver, YTEditPlaylistControllerObserver, YTResponseViewController>
{
    YTThumbnailController *_thumbnailController;
    YTMQuiltThumbnailController *_quiltThumbnailController;
    YTThumbnailController *_bylineThumbnailController;
    YTIMusicDetailHeaderRenderer *_model;
    YTMOfflinePlaylistStatusController *_offlinePlaylistStatusController;
    NSString *_offlinePlaylistId;
    id <YTMFlexibleHeaderResponderProvider> _flexibleHeaderResponderProvider;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)didTapOfflineButton;
- (void)updateWithOfflinePlaylistMetadata:(id)arg1;
- (void)addOfflineObservationWithPlaylistID:(id)arg1;
- (void)loadThumbnail;
- (void)setHeaderFAB;
- (void)setUpHeaderBylineView;
- (void)setUpHeaderButtonsBylineView;
- (void)setHeaderByline;
- (void)setHeaderSubtitleIcons;
- (void)setHeaderSubtitle;
- (void)setHeaderTitle;
- (_Bool)isDisplayingOfflineContent;
- (void)setHeaderMenuButtons;
- (void)setHeaderSecondTitle;
- (void)didUpdatePlaylistWithID:(id)arg1 withPlaylistHeader:(id)arg2;
- (void)offlinePlaylistStatusController:(id)arg1 didDeleteOfflinePlaylistWithPlaylistID:(id)arg2;
- (void)offlinePlaylistStatusController:(id)arg1 didUpdateOfflinePlaylistMetadata:(id)arg2;
- (void)musicDetailHeaderViewDidTapToggleButton:(id)arg1;
- (_Bool)scrollToModelMatchingBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)willMakeRequest:(id)arg1;
@property(readonly, nonatomic) YTMMusicDetailHeaderView *headerView; // @dynamic headerView;
- (void)loadWithModel:(id)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool useDefaultModelWhenEmpty;

@end
