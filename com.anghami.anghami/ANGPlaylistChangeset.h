//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGChangeset.h"

@class ANGPlaylist;

@interface ANGPlaylistChangeset : ANGChangeset
{
    int _changeType;
    ANGPlaylist *_playlist;
    ANGPlaylistChangeset *_parentChangeset;
}

@property(retain, nonatomic) ANGPlaylistChangeset *parentChangeset; // @synthesize parentChangeset=_parentChangeset;
@property(retain, nonatomic) ANGPlaylist *playlist; // @synthesize playlist=_playlist;
@property int changeType; // @synthesize changeType=_changeType;
- (void).cxx_destruct;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)description;

@end
