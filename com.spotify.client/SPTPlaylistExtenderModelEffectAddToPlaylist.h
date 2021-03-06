//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderModelEffect-Protocol.h"

@class NSString, NSURL;

@interface SPTPlaylistExtenderModelEffectAddToPlaylist : NSObject <SPTPlaylistExtenderModelEffect>
{
    NSURL *_playlistURL;
    NSURL *_trackURI;
}

@property(readonly, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (void)processWithLoop:(id)arg1;
- (id)initWithTrackURI:(id)arg1 playlistURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

