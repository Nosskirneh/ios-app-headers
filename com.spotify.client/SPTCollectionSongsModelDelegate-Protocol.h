//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTCollectionSongsModel;

@protocol SPTCollectionSongsModelDelegate <NSObject>
- (void)songsModel:(id <SPTCollectionSongsModel>)arg1 setLoading:(_Bool)arg2;
- (void)songsModelDidUpdatePlayingIndexPath:(id <SPTCollectionSongsModel>)arg1;
- (void)songsModelDidUpdate:(id <SPTCollectionSongsModel>)arg1;
@end

