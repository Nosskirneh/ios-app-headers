//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "VOXRadioiCloudFavoriteStorageDelegate-Protocol.h"

@class NSString, VOXRadioFavoriteStationsLocalStorage, VOXRadioiCloudFavoriteStorage;

@interface VOXRadioFavoriteManager : NSObject <VOXRadioiCloudFavoriteStorageDelegate>
{
    VOXRadioFavoriteStationsLocalStorage *_localFavoritesStorage;
    VOXRadioiCloudFavoriteStorage *_icloudFavoritesStorage;
}

+ (id)shared;
+ (_Bool)isFavoritesFeatureAvailable;
@property(retain, nonatomic) VOXRadioiCloudFavoriteStorage *icloudFavoritesStorage; // @synthesize icloudFavoritesStorage=_icloudFavoritesStorage;
@property(retain, nonatomic) VOXRadioFavoriteStationsLocalStorage *localFavoritesStorage; // @synthesize localFavoritesStorage=_localFavoritesStorage;
- (void).cxx_destruct;
- (void)_syncLocalFavoritesWithiCloudFavorites:(id)arg1 withMergeMode:(long long)arg2;
- (void)didChangeFavorites:(id)arg1 inStorage:(id)arg2;
- (void)askUserAboutFavoritesConflictResolvingWithiCloudFavorites:(id)arg1 andLocalFavorites:(id)arg2;
- (void)addToLocalFavoritesStationsWithIds:(id)arg1 andComplitionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool syncFavoritesByiCloud;
- (void)markPlayableItem:(id)arg1 asFavorite:(_Bool)arg2 withComplitionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isFavorite:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

