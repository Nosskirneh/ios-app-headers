//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistPlatformPlaylistMetadataFields-Protocol.h"

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface SPTPlaylistPlatformPlaylistMetadataFieldsImplementation : NSObject <SPTPlaylistPlatformPlaylistMetadataFields>
{
    _Bool _isFollowed;
    _Bool _isOwnedBySelf;
    _Bool _isCollaborative;
    _Bool _isPublished;
    _Bool _isLoaded;
    _Bool _canReportAnnotationAbuse;
    _Bool _containsTracks;
    _Bool _containsEpisodes;
    _Bool _containsAudioEpisodes;
    _Bool _preferLinearPlayback;
    NSString *_name;
    NSString *_freeformDescription;
    NSURL *_URL;
    NSURL *_imageURL;
    NSDictionary *_formatListAttributes;
    NSString *_formatListType;
    unsigned long long _totalLength;
    NSString *_ownerUsername;
    NSString *_ownerName;
    NSURL *_ownerLink;
    NSURL *_ownerImageURL;
    NSURL *_ownerThumbnailURL;
    unsigned long long _availableOfflineStatus;
    NSNumber *_followers;
    NSDate *_lastModifiedTime;
    double _duration;
    NSDate *_addedAt;
    NSString *_madeForName;
    NSString *_groupLabel;
}

@property(copy, nonatomic) NSString *groupLabel; // @synthesize groupLabel=_groupLabel;
@property(nonatomic) _Bool preferLinearPlayback; // @synthesize preferLinearPlayback=_preferLinearPlayback;
@property(nonatomic) _Bool containsAudioEpisodes; // @synthesize containsAudioEpisodes=_containsAudioEpisodes;
@property(nonatomic) _Bool containsEpisodes; // @synthesize containsEpisodes=_containsEpisodes;
@property(nonatomic) _Bool containsTracks; // @synthesize containsTracks=_containsTracks;
@property(copy, nonatomic) NSString *madeForName; // @synthesize madeForName=_madeForName;
@property(retain, nonatomic) NSDate *addedAt; // @synthesize addedAt=_addedAt;
@property(nonatomic) _Bool canReportAnnotationAbuse; // @synthesize canReportAnnotationAbuse=_canReportAnnotationAbuse;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *lastModifiedTime; // @synthesize lastModifiedTime=_lastModifiedTime;
@property(retain, nonatomic) NSNumber *followers; // @synthesize followers=_followers;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isPublished; // @synthesize isPublished=_isPublished;
@property(nonatomic) _Bool isCollaborative; // @synthesize isCollaborative=_isCollaborative;
@property(nonatomic) unsigned long long availableOfflineStatus; // @synthesize availableOfflineStatus=_availableOfflineStatus;
@property(retain, nonatomic) NSURL *ownerThumbnailURL; // @synthesize ownerThumbnailURL=_ownerThumbnailURL;
@property(retain, nonatomic) NSURL *ownerImageURL; // @synthesize ownerImageURL=_ownerImageURL;
@property(retain, nonatomic) NSURL *ownerLink; // @synthesize ownerLink=_ownerLink;
@property(copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(copy, nonatomic) NSString *ownerUsername; // @synthesize ownerUsername=_ownerUsername;
@property(nonatomic) _Bool isOwnedBySelf; // @synthesize isOwnedBySelf=_isOwnedBySelf;
@property(nonatomic) unsigned long long totalLength; // @synthesize totalLength=_totalLength;
@property(copy, nonatomic) NSString *formatListType; // @synthesize formatListType=_formatListType;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) NSDictionary *formatListAttributes; // @synthesize formatListAttributes=_formatListAttributes;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *freeformDescription; // @synthesize freeformDescription=_freeformDescription;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

