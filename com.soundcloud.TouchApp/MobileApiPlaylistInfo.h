//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiCollection, MobileApiPlaylist;

@interface MobileApiPlaylistInfo : MTLModel <MTLJSONSerializing>
{
    MobileApiPlaylist *_playlist;
    MobileApiCollection *_tracks;
}

+ (id)tracksJSONTransformer;
+ (id)playlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) MobileApiCollection *tracks; // @synthesize tracks=_tracks;
@property(retain, nonatomic) MobileApiPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end

