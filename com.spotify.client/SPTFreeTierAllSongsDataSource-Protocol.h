//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSIndexPath, NSString, NSURL, UIView;

@protocol SPTFreeTierAllSongsDataSource <NSObject>
@property(nonatomic) __weak id <SPTFreeTierAllSongsDataSourceDelegate> dataSourceDelegate;
- (NSArray *)artistsForIndexPath:(NSIndexPath *)arg1;
- (NSString *)albumNameForIndexPath:(NSIndexPath *)arg1;
- (NSURL *)trackURIForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackPremiumOnlyForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackExplicitForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isTrackEnabledForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isSongLikedForIndexPath:(NSIndexPath *)arg1;
- (_Bool)isSongBannedForIndexPath:(NSIndexPath *)arg1;
- (NSString *)trackPreviewIdentifierForIndexPath:(NSIndexPath *)arg1;
- (NSURL *)imageURLForIndexPath:(NSIndexPath *)arg1;
- (UIView *)trackSubtitleAccessoryViewForIndexPath:(NSIndexPath *)arg1;
- (NSString *)artistNameForIndexPath:(NSIndexPath *)arg1;
- (NSString *)trackNameForIndexPath:(NSIndexPath *)arg1;
- (NSString *)titleForSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSectionsForAllSongs;
- (_Bool)shouldShowHeadersInAllSongss;
- (NSString *)titleForAllSongs;
- (_Bool)hasDataSourceLoadedForAllSongs;
- (void)allSongsDataSourceLoads;

@optional
@property(readonly, nonatomic) id <SPTFreeTierAllSongsHeaderEntityViewModel> headerEntityViewModel;
@property(readonly, nonatomic) _Bool hasHeader;
@property(readonly, copy, nonatomic) NSString *updateDialogMessageForAllSongs;
@property(readonly, nonatomic) _Bool shouldDisplayUpdateDialogForAllSongs;
- (NSString *)toggleNegativeFeedbackForIndexPath:(NSIndexPath *)arg1;
- (NSString *)togglePositiveFeedbackForIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)trackFeedbackTypeForIndexPath:(NSIndexPath *)arg1;
@end
