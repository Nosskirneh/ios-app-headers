//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTService-Protocol.h"

@class NSString, NSURL;
@protocol SPTFreeTierPlaylistModel, SPTFreeTierPlaylistSortingFiltering, SPTFreeTierPlaylistTestManager;

@protocol SPTFreeTierPlaylistService <SPTService>
- (id <SPTFreeTierPlaylistTestManager>)provideTestManager;
- (id <SPTFreeTierPlaylistModel>)providePlaylistModelForURL:(NSURL *)arg1 formatListType:(NSString *)arg2;
- (id <SPTFreeTierPlaylistModel>)providePlaylistModelForURL:(NSURL *)arg1;
- (id <SPTFreeTierPlaylistSortingFiltering>)provideSortingFilteringForPlaylistURL:(NSURL *)arg1;
@end

