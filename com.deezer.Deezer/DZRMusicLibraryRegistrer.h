//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSURL;

@interface DZRMusicLibraryRegistrer : NSObject
{
    NSString *_musicLibraryOwnerId;
    NSURL *_fileURLForRegisteredCollectionsIds;
    NSMutableArray *_registeredCollectionsIds;
}

@property(retain, nonatomic) NSMutableArray *registeredCollectionsIds; // @synthesize registeredCollectionsIds=_registeredCollectionsIds;
@property(retain, nonatomic) NSURL *fileURLForRegisteredCollectionsIds; // @synthesize fileURLForRegisteredCollectionsIds=_fileURLForRegisteredCollectionsIds;
@property(retain, nonatomic) NSString *musicLibraryOwnerId; // @synthesize musicLibraryOwnerId=_musicLibraryOwnerId;
- (void).cxx_destruct;
- (_Bool)unregisterAllCollectionsFromSynchronization;
- (_Bool)unregisterCollectionFromSynchronization:(id)arg1;
- (_Bool)registerCollectionForSynchronization:(id)arg1;
- (_Bool)isCollectionWithUniqueIDRegisteredForSynchronization:(id)arg1;
- (_Bool)isCollectionRegisteredForSynchronization:(id)arg1;
- (_Bool)hasCollectionsRegisteredForSynchronization;
- (_Bool)_saveCollectionsIDs;
- (_Bool)_openCollectionsIds;
- (void)_reloadCollectionsIds;
- (id)_registeredCollectionsIDsFileURL;
- (void)_createDirectoryIfNotExistAtURL:(id)arg1;
- (id)initWithOwnerID:(id)arg1;

@end

