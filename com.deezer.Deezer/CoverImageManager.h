//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CoverImageManager : NSObject
{
}

+ (id)keyForURLs:(id)arg1;
+ (id)workingQueue;
+ (id)downloadQueue;
+ (id)retinaURL:(id)arg1;
+ (id)loadImageWithKey:(id)arg1 strategy:(unsigned long long)arg2;
+ (id)loadImageWithURL:(id)arg1 strategy:(unsigned long long)arg2;
+ (id)sharedManager;
+ (struct CGSize)nowPlayingArtworkSize;
- (_Bool)cancelDownloadInProgressWithDownloadId:(id)arg1;
- (id)playlistCoverImageFromImages:(id)arg1 size:(struct CGSize)arg2;
- (id)downloadPlaylistCoverWithURLs:(id)arg1 size:(struct CGSize)arg2 storeStrategy:(unsigned long long)arg3 imageRepresentationType:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURL:(id)arg1 coverType:(unsigned long long)arg2 size:(struct CGSize)arg3 storeStrategy:(unsigned long long)arg4 imageRepresentationType:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (_Bool)saveImage:(id)arg1 forKey:(id)arg2 strategy:(unsigned long long)arg3 imageRepresentationType:(unsigned long long)arg4;
- (_Bool)saveImage:(id)arg1 forURL:(id)arg2 strategy:(unsigned long long)arg3 imageRepresentationType:(unsigned long long)arg4;
- (id)defaultCoverWithType:(unsigned long long)arg1 forSize:(struct CGSize)arg2;

@end

