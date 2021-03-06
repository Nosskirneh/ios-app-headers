//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_Track, NSNumber, NSString;

@interface GTLRSJ_PlaylistEntry : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *absolutePosition; // @dynamic absolutePosition;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(retain, nonatomic) NSNumber *creationTimestamp; // @dynamic creationTimestamp;
@property(retain, nonatomic) NSNumber *deleted; // @dynamic deleted;
@property(copy, nonatomic) NSString *followingEntryId; // @dynamic followingEntryId;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) NSNumber *lastModifiedTimestamp; // @dynamic lastModifiedTimestamp;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(copy, nonatomic) NSString *precedingEntryId; // @dynamic precedingEntryId;
@property(copy, nonatomic) NSString *source; // @dynamic source;
@property(retain, nonatomic) GTLRSJ_Track *track; // @dynamic track;
@property(copy, nonatomic) NSString *trackId; // @dynamic trackId;

@end

