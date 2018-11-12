//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTLocalFileTrackInfo-Protocol.h"

@class NSString, NSURL;

@interface SPTLocalFileCosmosTrackInfo : NSObject <SPTLocalFileTrackInfo>
{
    NSString *_title;
    NSURL *_imageURL;
    NSString *_artist;
    NSString *_albumTitle;
    NSURL *_URL;
    long long _playbackDuration;
}

@property(nonatomic) long long playbackDuration; // @synthesize playbackDuration=_playbackDuration;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;
@property(retain, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *UUID;
- (id)initWithLocalFileInfo:(id)arg1 imageURL:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

