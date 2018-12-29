//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EngagementDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UserCellDelegate-Protocol.h"

@class AnalyticsInteractionEventTagger, AnalyticsSearchEventTagger, Engagement, Launcher, NSString, SearchEntityAnalyticsFactory, SearchLauncherFactory, SearchService, TaggingContext, UICollectionView, UIViewController, _TtC10SoundCloud9ABManager;
@protocol TaggableScreen;

@interface SearchActionHandler : NSObject <EngagementDelegate, UserCellDelegate, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    UIViewController<TaggableScreen> *_viewController;
    SearchService *_service;
    long long _screen;
    Engagement *_engagement;
    AnalyticsInteractionEventTagger *_interactionEventTagger;
    AnalyticsSearchEventTagger *_searchEventTagger;
    SearchLauncherFactory *_launcherFactory;
    Launcher *_launcher;
    SearchEntityAnalyticsFactory *_analyticsFactory;
    _TtC10SoundCloud9ABManager *_abManager;
}

@property(readonly, nonatomic) _TtC10SoundCloud9ABManager *abManager; // @synthesize abManager=_abManager;
@property(readonly, nonatomic) SearchEntityAnalyticsFactory *analyticsFactory; // @synthesize analyticsFactory=_analyticsFactory;
@property(retain, nonatomic) Launcher *launcher; // @synthesize launcher=_launcher;
@property(readonly, nonatomic) SearchLauncherFactory *launcherFactory; // @synthesize launcherFactory=_launcherFactory;
@property(readonly, nonatomic) AnalyticsSearchEventTagger *searchEventTagger; // @synthesize searchEventTagger=_searchEventTagger;
@property(readonly, nonatomic) AnalyticsInteractionEventTagger *interactionEventTagger; // @synthesize interactionEventTagger=_interactionEventTagger;
@property(readonly, nonatomic) Engagement *engagement; // @synthesize engagement=_engagement;
@property(nonatomic) long long screen; // @synthesize screen=_screen;
@property(retain, nonatomic) SearchService *service; // @synthesize service=_service;
@property(nonatomic) __weak UIViewController<TaggableScreen> *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (id)viewControllerToLaunchFrom;
@property(readonly, nonatomic) TaggingContext *sourceContext;
- (void)tagClickOnSearchEntity:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)contextForEntity:(id)arg1 index:(unsigned long long)arg2;
- (id)indexPathForCell:(id)arg1;
- (id)entityAtIndexPath:(id)arg1;
- (unsigned long long)absoluteIndexAtIndexPath:(id)arg1;
- (void)launchScreenForSearchEntity:(id)arg1 index:(unsigned long long)arg2 isSuggestion:(_Bool)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)userCellDidTapFollowButton:(id)arg1;
- (id)initWithEngagement:(id)arg1 interactionEventTagger:(id)arg2 searchEventTagger:(id)arg3 launcherFactory:(id)arg4 analyticsFactory:(id)arg5 abManager:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
