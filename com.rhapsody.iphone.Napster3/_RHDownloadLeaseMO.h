//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDSManagedObject.h"

#import "RHDownloadLeaseMOProtocol-Protocol.h"

@class NSNumber, NSSet, NSString, RHAlbumMO, RHPlaylistMO, RHTrackMO;

@interface _RHDownloadLeaseMO : ZDSManagedObject <RHDownloadLeaseMOProtocol>
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)leasedTracksSet;
- (void)setPrimitiveStatusValue:(long long)arg1;
- (long long)primitiveStatusValue;
@property long long statusValue;
- (void)setPrimitiveOrdinalValue:(long long)arg1;
- (long long)primitiveOrdinalValue;
@property long long ordinalValue;
- (void)setPrimitiveIsQueueDownloadLeaseValue:(_Bool)arg1;
- (_Bool)primitiveIsQueueDownloadLeaseValue;
@property _Bool isQueueDownloadLeaseValue;
- (id)entityDataMap;
- (id)objectID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *isQueueDownloadLease; // @dynamic isQueueDownloadLease;
@property(retain, nonatomic) NSSet *leasedTracks; // @dynamic leasedTracks;
@property(retain, nonatomic) RHAlbumMO *lessorAlbum; // @dynamic lessorAlbum;
@property(retain, nonatomic) RHPlaylistMO *lessorPlaylist; // @dynamic lessorPlaylist;
@property(retain, nonatomic) RHTrackMO *lessorTrack; // @dynamic lessorTrack;
@property(retain, nonatomic) NSNumber *ordinal; // @dynamic ordinal;
@property(retain, nonatomic) NSNumber *status; // @dynamic status;
@property(readonly) Class superclass;

@end

