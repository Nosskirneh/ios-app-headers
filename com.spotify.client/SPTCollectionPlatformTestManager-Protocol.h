//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTCollectionPlatformTestManager <NSObject>
@property(readonly, nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> localBansEnabledSignal;
@property(readonly, nonatomic, getter=isMadeForAttributionEnabled) _Bool madeForAttributionEnabled;
@property(readonly, nonatomic, getter=isNewNowPlayingViewEnabled) _Bool newNowPlayingViewEnabled;
@property(readonly, nonatomic, getter=isIncompleteAlbumsUsedForCollectionState) _Bool incompleteAlbumsUsedForCollectionState;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
@property(readonly, getter=isHeartsEverywhereEnabled) _Bool heartsEverywhereEnabled;
@property(readonly, getter=isBookmarkModelEnabled) _Bool bookmarkModelEnabled;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) _Bool yourLibraryFeatureEnabled;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration;
@end

