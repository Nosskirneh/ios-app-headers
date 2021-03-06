//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiPlaylist, NSDate;

@interface MobileApiLikedPlaylist : MTLModel <MTLJSONSerializing>
{
    MobileApiPlaylist *_playlist;
    NSDate *_createdAt;
}

+ (id)createdAtJSONTransformer;
+ (id)playlistJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) MobileApiPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end

