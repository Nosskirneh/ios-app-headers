//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CoreDataStorageRequestControllerFactory;

@interface UserContentPlaylistStorageControllerFactory : NSObject
{
    CoreDataStorageRequestControllerFactory *_storageRequestControllerFactory;
}

@property(readonly, nonatomic) CoreDataStorageRequestControllerFactory *storageRequestControllerFactory; // @synthesize storageRequestControllerFactory=_storageRequestControllerFactory;
- (void).cxx_destruct;
- (id)commonPropertiesToFetch;
- (id)likedPropertiesToFetch;
- (id)postedPropertiesToFetch;
- (id)requestForUrn:(id)arg1 entityName:(id)arg2 properties:(id)arg3 sortDescriptor:(id)arg4 subpredicates:(id)arg5;
- (id)requestControllerForRequest:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)repostPlaylistForUserUrn:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)postPlaylistForUserUrn:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)postedReleaseForUserUrn:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)postedOrLikedPlaylistForUserUrn:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)likedPlaylistForUserUrn:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)postedPlaylistForUserUrn:(id)arg1 withMaxCount:(unsigned long long)arg2;
- (id)initWithStorageRequestControllerFactory:(id)arg1;
- (id)init;

@end
