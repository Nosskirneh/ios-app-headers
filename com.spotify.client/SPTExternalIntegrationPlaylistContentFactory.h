//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPTExternalIntegrationPlaylistContentFactory : NSObject
{
}

+ (id)skipToTrackForTrackUID:(id)arg1;
+ (id)trackSubtitleFromMetadata:(id)arg1;
+ (id)playlistSubtitleFromMetadata:(id)arg1;
+ (id)folderItemsContentFromFolderItems:(id)arg1 requestOptions:(id)arg2 testManager:(id)arg3;
+ (id)folderContentFromMetadata:(id)arg1 requestOptions:(id)arg2;
+ (id)trackListContentFromMetadata:(id)arg1 playlistURI:(id)arg2 requestOptions:(id)arg3;
+ (id)playlistContentFromMetadata:(id)arg1 requestOptions:(id)arg2 testManager:(id)arg3;

@end
