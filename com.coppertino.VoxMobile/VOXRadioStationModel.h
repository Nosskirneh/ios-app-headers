//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RadioPlayableItemProvider-Protocol.h"
#import "VOXItemStateIndicatorProvider-Protocol.h"
#import "VoxPlayableItemProtocol-Protocol.h"

@class NSDate, NSString;

@interface VOXRadioStationModel : NSObject <RadioPlayableItemProvider, VoxPlayableItemProtocol, VOXItemStateIndicatorProvider>
{
    NSString *_persistentId;
    NSString *_title;
    NSString *_desc;
    NSString *_keywords;
    NSDate *_addedDate;
    NSString *_genres;
    NSString *_playbackUrl;
    NSString *_countryName;
    NSString *_externalInfoURL;
}

@property(retain, nonatomic) NSString *externalInfoURL; // @synthesize externalInfoURL=_externalInfoURL;
@property(readonly, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(readonly, nonatomic) NSString *playbackUrl; // @synthesize playbackUrl=_playbackUrl;
@property(readonly, nonatomic) NSString *genres; // @synthesize genres=_genres;
@property(readonly, nonatomic) NSDate *addedDate; // @synthesize addedDate=_addedDate;
@property(readonly, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *persistentId; // @synthesize persistentId=_persistentId;
- (void).cxx_destruct;
- (double)vx_startPosition;
- (_Bool)vx_isPartial;
- (_Bool)displayLikeIndication;
- (id)itemUUIDForIndication;
- (_Bool)vx_isLocal;
- (_Bool)vx_isDownloadable;
- (id)vx_infoText;
- (id)vx_infoURL;
- (id)vx_duration;
- (_Bool)vx_isPlayable;
- (id)vx_artworkURL;
- (id)vx_albumArtist;
- (id)vx_artist;
- (id)vx_trackNumber;
- (id)vx_trackName;
- (id)vx_album;
- (id)vx_mediaURL;
- (id)vx_sourceType;
- (id)vx_compareId;
- (id)vx_externalId;
- (id)vx_uuid;
- (id)channelDescription;
- (id)channelName;
- (id)mediaURL;
- (_Bool)isFavorited;
- (id)ftsSearchIndex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

