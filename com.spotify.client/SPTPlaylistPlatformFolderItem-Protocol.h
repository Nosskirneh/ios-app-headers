//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformFolderMetadataFields, SPTPlaylistPlatformPlaylistMetadataFields;

@protocol SPTPlaylistPlatformFolderItem <NSObject>
@property(nonatomic, readonly) NSString *groupHeader;
@property(nonatomic, readonly) id <SPTPlaylistPlatformPlaylistMetadataFields> playlist;
@property(nonatomic, readonly) id <SPTPlaylistPlatformFolderMetadataFields> folder;
@end

