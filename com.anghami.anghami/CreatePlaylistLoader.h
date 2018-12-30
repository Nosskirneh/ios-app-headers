//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class ANGPlaylist;

@interface CreatePlaylistLoader : Loader
{
    ANGPlaylist *_playlist;
}

@property(retain, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (_Bool)suppressAutomaticServerMessage;
- (id)generateRequest;
- (int)type;
- (id)initWithPlaylist:(id)arg1;
- (id)initWithPlaylist:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end
