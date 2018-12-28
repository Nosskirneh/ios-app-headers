//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_RadioSeedMetadata, NSString;

@interface GTLRSJ_RadioSeed : GTLRObject
{
}

@property(readonly, nonatomic) NSString *gpm_seedID; // @dynamic gpm_seedID;

// Remaining properties
@property(copy, nonatomic) NSString *albumId; // @dynamic albumId;
@property(copy, nonatomic) NSString *artistId; // @dynamic artistId;
@property(copy, nonatomic) NSString *curatedStationId; // @dynamic curatedStationId;
@property(copy, nonatomic) NSString *genreId; // @dynamic genreId;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) GTLRSJ_RadioSeedMetadata *metadataSeed; // @dynamic metadataSeed;
@property(copy, nonatomic) NSString *playlistShareToken; // @dynamic playlistShareToken;
@property(copy, nonatomic) NSString *seedType; // @dynamic seedType;
@property(copy, nonatomic) NSString *trackId; // @dynamic trackId;
@property(copy, nonatomic) NSString *trackLockerId; // @dynamic trackLockerId;

@end

