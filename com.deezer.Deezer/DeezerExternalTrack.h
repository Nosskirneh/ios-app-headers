//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerTrack.h"

#import "DZRLoggableMedia-Protocol.h"
#import "DZRPlayableExternalObject-Protocol.h"

@class MPMediaItemArtwork, NSString, NSURL;

@interface DeezerExternalTrack : DeezerTrack <DZRPlayableExternalObject, DZRLoggableMedia>
{
    NSURL *_externalDownloadURL;
    NSURL *_externalPictureURL;
}

+ (id)notNilStringForObject:(id)arg1;
+ (id)deezerURLfromString:(id)arg1;
+ (id)deezerExternalTrackFromDictionary:(id)arg1;
+ (id)mediaType;
@property(retain, nonatomic) NSURL *externalPictureURL; // @synthesize externalPictureURL=_externalPictureURL;
@property(retain, nonatomic) NSURL *externalDownloadURL; // @synthesize externalDownloadURL=_externalDownloadURL;
- (void).cxx_destruct;
- (id)coverURL800_800;
- (id)coverURL750_750;
- (id)coverURL340_340;
- (id)coverURL220_220;
- (id)coverURL80_80;
- (id)coverURL50_50;
- (id)coverURL30_30;
- (id)coverUrl;
- (_Bool)limitedPlayerActions;
- (_Bool)canBePlayed;
- (id)currentTrackUpdater;
- (_Bool)hasValidPlaybackProvisioning;
- (long long)fileFormat;
- (id)downloadableWithQualityLevel:(long long)arg1 canBeUsedOffline:(_Bool)arg2;
- (id)logPayload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MPMediaItemArtwork *nowPlayingArtwork;
@property(readonly) Class superclass;

@end
