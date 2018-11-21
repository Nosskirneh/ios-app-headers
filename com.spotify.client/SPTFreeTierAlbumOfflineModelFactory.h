//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SPTCollectionPlatform, SPTOfflineManager;

@interface SPTFreeTierAlbumOfflineModelFactory : NSObject
{
    id <SPTOfflineManager> _offlineManager;
    NSString *_username;
    id <SPTCollectionPlatform> _collectionPlatform;
}

@property(readonly, nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
- (void).cxx_destruct;
- (id)createAlbumOfflineModelForAlbumURI:(id)arg1;
- (id)initWithOfflineManager:(id)arg1 username:(id)arg2 collectionPlatform:(id)arg3;

@end

