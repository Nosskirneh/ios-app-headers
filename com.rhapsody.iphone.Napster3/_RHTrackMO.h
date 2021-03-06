//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHContentManagedObject.h"

#import "RHTrackMOProtocol-Protocol.h"

@class NSDate, NSNumber, NSSet, NSString, RHAlbumMO, RHArtistMO, RHDownloadLeaseMO, RHEditorialAssociatedTrackMO, RHGenreMO, RHPersonalizedReasonMO, RHTrackStationMO;

@interface _RHTrackMO : RHContentManagedObject <RHTrackMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)trackStationsSet;
- (id)trackDatasSet;
- (id)tagsSet;
- (id)stationTracksSet;
- (id)recentContainersSet;
- (id)queuedItemsSet;
- (id)profileTracksSet;
- (id)profileTaggedTracksSet;
- (id)playlistItemsSet;
- (id)playbackMediasSet;
- (id)playbackEventsSet;
- (id)highlightsSet;
- (id)editorialsSet;
- (id)downloadLeasesSet;
- (id)bookmarksSet;
- (id)blurbsSet;
- (id)alarmsSet;
- (void)setPrimitiveWeightValue:(long long)arg1;
- (long long)primitiveWeightValue;
@property long long weightValue;
- (void)setPrimitiveTrackIndexValue:(long long)arg1;
- (long long)primitiveTrackIndexValue;
@property long long trackIndexValue;
- (void)setPrimitiveSourceValue:(long long)arg1;
- (long long)primitiveSourceValue;
@property long long sourceValue;
- (void)setPrimitivePlaybackSecondsValue:(long long)arg1;
- (long long)primitivePlaybackSecondsValue;
@property long long playbackSecondsValue;
- (void)setPrimitiveIsInPlaybackCacheValue:(_Bool)arg1;
- (_Bool)primitiveIsInPlaybackCacheValue;
@property _Bool isInPlaybackCacheValue;
- (void)setPrimitiveIsInLibraryValue:(_Bool)arg1;
- (_Bool)primitiveIsInLibraryValue;
@property _Bool isInLibraryValue;
- (void)setPrimitiveIsInAlarmCacheValue:(_Bool)arg1;
- (_Bool)primitiveIsInAlarmCacheValue;
@property _Bool isInAlarmCacheValue;
- (void)setPrimitiveHasOnDemandRightsValue:(_Bool)arg1;
- (_Bool)primitiveHasOnDemandRightsValue;
@property _Bool hasOnDemandRightsValue;
- (void)setPrimitiveDownloadedHighQualityValue:(_Bool)arg1;
- (_Bool)primitiveDownloadedHighQualityValue;
@property _Bool downloadedHighQualityValue;
- (void)setPrimitiveDownloadedValue:(float)arg1;
- (float)primitiveDownloadedValue;
@property float downloadedValue;
- (void)setPrimitiveDownloadBitrateValue:(long long)arg1;
- (long long)primitiveDownloadBitrateValue;
@property long long downloadBitrateValue;
- (void)setPrimitiveDiscIndexValue:(long long)arg1;
- (long long)primitiveDiscIndexValue;
@property long long discIndexValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *alarms; // @dynamic alarms;
@property(retain, nonatomic) RHAlbumMO *album; // @dynamic album;
@property(retain, nonatomic) NSString *albumDisplayName; // @dynamic albumDisplayName;
@property(retain, nonatomic) RHAlbumMO *albumWithoutRights; // @dynamic albumWithoutRights;
@property(retain, nonatomic) RHArtistMO *artist; // @dynamic artist;
@property(retain, nonatomic) NSString *artistDisplayName; // @dynamic artistDisplayName;
@property(retain, nonatomic) RHEditorialAssociatedTrackMO *associatedEditorials; // @dynamic associatedEditorials;
@property(retain, nonatomic) NSSet *blurbs; // @dynamic blurbs;
@property(retain, nonatomic) NSSet *bookmarks; // @dynamic bookmarks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSNumber *discIndex; // @dynamic discIndex;
@property(retain, nonatomic) NSNumber *downloadBitrate; // @dynamic downloadBitrate;
@property(retain, nonatomic) RHDownloadLeaseMO *downloadLease; // @dynamic downloadLease;
@property(retain, nonatomic) NSSet *downloadLeases; // @dynamic downloadLeases;
@property(retain, nonatomic) NSNumber *downloaded; // @dynamic downloaded;
@property(retain, nonatomic) NSNumber *downloadedHighQuality; // @dynamic downloadedHighQuality;
@property(retain, nonatomic) NSSet *editorials; // @dynamic editorials;
@property(retain, nonatomic) RHGenreMO *genre; // @dynamic genre;
@property(retain, nonatomic) NSString *guid; // @dynamic guid;
@property(retain, nonatomic) NSNumber *hasOnDemandRights; // @dynamic hasOnDemandRights;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSSet *highlights; // @dynamic highlights;
@property(retain, nonatomic) NSNumber *isInAlarmCache; // @dynamic isInAlarmCache;
@property(retain, nonatomic) NSNumber *isInLibrary; // @dynamic isInLibrary;
@property(retain, nonatomic) NSNumber *isInPlaybackCache; // @dynamic isInPlaybackCache;
@property(retain, nonatomic) NSDate *lastPlaybackAccess; // @dynamic lastPlaybackAccess;
@property(retain, nonatomic) NSDate *lastValidatedAt; // @dynamic lastValidatedAt;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *nameInitial; // @dynamic nameInitial;
@property(retain, nonatomic) RHPersonalizedReasonMO *personalizedReason; // @dynamic personalizedReason;
@property(retain, nonatomic) NSSet *playbackEvents; // @dynamic playbackEvents;
@property(retain, nonatomic) NSSet *playbackMedias; // @dynamic playbackMedias;
@property(retain, nonatomic) NSNumber *playbackSeconds; // @dynamic playbackSeconds;
@property(retain, nonatomic) NSSet *playlistItems; // @dynamic playlistItems;
@property(retain, nonatomic) NSString *previewUrl; // @dynamic previewUrl;
@property(retain, nonatomic) NSSet *profileTaggedTracks; // @dynamic profileTaggedTracks;
@property(retain, nonatomic) NSSet *profileTracks; // @dynamic profileTracks;
@property(retain, nonatomic) NSSet *queuedItems; // @dynamic queuedItems;
@property(retain, nonatomic) NSSet *recentContainers; // @dynamic recentContainers;
@property(retain, nonatomic) NSNumber *source; // @dynamic source;
@property(retain, nonatomic) NSSet *stationTracks; // @dynamic stationTracks;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *tags; // @dynamic tags;
@property(retain, nonatomic) NSSet *trackDatas; // @dynamic trackDatas;
@property(retain, nonatomic) NSNumber *trackIndex; // @dynamic trackIndex;
@property(retain, nonatomic) RHTrackStationMO *trackStation; // @dynamic trackStation;
@property(retain, nonatomic) NSSet *trackStations; // @dynamic trackStations;
@property(retain, nonatomic) NSNumber *weight; // @dynamic weight;

@end

