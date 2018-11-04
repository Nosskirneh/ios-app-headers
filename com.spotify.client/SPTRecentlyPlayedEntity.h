//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionEntityListOfflineSupportedItem.h"

@class NSDate, NSString, NSURL;

@interface SPTRecentlyPlayedEntity : NSObject <SPTCollectionEntityListOfflineSupportedItem>
{
    _Bool _hasMetadata;
    _Bool _isVideoMediaType;
    _Bool _hidden;
    _Bool _evaluateOfflineSyncStatus;
    _Bool _isInCollection;
    NSURL *_originalEntityURL;
    NSString *_title;
    NSString *_subtitle;
    NSURL *_imageURL;
    NSURL *_currentTrackUrl;
    long long _icon;
    unsigned long long _contentType;
    long long _availableOfflineStatus;
    id <SPTCollectionPlatformTestManager> _collectionTestManager;
    id <SPTOfflineModeState> _offlineNotifier;
    NSURL *_collectionURL;
    unsigned long long _tracksInCollectionCount;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSDate *_timestamp;
}

+ (id)recentlyPlayedEntityWithDictionary:(id)arg1 collectionTestManager:(id)arg2 featureFlags:(id)arg3 offlineNotifier:(id)arg4 linkDispatcher:(id)arg5 evaluateOfflineSyncStatus:(_Bool)arg6;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) __weak id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(nonatomic) unsigned long long tracksInCollectionCount; // @synthesize tracksInCollectionCount=_tracksInCollectionCount;
@property(copy, nonatomic) NSURL *collectionURL; // @synthesize collectionURL=_collectionURL;
@property(nonatomic) _Bool isInCollection; // @synthesize isInCollection=_isInCollection;
@property(nonatomic) _Bool evaluateOfflineSyncStatus; // @synthesize evaluateOfflineSyncStatus=_evaluateOfflineSyncStatus;
@property(nonatomic) __weak id <SPTOfflineModeState> offlineNotifier; // @synthesize offlineNotifier=_offlineNotifier;
@property(nonatomic) __weak id <SPTCollectionPlatformTestManager> collectionTestManager; // @synthesize collectionTestManager=_collectionTestManager;
@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool isVideoMediaType; // @synthesize isVideoMediaType=_isVideoMediaType;
@property(nonatomic) long long availableOfflineStatus; // @synthesize availableOfflineStatus=_availableOfflineStatus;
@property(nonatomic) unsigned long long contentType; // @synthesize contentType=_contentType;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSURL *currentTrackUrl; // @synthesize currentTrackUrl=_currentTrackUrl;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *originalEntityURL; // @synthesize originalEntityURL=_originalEntityURL;
@property(nonatomic) _Bool hasMetadata; // @synthesize hasMetadata=_hasMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *previewURL;
- (void)action;
@property(readonly, copy, nonatomic) NSString *loggingContext;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)handleShortcutItemAction;
- (id)internalURLFromSpotifyURI:(id)arg1;
@property(readonly, nonatomic) NSURL *offlineURL;
@property(readonly, copy, nonatomic) NSURL *navigatableEntityURL;
- (_Bool)collectionContainsSongsFromArtistUrl:(id)arg1;
- (_Bool)collectionContainsAlbumOrArtistUrl:(id)arg1;
- (_Bool)alwaysNavigateToCatalogueAlbum;
@property(readonly, copy, nonatomic) NSURL *trackURL;
@property(readonly, copy, nonatomic) NSURL *entityURL;
@property(readonly, nonatomic) NSURL *canonicalEntityURL;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1 linkDispatcher:(id)arg2;
- (id)initWithURL:(id)arg1 andTrackURL:(id)arg2 timestamp:(id)arg3 linkDispatcher:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool isNew;
@property(readonly, nonatomic) NSDate *publishDate;
@property(readonly) Class superclass;

@end

