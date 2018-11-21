//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierCollectionPreviewableItemViewModel-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierRecommendationsTrackModelEntity;

@interface SPTFreeTierCollectionRecommendedPreviewableSongItemViewModel : NSObject <SPTFreeTierCollectionPreviewableItemViewModel>
{
    _Bool _hideBanQuickAction;
    _Bool showOverlayMask;
    _Bool _banned;
    _Bool _offline;
    _Bool _playbackRestricted;
    _Bool _showCollectionQuickActions;
    id <SPTFreeTierRecommendationsTrackModelEntity> _recommendedTrack;
}

@property(nonatomic) _Bool showCollectionQuickActions; // @synthesize showCollectionQuickActions=_showCollectionQuickActions;
@property(readonly, nonatomic, getter=isPlaybackRestricted) _Bool playbackRestricted; // @synthesize playbackRestricted=_playbackRestricted;
@property(nonatomic, getter=isOffline) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) id <SPTFreeTierRecommendationsTrackModelEntity> recommendedTrack; // @synthesize recommendedTrack=_recommendedTrack;
@property(nonatomic, getter=isBanned) _Bool banned; // @synthesize banned=_banned;
@property(readonly, nonatomic) _Bool showOverlayMask; // @synthesize showOverlayMask;
@property(readonly, nonatomic) _Bool hideBanQuickAction; // @synthesize hideBanQuickAction=_hideBanQuickAction;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFolder) _Bool folder;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic, getter=isExplicit) _Bool explicit;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSString *previewId;
@property(readonly, nonatomic) _Bool inCollection;
@property(readonly, nonatomic) long long offlineStatus;
@property(readonly, nonatomic, getter=isOfflineAvailable) _Bool offlineAvailable;
@property(readonly, nonatomic) _Bool showDecorationOverlay;
@property(readonly, nonatomic, getter=isShuffle) _Bool isShuffle;
@property(readonly, nonatomic) long long icon;
@property(readonly, nonatomic) NSURL *imageURL;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithRecommendedTrack:(id)arg1 isOffline:(_Bool)arg2 isPlaybackRestricted:(_Bool)arg3 showCollectionQuickActions:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

