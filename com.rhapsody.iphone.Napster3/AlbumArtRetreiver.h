//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZDSPromise;

@interface AlbumArtRetreiver : NSObject
{
    ZDSPromise *_albumImagePromise;
}

@property(retain, nonatomic) ZDSPromise *albumImagePromise; // @synthesize albumImagePromise=_albumImagePromise;
- (void).cxx_destruct;
- (id)imageProvider;
- (void)albumArtForCurrentlyPlayingTrack;
- (void)didRetrieveAlbumArt:(id)arg1;

@end

