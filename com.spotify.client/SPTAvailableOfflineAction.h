//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPAction.h"

@class NSURL, SPTCollectionPlatformFetchOptions;
@protocol SPTCollectionPlatform;

@interface SPTAvailableOfflineAction : SPAction
{
    _Bool _isOffline;
    NSURL *_offlineURL;
    id <SPTCollectionPlatform> _collectionPlatform;
    SPTCollectionPlatformFetchOptions *_collectionOptions;
}

@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
@property(retain, nonatomic) SPTCollectionPlatformFetchOptions *collectionOptions; // @synthesize collectionOptions=_collectionOptions;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(retain, nonatomic) NSURL *offlineURL; // @synthesize offlineURL=_offlineURL;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (_Bool)executeBeforeDismiss;
- (id)logEventName;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWithURL:(id)arg1 isOffline:(_Bool)arg2 collectionPlatform:(id)arg3 collectionOptions:(id)arg4 logContext:(id)arg5;

@end

