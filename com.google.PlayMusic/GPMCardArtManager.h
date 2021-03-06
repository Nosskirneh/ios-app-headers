//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GPMCardArtManager : NSObject
{
}

+ (id)getUniqueURLsFrom:(id)arg1 keyPath:(id)arg2 max:(unsigned long long)arg3;
+ (id)profileArtReqestForPlaylist:(id)arg1 size:(struct CGSize)arg2;
+ (id)profileArtReqestForAlbum:(id)arg1 size:(struct CGSize)arg2;
+ (id)profileArtReqestForStation:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForSituation:(id)arg1 size:(struct CGSize)arg2;
+ (void)artRequestForTrackList:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)artRequestForGenre:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)artRequestForVideo:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForExploreGenre:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForTrack:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForStation:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForArtist:(id)arg1 size:(struct CGSize)arg2;
+ (id)artRequestForAlbum:(id)arg1 size:(struct CGSize)arg2;
+ (void)artRequestforItem:(id)arg1 size:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

