//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

#import "ANGNativeAdObject-Protocol.h"
#import "ActionableItem-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class ANGContentSectionContainer, ANGNativeAd, Artist, NSArray, NSDate, NSDictionary, NSString, RLMArray;
@protocol ANGLikedAlbumSong;

@interface ANGAlbum : RLMObject <ActionableItem, NSCoding, NSCopying, ANGNativeAdObject>
{
    _Bool _discardArtist;
    _Bool _isVerified;
    _Bool _clearDetails;
    _Bool _isDisabled;
    _Bool _isExclusive;
    _Bool _isExplicit;
    _Bool _isSponsored;
    _Bool _hideCreator;
    _Bool _isCreatorLinkDisabled;
    _Bool _hasVideo;
    _Bool _isReligious;
    _Bool _disableSkipLimit;
    _Bool _disableAds;
    _Bool _disableQueueRestrictions;
    _Bool _disablePlayerRestrictions;
    _Bool _discardAds;
    NSString *_title;
    NSString *_albumId;
    NSString *_coverArtId;
    NSString *_artistName;
    NSString *_artistId;
    NSString *_artistArtId;
    NSString *_details;
    NSArray *_contextSongs;
    RLMArray<ANGLikedAlbumSong> *_songsStorage;
    NSString *_disableDeeplinkString;
    NSString *_extras;
    long long _numberOfSongs;
    NSString *_genericId;
    ANGContentSectionContainer *_cachedSectionsContainer;
    NSString *_tagId;
    NSString *_superTitle;
    NSString *_superTitleColor;
    ANGNativeAd *_nativeAdLocal;
    NSDate *_releaseTimeStamp;
    NSString *_localAdTagParams;
}

+ (id)ignoredProperties;
+ (id)albumFromSong:(id)arg1;
@property(copy) NSString *localAdTagParams; // @synthesize localAdTagParams=_localAdTagParams;
@property(retain, nonatomic) NSDate *releaseTimeStamp; // @synthesize releaseTimeStamp=_releaseTimeStamp;
@property(retain, nonatomic) ANGNativeAd *nativeAdLocal; // @synthesize nativeAdLocal=_nativeAdLocal;
@property(readonly, nonatomic) NSString *superTitleColor; // @synthesize superTitleColor=_superTitleColor;
@property(readonly, nonatomic) NSString *superTitle; // @synthesize superTitle=_superTitle;
@property(nonatomic) _Bool discardAds; // @synthesize discardAds=_discardAds;
@property(nonatomic) _Bool disablePlayerRestrictions; // @synthesize disablePlayerRestrictions=_disablePlayerRestrictions;
@property(nonatomic) _Bool disableQueueRestrictions; // @synthesize disableQueueRestrictions=_disableQueueRestrictions;
@property(nonatomic) _Bool disableAds; // @synthesize disableAds=_disableAds;
@property(nonatomic) _Bool disableSkipLimit; // @synthesize disableSkipLimit=_disableSkipLimit;
@property(nonatomic) _Bool isReligious; // @synthesize isReligious=_isReligious;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property _Bool isCreatorLinkDisabled; // @synthesize isCreatorLinkDisabled=_isCreatorLinkDisabled;
@property _Bool hideCreator; // @synthesize hideCreator=_hideCreator;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
@property(nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(nonatomic) _Bool isExplicit; // @synthesize isExplicit=_isExplicit;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(retain, nonatomic) ANGContentSectionContainer *cachedSectionsContainer; // @synthesize cachedSectionsContainer=_cachedSectionsContainer;
@property(retain, nonatomic) NSString *genericId; // @synthesize genericId=_genericId;
@property long long numberOfSongs; // @synthesize numberOfSongs=_numberOfSongs;
@property(copy) NSString *extras; // @synthesize extras=_extras;
@property(retain, nonatomic) NSString *disableDeeplinkString; // @synthesize disableDeeplinkString=_disableDeeplinkString;
@property _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(retain, nonatomic) RLMArray<ANGLikedAlbumSong> *songsStorage; // @synthesize songsStorage=_songsStorage;
@property(retain, nonatomic) NSArray *contextSongs; // @synthesize contextSongs=_contextSongs;
@property _Bool clearDetails; // @synthesize clearDetails=_clearDetails;
@property(copy) NSString *details; // @synthesize details=_details;
@property _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(copy) NSString *artistArtId; // @synthesize artistArtId=_artistArtId;
@property(copy) NSString *artistId; // @synthesize artistId=_artistId;
@property _Bool discardArtist; // @synthesize discardArtist=_discardArtist;
@property(copy) NSString *artistName; // @synthesize artistName=_artistName;
@property(copy) NSString *coverArtId; // @synthesize coverArtId=_coverArtId;
@property(copy) NSString *albumId; // @synthesize albumId=_albumId;
@property(copy) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly) NSDictionary *adTagParams;
- (id)polarNativeAd;
- (_Bool)isNativeAd;
- (void)setCachedAd:(id)arg1;
- (_Bool)isCurrentlyPlaying;
- (id)videoAdMessage;
- (id)adId;
@property(readonly, copy) NSString *description;
- (_Bool)isEqualToAlbum:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)imageDownloadSpecWithSize:(long long)arg1;
@property(readonly) Artist *myArtist;
@property(readonly) NSString *releaseDate;
- (id)dictionary;
- (id)initWithAttributeDict:(id)arg1;
- (id)initWithTBXMLElement:(struct _TBXMLElement *)arg1;
- (void)playRadio;
- (_Bool)isAlbumCurrentlyPlayingDataSource:(id)arg1;
- (void)likeFrom:(id)arg1 disableReporting:(_Bool)arg2;
- (void)unlike;
- (void)like;
- (_Bool)isLiked;
- (void)shuffleAction:(id)arg1;
- (id)peekPopActions;
- (_Bool)radioEnabled;
- (void)goToArtistWithNavigationController:(id)arg1;
- (void)shareWithSource:(id)arg1;
- (void)playContextSongs;
- (void)playRelated;
- (void)playNow;
- (void)playNext;
- (void)addToPlaylist;
- (void)removeFromDownloads;
- (_Bool)downloadSource:(id)arg1;
- (_Bool)download;
- (_Bool)downloaded;
- (unsigned long long)downloadStatus;
- (id)subtitleText;
- (id)titleText;
- (void)loadData:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

