//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlaylistExtenderModelEffect.h"

@class NSString, NSURL;

@interface SPTPlaylistExtenderModelEffectSubscribeToPlaylistChanges : NSObject <SPTPlaylistExtenderModelEffect>
{
    NSURL *_playlistURL;
}

@property(readonly, nonatomic) NSURL *playlistURL; // @synthesize playlistURL=_playlistURL;
- (void).cxx_destruct;
- (void)processWithLoop:(id)arg1;
- (id)initWithPlaylistURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

