//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class ANGAlbumLikesChangeset;

@interface ANGLikedAlbumsLatestChangeset : RLMObject
{
    ANGAlbumLikesChangeset *_latestChangeset;
}

+ (id)currentLatestInRealm:(id)arg1;
+ (id)latestChangeset;
@property(retain, nonatomic) ANGAlbumLikesChangeset *latestChangeset; // @synthesize latestChangeset=_latestChangeset;
- (void).cxx_destruct;

@end

