//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EngagementDelegate-Protocol.h"
#import "UserProfileArtworkPresenterDelegate-Protocol.h"
#import "UserProfileSectionFooterDelegate-Protocol.h"

@class Engagement, LegacyPlayerLauncherFactory, NSString, PlayQueueDataSourceFactory, TaggingContext, UIViewController, UserProfileFooterLauncherFactory, _TtC10SoundCloud21StationsActionHandler;
@protocol CollectionViewDataSource, Launcher, TaggableScreen, _TtP4Core10TechLogger_;

@interface UserProfileActionHandler : NSObject <EngagementDelegate, UserProfileArtworkPresenterDelegate, UserProfileSectionFooterDelegate>
{
    id <CollectionViewDataSource> _dataSource;
    UIViewController<TaggableScreen> *_sourceViewController;
    UserProfileFooterLauncherFactory *_footerLauncherFactory;
    Engagement *_engagement;
    PlayQueueDataSourceFactory *_dataSourceFactory;
    LegacyPlayerLauncherFactory *_playerLauncherFactory;
    _TtC10SoundCloud21StationsActionHandler *_stationsHandler;
    id <_TtP4Core10TechLogger_> _techLogger;
    id <Launcher> _launcher;
}

@property(retain, nonatomic) id <Launcher> launcher; // @synthesize launcher=_launcher;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) _TtC10SoundCloud21StationsActionHandler *stationsHandler; // @synthesize stationsHandler=_stationsHandler;
@property(readonly, nonatomic) LegacyPlayerLauncherFactory *playerLauncherFactory; // @synthesize playerLauncherFactory=_playerLauncherFactory;
@property(readonly, nonatomic) PlayQueueDataSourceFactory *dataSourceFactory; // @synthesize dataSourceFactory=_dataSourceFactory;
@property(readonly, nonatomic) Engagement *engagement; // @synthesize engagement=_engagement;
@property(readonly, nonatomic) UserProfileFooterLauncherFactory *footerLauncherFactory; // @synthesize footerLauncherFactory=_footerLauncherFactory;
@property(readonly, nonatomic) __weak UIViewController<TaggableScreen> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(readonly, nonatomic) __weak id <CollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)viewControllerToLaunchFrom;
@property(readonly, nonatomic) TaggingContext *sourceContext;
@property(readonly, nonatomic) long long screen;
- (id)firstPlayableItem;
- (id)user;
- (void)play;
- (void)userProfileSectionFooterDidTapButtonForSection:(unsigned long long)arg1;
- (void)playlistErrorViewDidPressRetry:(id)arg1;
- (void)userProfileBarViewDidTapStationButton:(id)arg1;
- (void)userProfileBarViewDidTapFollowButton:(id)arg1;
- (void)artworkViewDidBeginRefreshing:(id)arg1;
- (void)artworkViewDidTapPlayButton:(id)arg1;
- (id)initWithUserDataSource:(id)arg1 sourceViewController:(id)arg2 footerLauncherFactory:(id)arg3 engagement:(id)arg4 queueDataSourceFactory:(id)arg5 playerLauncherFactory:(id)arg6 stationsHandler:(id)arg7 techLogger:(id)arg8;
- (id)initWithUserDataSource:(id)arg1 sourceViewController:(id)arg2 footerLauncherFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
