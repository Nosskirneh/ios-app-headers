//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIMusicPlaylistEntryCollectionEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *continuationToken; // @dynamic continuationToken;
@property(retain, nonatomic) NSMutableArray *entriesArray; // @dynamic entriesArray;
@property(readonly, nonatomic) unsigned long long entriesArray_Count; // @dynamic entriesArray_Count;
@property(nonatomic) _Bool hasContinuationToken; // @dynamic hasContinuationToken;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasParentPlaylist; // @dynamic hasParentPlaylist;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *parentPlaylist; // @dynamic parentPlaylist;

@end

