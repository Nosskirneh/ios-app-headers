//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHImageProvider-Protocol.h"

@class NSArray, NSCache, NSFileManager, NSMutableDictionary, NSOperationQueue, NSString, NSURLSession;
@protocol OS_dispatch_queue, RHTimeService;

@interface RHImageCacheController : NSObject <RHImageProvider>
{
    NSMutableDictionary *_activeDeferreds;
    NSOperationQueue *_downloadQueue;
    NSCache *_imageCache;
    NSArray *_availableWidthsForArtists;
    NSArray *_availableWidthsForAlbums;
    NSArray *_availableWidthsForEditorials;
    NSArray *_availableWidthsForPlaylists;
    NSArray *_availableWidthsForTracks;
    NSArray *_availableWidthsForStations;
    NSArray *_availableWidthsForPlaceholder;
    NSArray *_availableWidthsForProfiles;
    NSArray *_availableWidthsForKids;
    NSArray *_availableSizesForCustomMemberImagePlaylist;
    NSObject<OS_dispatch_queue> *_filesystemQueue;
    id <RHTimeService> _timeService;
    NSURLSession *_session;
    NSFileManager *_fileManager;
    NSMutableDictionary *_lightPlaceHoldersForWidth;
    NSMutableDictionary *_darkPlaceHoldersForWidth;
    NSMutableDictionary *_kidsPlaceHoldersForWidth;
    struct CGSize _listCellImageSize;
    struct CGSize _miniPlayerImageSize;
}

+ (id)bestFitFrom:(id)arg1 forSize:(struct CGSize)arg2;
+ (id)defaultPrefixCacheKey:(id)arg1;
+ (id)prefixCacheKeyForPlaylist:(id)arg1;
+ (id)candidateKeysForItem:(id)arg1 width:(double)arg2 widths:(id)arg3 imageModifier:(id)arg4 header:(_Bool)arg5 cachePrefix:(id)arg6;
+ (id)darkPlaceholderImageForSize:(struct CGSize)arg1;
+ (id)placeholderImageForSize:(struct CGSize)arg1;
+ (id)placeholderImage;
@property(nonatomic) struct CGSize miniPlayerImageSize; // @synthesize miniPlayerImageSize=_miniPlayerImageSize;
@property(nonatomic) struct CGSize listCellImageSize; // @synthesize listCellImageSize=_listCellImageSize;
@property(retain, nonatomic) NSMutableDictionary *kidsPlaceHoldersForWidth; // @synthesize kidsPlaceHoldersForWidth=_kidsPlaceHoldersForWidth;
@property(retain, nonatomic) NSMutableDictionary *darkPlaceHoldersForWidth; // @synthesize darkPlaceHoldersForWidth=_darkPlaceHoldersForWidth;
@property(retain, nonatomic) NSMutableDictionary *lightPlaceHoldersForWidth; // @synthesize lightPlaceHoldersForWidth=_lightPlaceHoldersForWidth;
@property(readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) id <RHTimeService> timeService; // @synthesize timeService=_timeService;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *filesystemQueue; // @synthesize filesystemQueue=_filesystemQueue;
@property(retain, nonatomic) NSArray *availableSizesForCustomMemberImagePlaylist; // @synthesize availableSizesForCustomMemberImagePlaylist=_availableSizesForCustomMemberImagePlaylist;
@property(retain, nonatomic) NSArray *availableWidthsForKids; // @synthesize availableWidthsForKids=_availableWidthsForKids;
@property(retain, nonatomic) NSArray *availableWidthsForProfiles; // @synthesize availableWidthsForProfiles=_availableWidthsForProfiles;
@property(retain, nonatomic) NSArray *availableWidthsForPlaceholder; // @synthesize availableWidthsForPlaceholder=_availableWidthsForPlaceholder;
@property(retain, nonatomic) NSArray *availableWidthsForStations; // @synthesize availableWidthsForStations=_availableWidthsForStations;
@property(retain, nonatomic) NSArray *availableWidthsForTracks; // @synthesize availableWidthsForTracks=_availableWidthsForTracks;
@property(retain, nonatomic) NSArray *availableWidthsForPlaylists; // @synthesize availableWidthsForPlaylists=_availableWidthsForPlaylists;
@property(retain, nonatomic) NSArray *availableWidthsForEditorials; // @synthesize availableWidthsForEditorials=_availableWidthsForEditorials;
@property(retain, nonatomic) NSArray *availableWidthsForAlbums; // @synthesize availableWidthsForAlbums=_availableWidthsForAlbums;
@property(retain, nonatomic) NSArray *availableWidthsForArtists; // @synthesize availableWidthsForArtists=_availableWidthsForArtists;
@property(retain, nonatomic) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) NSMutableDictionary *activeDeferreds; // @synthesize activeDeferreds=_activeDeferreds;
- (void).cxx_destruct;
- (id)deferredImageForPlaylistId:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForTrackId:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)artistImageForPlaylist:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)gradientFilePathForCacheKey:(id)arg1;
- (id)blackRadialGradientWithTransparencyCenter:(double)arg1 edges:(double)arg2 size:(struct CGSize)arg3;
- (id)gradientOverlayWithStyle:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)handleLowMemoryWarning:(id)arg1;
- (void)clearStaleImageCacheItems;
- (id)deferredFilesystemImageWithImageData:(id)arg1 forCacheKey:(id)arg2 version:(unsigned long long)arg3;
- (id)fallbackImageURLForItem:(id)arg1 width:(double)arg2 header:(_Bool)arg3;
- (id)imageURLForItem:(id)arg1 width:(double)arg2 header:(_Bool)arg3;
- (id)deferredDownloadWithRequest:(id)arg1;
- (id)deferredDownloadWithURL:(id)arg1;
- (id)deferredServerImageForRequest:(id)arg1 cacheKey:(id)arg2 width:(double)arg3 imageModifier:(id)arg4 header:(_Bool)arg5 version:(unsigned long long)arg6;
- (id)deferredFilesystemImageForKeys:(id)arg1 version:(unsigned long long)arg2 fetchOnlyNonExpiredContent:(_Bool)arg3;
- (id)imageFromFilesystemForKeys:(id)arg1 version:(unsigned long long)arg2 fetchOnlyNonExpiredContent:(_Bool)arg3;
- (id)pathForImageCache;
- (id)pathForImageCacheKey:(id)arg1;
- (id)pendingDeferredForCacheKeys:(id)arg1;
- (void)removePendingDeferredForKey:(id)arg1;
- (void)setPendingDeferred:(id)arg1 forKey:(id)arg2;
- (id)cachedImageForKeys:(id)arg1 version:(unsigned long long)arg2 fetchOnlyNonExpiredContent:(_Bool)arg3;
- (unsigned long long)imageVersionForItem:(id)arg1;
- (double)optimalImageWidthForLargestDimension:(double)arg1 availableWidths:(id)arg2;
- (double)optimalImageWidthForViewSize:(struct CGSize)arg1 availableWidths:(id)arg2;
- (id)imageForImageRequest:(id)arg1 promise:(id *)arg2;
- (id)imageForItem:(id)arg1 width:(double)arg2 usePlaceholder:(_Bool)arg3 imageModifier:(id)arg4 promise:(id *)arg5 retrieveCachedOnly:(_Bool)arg6 header:(_Bool)arg7 cachePrefix:(id)arg8;
- (void)setInMemoryCacheImage:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (id)renderTimeStampOnImage:(id)arg1 timeStamp:(id)arg2;
- (id)imageForItem:(id)arg1 width:(double)arg2 usePlaceholder:(_Bool)arg3 imageModifier:(id)arg4 promise:(id *)arg5 header:(_Bool)arg6;
- (id)imageForItem:(id)arg1 width:(double)arg2 usePlaceholder:(_Bool)arg3 imageModifier:(id)arg4 promise:(id *)arg5;
- (id)imageForItem:(id)arg1 width:(double)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)imageForAvatar:(id)arg1 size:(struct CGSize)arg2 promise:(id *)arg3;
- (id)imageForStation:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 imageModifier:(id)arg4 promise:(id *)arg5;
- (id)imageForStation:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)urlForTrack:(id)arg1 size:(struct CGSize)arg2;
- (id)urlForPlaylist:(id)arg1 size:(struct CGSize)arg2;
- (id)deferredImageForGenre:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)imageForGenre:(id)arg1 size:(struct CGSize)arg2 promise:(id *)arg3;
- (id)imageForPlaylist:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 imageModifier:(id)arg4 promise:(id *)arg5 header:(_Bool)arg6;
- (id)imageForPlaylist:(id)arg1 size:(struct CGSize)arg2 imageModifier:(id)arg3 promise:(id *)arg4 header:(_Bool)arg5;
- (id)imageForPlaylist:(id)arg1 size:(struct CGSize)arg2 promise:(id *)arg3 header:(_Bool)arg4;
- (id)imageForPlaylist:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)imageForPlaylist:(id)arg1 size:(struct CGSize)arg2 promise:(id *)arg3;
- (id)imageForEditorialPost:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)imageForArtist:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)deferredImageForStation:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForCollage:(id)arg1 usePlaceholder:(_Bool)arg2;
- (id)deferredImageWithURL:(id)arg1 startImmediately:(_Bool)arg2 size:(struct CGSize)arg3 usePlaceholder:(_Bool)arg4;
- (id)deferredImageWithURL:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForAvatar:(id)arg1 size:(struct CGSize)arg2;
- (id)deferredImageForEditorialPost:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForPlaylist:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForTrack:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 cachedImageOnly:(_Bool)arg4;
- (id)deferredImageForTrack:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForArtist:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForAlbum:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3;
- (id)deferredImageForRequest:(id)arg1;
- (id)imageForAlbum:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 imageModifier:(id)arg4 promise:(id *)arg5;
- (id)imageForAlbum:(id)arg1 size:(struct CGSize)arg2 imageModifier:(id)arg3 promise:(id *)arg4;
- (id)imageForAlbum:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)imageForURL:(id)arg1 size:(struct CGSize)arg2 usePlaceholder:(_Bool)arg3 promise:(id *)arg4;
- (id)kidsPlaceholderImageForAvailableWidth:(double)arg1;
- (id)darkPlaceholderImageForAvailableWidth:(double)arg1;
- (id)placeholderImageForAvailableWidth:(double)arg1;
- (id)placeholderImageWithWidth:(double)arg1;
- (id)darkPlaceholderImageForSize:(struct CGSize)arg1;
- (id)placeholderImageForSize:(struct CGSize)arg1;
- (id)placeholderImage;
@property(readonly, nonatomic) _Bool canContactServer;
- (id)accountController;
- (void)dealloc;
- (id)initWithTimeService:(id)arg1 session:(id)arg2 fileManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

