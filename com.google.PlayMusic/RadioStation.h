//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackList.h"

#import "ContainerRestoring-Protocol.h"
#import "GPMShareableItem-Protocol.h"
#import "PinnableContainer-Protocol.h"

@class GPMAdTargetingParameters, GPMImageRefList, MusicItem, NSNumber, NSString, RadioSeed, WoodstockSession;

@interface RadioStation : TrackList <GPMShareableItem, ContainerRestoring, PinnableContainer>
{
    _Bool _instantMix;
    _Bool _inMyLibrary;
    _Bool _endOfFeed;
    NSString *_name;
    GPMImageRefList *_imageRefList;
    GPMImageRefList *_compositeImageRefList;
    NSString *_clientID;
    RadioSeed *_radioSeed;
    NSString *_stationID;
    NSNumber *_rowID;
    NSNumber *_recentTimestamp;
    NSNumber *_lastModifiedTimestamp;
    NSString *_profileImageUrl;
    NSString *_highlightColorString;
    MusicItem *_seedItem;
    NSString *_detailString;
    NSString *_byline;
    long long _source;
    WoodstockSession *_woodstockSession;
    NSString *_searchEntryContext;
    GPMAdTargetingParameters *_adTargetingParameters;
}

+ (id)IFLStation;
+ (id)radioStationForSeedItem:(id)arg1;
@property(retain, nonatomic) GPMAdTargetingParameters *adTargetingParameters; // @synthesize adTargetingParameters=_adTargetingParameters;
@property(copy, nonatomic) NSString *searchEntryContext; // @synthesize searchEntryContext=_searchEntryContext;
@property(retain, nonatomic) WoodstockSession *woodstockSession; // @synthesize woodstockSession=_woodstockSession;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic, getter=isEndOfFeed) _Bool endOfFeed; // @synthesize endOfFeed=_endOfFeed;
@property(copy, nonatomic) NSString *byline; // @synthesize byline=_byline;
@property(copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(retain, nonatomic) MusicItem *seedItem; // @synthesize seedItem=_seedItem;
@property(nonatomic, getter=isInMyLibrary) _Bool inMyLibrary; // @synthesize inMyLibrary=_inMyLibrary;
@property(copy, nonatomic) NSString *highlightColorString; // @synthesize highlightColorString=_highlightColorString;
@property(copy, nonatomic) NSString *profileImageUrl; // @synthesize profileImageUrl=_profileImageUrl;
@property(retain, nonatomic) NSNumber *lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(retain, nonatomic) NSNumber *recentTimestamp; // @synthesize recentTimestamp=_recentTimestamp;
@property(retain, nonatomic) NSNumber *rowID; // @synthesize rowID=_rowID;
@property(copy, nonatomic) NSString *stationID; // @synthesize stationID=_stationID;
@property(retain, nonatomic) RadioSeed *radioSeed; // @synthesize radioSeed=_radioSeed;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) GPMImageRefList *compositeImageRefList; // @synthesize compositeImageRefList=_compositeImageRefList;
@property(retain, nonatomic) GPMImageRefList *imageRefList; // @synthesize imageRefList=_imageRefList;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)determineInstantMix;
- (void)restoreFromStateDictionary:(id)arg1;
- (id)stateDictionaryToSave;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)supportedContextMenuKeysForAvailabilityState:(unsigned long long)arg1;
- (id)queueableContainerInfo;
- (void)lookupLockerPinnableContainerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pinnableContainerInfo;
- (id)sjRadioStation;
@property(nonatomic, getter=isInstantMix) _Bool instantMix; // @synthesize instantMix=_instantMix;
- (_Bool)hasContextMenu;
- (_Bool)isIFLStation;
- (_Bool)isWoodstockStation;
- (_Bool)isEphemeralStation;
- (_Bool)isLockerStation;
- (_Bool)isListenNowRecommendedStation;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) unsigned long long numberOfTracksToRequestFromStationFeed;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSJRadioStation:(id)arg1;
- (id)init;
- (id)sharingURLTitleText;
- (id)sharingSubject;
- (void)sharingURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isShareableWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)tagDictionary;
- (id)detailPageInfo;
- (id)playLogContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

