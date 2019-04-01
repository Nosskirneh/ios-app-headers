//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VOXSoundCloudTrackModel.h"

@class NSArray, NSString;

@interface VOXSoundCloudPlaylistModel : VOXSoundCloudTrackModel
{
    NSString *_tracksURL;
    long long _tracksCount;
    double _playListDuration;
    NSArray *_tracks;
}

+ (id)modelFromSerializedRepresentation:(id)arg1;
@property(retain, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(nonatomic) double playListDuration; // @synthesize playListDuration=_playListDuration;
@property(nonatomic) long long tracksCount; // @synthesize tracksCount=_tracksCount;
@property(retain, nonatomic) NSString *tracksURL; // @synthesize tracksURL=_tracksURL;
- (void).cxx_destruct;
- (id)initWithEntityRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

