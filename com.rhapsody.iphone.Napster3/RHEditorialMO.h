//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_RHEditorialMO.h"

@class NSArray;

@interface RHEditorialMO : _RHEditorialMO
{
}

+ (_Bool)isEditorialGuid:(id)arg1;
+ (id)sortedEmbeddedPayloads:(id)arg1;
+ (id)primaryAssetIDForPayload:(id)arg1;
+ (id)processEditorialAlbumsPayload:(id)arg1 editorial:(id)arg2 context:(id)arg3;
+ (void)processPrimaryAssetPayload:(id)arg1 editorial:(id)arg2 context:(id)arg3;
+ (id)processFeaturedAlbumOfTheDayEditorialsPayload:(id)arg1 range:(id)arg2 memo:(id)arg3 context:(id)arg4;
+ (void)processAssociatedContentJSON:(id)arg1 forEditorial:(id)arg2 context:(id)arg3 contentType:(Class)arg4;
+ (unsigned long long)kidsModeOrdinalForEditorial:(id)arg1;
+ (id)processAndTrimEditorialsWithPayload:(id)arg1 forCategory:(id)arg2 context:(id)arg3;
+ (id)processEditorialsPayload:(id)arg1 context:(id)arg2;
+ (id)processEditorialPayload:(id)arg1 context:(id)arg2;
- (id)sortedArray:(id)arg1;
@property(readonly, nonatomic) NSArray *sortedStations;
- (id)sortedAssociatedStations;
@property(readonly, nonatomic) NSArray *sortedPlaylists;
- (id)sortedAssociatedPlaylists;
@property(readonly, nonatomic) NSArray *sortedAlbums;
- (id)sortedAssociatedAlbums;
@property(readonly, nonatomic) NSArray *sortedTracks;
- (id)sortedAssociatedTracks;
@property(readonly, nonatomic) _Bool isVideoEditorial;
- (unsigned long long)videoCategoryType;
- (id)deeplinkObject;
- (_Bool)postHasCategory:(id)arg1;

@end
