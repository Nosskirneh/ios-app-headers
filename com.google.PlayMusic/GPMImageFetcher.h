//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GPMArtCache, MusicService;

@interface GPMImageFetcher : NSObject
{
    MusicService *_musicService;
    GPMArtCache *_artCache;
    struct CGSize _screenSize;
    _Bool _isPad;
    double _screenScale;
}

- (void).cxx_destruct;
- (id)fetchImageWithURL:(id)arg1 size:(struct CGSize)arg2 quality:(unsigned long long)arg3 operationSequence:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (struct CGSize)bucketSizeForSize:(struct CGSize)arg1;
- (id)initWithMusicService:(id)arg1 artCache:(id)arg2;
- (id)init;

@end
