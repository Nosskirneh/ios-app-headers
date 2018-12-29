//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiLikedPlaylist, MobileApiPostedPlaylist;

@interface MobileApiPostedOrLikedPlaylist : MTLModel <MTLJSONSerializing>
{
    MobileApiPostedPlaylist *_postedPlaylist;
    MobileApiLikedPlaylist *_likedPlaylist;
}

+ (id)likedPlaylistJSONTransformer;
+ (id)postedPlaylistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) MobileApiLikedPlaylist *likedPlaylist; // @synthesize likedPlaylist=_likedPlaylist;
@property(copy, nonatomic) MobileApiPostedPlaylist *postedPlaylist; // @synthesize postedPlaylist=_postedPlaylist;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end
