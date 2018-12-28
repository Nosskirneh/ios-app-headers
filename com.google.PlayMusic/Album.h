//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackList.h"

#import "GPMShareableItem-Protocol.h"
#import "PinnableContainer-Protocol.h"

@class Artist, DescriptionAttributes, NSNumber, NSString;

@interface Album : TrackList <GPMShareableItem, PinnableContainer>
{
    NSString *_name;
    NSString *_albumKey;
    NSString *_albumID;
    NSString *_albumArtURLString;
    NSNumber *_creationTimestamp;
    NSNumber *_recentTimestamp;
    long long _year;
    long long _contentType;
    Artist *_artist;
    NSString *_detailString;
    DescriptionAttributes *_descriptionAttributes;
}

@property(retain, nonatomic) DescriptionAttributes *descriptionAttributes; // @synthesize descriptionAttributes=_descriptionAttributes;
@property(copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(retain, nonatomic) Artist *artist; // @synthesize artist=_artist;
@property(nonatomic) long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(retain, nonatomic) NSNumber *recentTimestamp; // @synthesize recentTimestamp=_recentTimestamp;
@property(retain, nonatomic) NSNumber *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic) NSString *albumArtURLString; // @synthesize albumArtURLString=_albumArtURLString;
@property(copy, nonatomic) NSString *albumID; // @synthesize albumID=_albumID;
@property(copy, nonatomic) NSString *albumKey; // @synthesize albumKey=_albumKey;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)queueableContainerInfo;
- (void)lookupLockerPinnableContainerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pinnableContainerInfo;
- (id)supportedContextMenuKeysForAvailabilityState:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyFromAlbum:(id)arg1;
@property(readonly, nonatomic, getter=isRemote) _Bool remote;
@property(readonly, nonatomic, getter=isLocal) _Bool local;
@property(readonly, nonatomic) NSString *displayName;
- (long long)compare:(id)arg1;
- (_Bool)isEquivalentToMusicItem:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)populateFromSJAlbum:(id)arg1;
- (id)initWithSJAlbum:(id)arg1;
- (id)sharingSubject;
- (void)sharingURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isShareableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)tagDictionary;
- (id)detailPageInfo;
- (id)playLogContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

