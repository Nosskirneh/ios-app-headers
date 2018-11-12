//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPlaylistPlatformDataLoaderResponse.h"

#import "SPTPlaylistPlatformFolderItem-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformFolderMetadataFields, SPTPlaylistPlatformPlaylistMetadataFields;

@interface SPTPlaylistPlatformFolderResponse : SPTPlaylistPlatformDataLoaderResponse <SPTPlaylistPlatformFolderItem>
{
    id <SPTPlaylistPlatformFolderMetadataFields> folder;
    id <SPTPlaylistPlatformPlaylistMetadataFields> playlist;
    NSString *groupHeader;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *groupHeader; // @synthesize groupHeader;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistMetadataFields> playlist; // @synthesize playlist;
@property(readonly, nonatomic) id <SPTPlaylistPlatformFolderMetadataFields> folder; // @synthesize folder;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

