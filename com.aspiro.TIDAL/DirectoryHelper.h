//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DirectoryHelper : NSObject
{
}

+ (double)spaceRequiredForDurationWithSelectedBitRate:(double)arg1 forQuality:(long long)arg2;
+ (double)freeDiskSpace;
+ (_Bool)isEnoughFreeDiskSpaceForTrackWithDuration:(double)arg1 soundQuality:(long long)arg2 requiredFreeSpaceInKb:(double)arg3;
+ (id)audioFileExtensionForCodec:(long long)arg1;
+ (id)getOfflineFilePathIfContentExists:(long long)arg1 itemUuid:(id)arg2;
+ (id)createOfflineFilePath:(long long)arg1 itemUuid:(id)arg2 codec:(long long)arg3;
+ (id)tempFilePathForMediaType:(long long)arg1 itemUuid:(id)arg2;
+ (id)tempFilePathWithExtensionForMediaType:(long long)arg1 itemUuid:(id)arg2;
+ (id)fileNameForMediaType:(long long)arg1 itemUuid:(id)arg2;
+ (id)storeURL;
+ (id)popyoularCacheDirectory;
+ (id)promoCacheDirectory;
+ (id)bookletCacheDirectory;
+ (id)facebookProfilesDirectory;
+ (id)applicationTemporaryDirectory;
+ (id)applicationCacheDirectory;
+ (id)favoritePlaylistsPath;
+ (id)favoriteArtistsPath;
+ (id)favoriteAlbumsPath;
+ (id)favoriteVideosPath;
+ (id)favoriteTracksPath;
+ (id)searchHistoryPath;
+ (id)applicationDocumentsDirectory;
+ (id)applicationPrivateOfflinePlaylistArtworkDirectory;
+ (id)applicationPrivateOfflineAlbumAnimatedArtworkDirectory;
+ (id)applicationPrivateOfflineAlbumArtworkDirectory;
+ (id)applicationPrivateOfflineMediaItemsDirectory;
+ (id)applicationPrivateDocumentsDirectory;
+ (void)createDirectories;

@end
