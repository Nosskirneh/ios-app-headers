//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SPTFreeTierCollectionPlaylistModelItemEntity;

@protocol SPTFreeTierCollectionPlaylistsModelEntity <NSObject>
@property(readonly, copy, nonatomic) NSArray *sectionTitles;
@property(readonly, copy, nonatomic) NSArray *sectionIndexes;
@property(readonly, nonatomic) _Bool hasHiddenContent;
@property(readonly, nonatomic) _Bool hasOwnPlaylists;
@property(readonly, nonatomic) id <SPTFreeTierCollectionPlaylistModelItemEntity> favoriteEntity;
@property(readonly, nonatomic) NSArray *items;
@end

