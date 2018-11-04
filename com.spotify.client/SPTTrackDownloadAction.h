//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPAction.h"

@class NSString, NSURL;

@interface SPTTrackDownloadAction : SPAction
{
    _Bool _isOffline;
    id <SPTOfflineManager> _offlineManager;
    id <SPTCollectionPlatform> _collectionPlatform;
    NSURL *_trackURI;
    NSURL *_contextURI;
    NSString *_username;
    NSString *_logcontext;
}

@property(retain, nonatomic) NSString *logcontext; // @synthesize logcontext=_logcontext;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
@property(retain, nonatomic) NSURL *trackURI; // @synthesize trackURI=_trackURI;
@property(nonatomic) __weak id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(nonatomic) _Bool isOffline; // @synthesize isOffline=_isOffline;
- (void).cxx_destruct;
- (id)execute:(id)arg1;
- (id)offlineContextURL;
- (void)downloadSavedTrack;
- (void)saveAndDownloadTrack;
- (id)logEventName;
- (id)iconColor;
- (long long)icon;
- (id)title;
- (id)initWithTrackURI:(id)arg1 contextURI:(id)arg2 offlineManager:(id)arg3 collectionPlatform:(id)arg4 username:(id)arg5 logContext:(id)arg6;

@end
