//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ActionSheetActionHandlerDataSource-Protocol.h"
#import "ActionSheetActionHandlerDelegate-Protocol.h"
#import "EngagementDelegate-Protocol.h"
#import "ShareLauncherDelegate-Protocol.h"
#import "TrackActionHandling-Protocol.h"
#import "TrackCellDelegate-Protocol.h"

@class ActionSheetActionHandler, ActionSheetPresenterFactory, AnalyticsPromotedPlayableState, NSIndexPath, NSString, TaggingContext, UICollectionView, UIView, UIViewController;
@protocol ActionSheetPresenter, TaggableScreen, _TtP2UI31ActionSheetElementManufacturing_;

@interface TrackActionHandler : NSObject <ActionSheetActionHandlerDataSource, ActionSheetActionHandlerDelegate, TrackActionHandling, TrackCellDelegate, EngagementDelegate, ShareLauncherDelegate>
{
    AnalyticsPromotedPlayableState *_playlistPromotedPlayableState;
    UICollectionView *_collectionView;
    UIViewController<TaggableScreen> *_sourceViewController;
    ActionSheetPresenterFactory *_actionSheetPresenterFactory;
    id <_TtP2UI31ActionSheetElementManufacturing_> _actionSheetElementCreator;
    ActionSheetActionHandler *_actionSheetActionHandler;
    id <ActionSheetPresenter> _actionSheetPresenter;
    UIView *_selectedView;
    NSIndexPath *_selectedIndexCache;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexCache; // @synthesize selectedIndexCache=_selectedIndexCache;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) id <ActionSheetPresenter> actionSheetPresenter; // @synthesize actionSheetPresenter=_actionSheetPresenter;
@property(readonly, nonatomic) ActionSheetActionHandler *actionSheetActionHandler; // @synthesize actionSheetActionHandler=_actionSheetActionHandler;
@property(readonly, nonatomic) id <_TtP2UI31ActionSheetElementManufacturing_> actionSheetElementCreator; // @synthesize actionSheetElementCreator=_actionSheetElementCreator;
@property(readonly, nonatomic) ActionSheetPresenterFactory *actionSheetPresenterFactory; // @synthesize actionSheetPresenterFactory=_actionSheetPresenterFactory;
@property(nonatomic) __weak UIViewController<TaggableScreen> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) AnalyticsPromotedPlayableState *playlistPromotedPlayableState; // @synthesize playlistPromotedPlayableState=_playlistPromotedPlayableState;
- (void).cxx_destruct;
- (void)didDismissShareLauncher:(id)arg1;
- (id)shareLauncherSourceView:(id)arg1;
- (id)viewControllerToLaunchFrom;
@property(readonly, nonatomic) TaggingContext *sourceContext;
@property(readonly, nonatomic) long long screen;
- (void)trackCellDidTapMoreButtonInTrackCell:(id)arg1;
- (id)actionSheetConfigurationWithPlaylistScreenPlaylistTrack:(id)arg1;
- (id)trackForCell:(id)arg1;
- (void)actionHandlerDidReceiveMoreOptionsAction:(id)arg1;
- (void)dismissActionSheetWithCompletion:(CDUnknownBlockType)arg1;
- (id)actionSheetSourceViewController;
- (id)actionSheetSourceView;
- (void)presentActionSheetForTrack:(id)arg1 inView:(id)arg2;
- (void)performActionSheetElementActionWithTag:(unsigned long long)arg1 track:(id)arg2;
- (void)setEngagementTrackingDelegate:(id)arg1;
- (id)initWithActionSheetPresenterFactory:(id)arg1 actionSheetElementCreator:(id)arg2 actionSheetActionHandler:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

