//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTCollectionArtistModel;

@protocol SPTCollectionArtistModelDelegate <NSObject>

@optional
- (void)artistModelOfflineStateChanged:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelFailedToLoad:(id <SPTCollectionArtistModel>)arg1 withError:(NSError *)arg2;
- (void)artistModelDidLoadMetadata:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelDidUpdateSessionOfflineStatus:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelDidUpdatePlayingRow:(id <SPTCollectionArtistModel>)arg1;
- (void)artistModelDidUpdate:(id <SPTCollectionArtistModel>)arg1;
@end

