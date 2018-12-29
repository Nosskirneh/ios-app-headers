//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ActionSheetActionHandlerDataSource-Protocol.h"
#import "ActionSheetActionHandlerDelegate-Protocol.h"
#import "CardCellDelegate-Protocol.h"
#import "EngagementDelegate-Protocol.h"

@class ActionSheetActionHandler, ActionSheetPresenterFactory, AnalyticsFeedEventTagger, AnalyticsPromotedPlayableTagger, Engagement, LauncherRegistry, NSString, TaggingContext, UICollectionView, UIView, UIViewController;
@protocol ActionSheetPresenter, Launcher, TaggableScreen, _TtP2UI31ActionSheetElementManufacturing_;

@interface CardCellActionHandler : NSObject <EngagementDelegate, ActionSheetActionHandlerDataSource, ActionSheetActionHandlerDelegate, CardCellDelegate>
{
    UIViewController<TaggableScreen> *_sourceViewController;
    UICollectionView *_collectionView;
    AnalyticsPromotedPlayableTagger *_promotedPlayableTagger;
    AnalyticsFeedEventTagger *_feedEventTagger;
    Engagement *_engagement;
    ActionSheetPresenterFactory *_actionSheetPresenterFactory;
    id <_TtP2UI31ActionSheetElementManufacturing_> _trackActionSheetElementCreator;
    id <_TtP2UI31ActionSheetElementManufacturing_> _playlistActionSheetElementCreator;
    ActionSheetActionHandler *_actionSheetActionHandler;
    LauncherRegistry *_launcherRegistry;
    id <Launcher> _currentLauncher;
    id <ActionSheetPresenter> _actionSheetPresenter;
    UIView *_sourceView;
}

@property(nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) id <ActionSheetPresenter> actionSheetPresenter; // @synthesize actionSheetPresenter=_actionSheetPresenter;
@property(retain, nonatomic) id <Launcher> currentLauncher; // @synthesize currentLauncher=_currentLauncher;
@property(retain, nonatomic) LauncherRegistry *launcherRegistry; // @synthesize launcherRegistry=_launcherRegistry;
@property(readonly, nonatomic) ActionSheetActionHandler *actionSheetActionHandler; // @synthesize actionSheetActionHandler=_actionSheetActionHandler;
@property(readonly, nonatomic) id <_TtP2UI31ActionSheetElementManufacturing_> playlistActionSheetElementCreator; // @synthesize playlistActionSheetElementCreator=_playlistActionSheetElementCreator;
@property(readonly, nonatomic) id <_TtP2UI31ActionSheetElementManufacturing_> trackActionSheetElementCreator; // @synthesize trackActionSheetElementCreator=_trackActionSheetElementCreator;
@property(readonly, nonatomic) ActionSheetPresenterFactory *actionSheetPresenterFactory; // @synthesize actionSheetPresenterFactory=_actionSheetPresenterFactory;
@property(readonly, nonatomic) Engagement *engagement; // @synthesize engagement=_engagement;
@property(readonly, nonatomic) AnalyticsFeedEventTagger *feedEventTagger; // @synthesize feedEventTagger=_feedEventTagger;
@property(readonly, nonatomic) AnalyticsPromotedPlayableTagger *promotedPlayableTagger; // @synthesize promotedPlayableTagger=_promotedPlayableTagger;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UIViewController<TaggableScreen> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void).cxx_destruct;
- (void)performAction:(unsigned long long)arg1 presentable:(id)arg2;
- (void)showActionSheetForPresentable:(id)arg1 cell:(id)arg2;
- (void)showEntityUrn:(id)arg1;
- (id)presentableForCell:(id)arg1;
- (id)actionSheetSourceViewController;
- (id)actionSheetSourceView;
- (void)actionHandlerDidReceiveMoreOptionsAction:(id)arg1;
@property(readonly, nonatomic) TaggingContext *sourceContext;
@property(readonly, nonatomic) long long screen;
- (id)viewControllerToLaunchFrom;
- (void)cardCellDidTapMeta:(id)arg1;
- (void)cardCellDidTapArtist:(id)arg1;
- (void)cardCellDidTapRepost:(id)arg1;
- (void)cardCellDidTapLike:(id)arg1;
- (void)cardCellDidTapMore:(id)arg1;
- (void)dismissActionSheetWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPromotedTagger:(id)arg1 feedEventTagger:(id)arg2 launcherRegistry:(id)arg3 engagement:(id)arg4 actionSheetPresenterFactory:(id)arg5 trackActionSheetElementCreator:(id)arg6 playlistActionSheetElementCreator:(id)arg7 actionSheetActionHandler:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
