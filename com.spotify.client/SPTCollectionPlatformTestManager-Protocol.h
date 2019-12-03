//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTCollectionPlatformConfiguration;

@protocol SPTCollectionPlatformTestManager <NSObject>
@property(readonly, nonatomic, getter=isPremiumSnackbarEnabled) _Bool premiumSnackbarEnabled;
@property(readonly, nonatomic, getter=isLocalBansEnabled) _Bool localBansEnabled;
@property(readonly, nonatomic, getter=isMadeForAttributionEnabled) _Bool madeForAttributionEnabled;
@property(readonly, nonatomic, getter=isIncompleteAlbumsUsedForCollectionState) _Bool incompleteAlbumsUsedForCollectionState;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) _Bool yourLibraryFeatureEnabled;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration;
@end

