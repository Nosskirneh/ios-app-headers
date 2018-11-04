//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierPlaylistTrackViewModel.h"

@class NSArray, NSString, NSURL, UIColor;

@interface SPTFreeTierPlaylistTrackViewModelImplementation : NSObject <SPTFreeTierPlaylistTrackViewModel>
{
    _Bool _playingTrack;
    _Bool _offline;
    _Bool _playbackRestricted;
    _Bool _premiumOnlyFeatureEnabled;
    _Bool _collectionMenuIconsEnabled;
    _Bool _showCollectionQuickActions;
    id <SPTFreeTierPlaylistModelEntityTrackFields> _trackEntity;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    NSString *_subtitle;
    NSArray *_artists;
    long long _offlineSyncStatus;
}

@property(nonatomic) long long offlineSyncStatus; // @synthesize offlineSyncStatus=_offlineSyncStatus;
@property(nonatomic) _Bool showCollectionQuickActions; // @synthesize showCollectionQuickActions=_showCollectionQuickActions;
@property(readonly, nonatomic, getter=isCollectionMenuIconsEnabled) _Bool collectionMenuIconsEnabled; // @synthesize collectionMenuIconsEnabled=_collectionMenuIconsEnabled;
@property(readonly, nonatomic, getter=isPremiumOnlyFeatureEnabled) _Bool premiumOnlyFeatureEnabled; // @synthesize premiumOnlyFeatureEnabled=_premiumOnlyFeatureEnabled;
@property(nonatomic, getter=isPlaybackRestricted) _Bool playbackRestricted; // @synthesize playbackRestricted=_playbackRestricted;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic, getter=isPlayingTrack) _Bool playingTrack; // @synthesize playingTrack=_playingTrack;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(retain, nonatomic) id <SPTFreeTierPlaylistModelEntityTrackFields> trackEntity; // @synthesize trackEntity=_trackEntity;
- (void).cxx_destruct;
- (void)setUpOfflineSyncStatus;
@property(readonly, nonatomic) NSString *previewID;
@property(readonly, nonatomic) NSURL *albumURL;
@property(readonly, nonatomic) NSString *albumName;
@property(readonly, nonatomic, getter=isBanned) _Bool banned;
@property(readonly, nonatomic, getter=isLiked) _Bool liked;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic) UIColor *contextMenuIconColor;
@property(readonly, nonatomic) long long contextMenuIcon;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithPlaylistTrackEntity:(id)arg1 collectionConfiguration:(id)arg2 isPlayingTrack:(_Bool)arg3 isOffline:(_Bool)arg4 isPlaybackRestricted:(_Bool)arg5 isPremiumOnlyFeatureEnabled:(_Bool)arg6 isCollectionMenuIconsEnabled:(_Bool)arg7 showCollectionQuickActions:(_Bool)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

