//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogOpeningPlaybackEvent.h"

@class NSDictionary, NSNumber, NSString;

@interface DeezerLogStartingTrackEvent : DeezerLogOpeningPlaybackEvent
{
    _Bool _originatesGetRadioEndpoint;
    _Bool _trackIsSyncedForOffline;
    _Bool _inOfflineMode;
    _Bool _isPlayingOverWifi;
    NSNumber *_playlogListeningType;
    NSString *_trackParentId;
    NSString *_trackContextId;
    NSNumber *_deviceSubType;
    NSString *_sessionId;
    NSNumber *_streamQuality;
    NSString *_audioFormat;
    NSString *_networkType;
    NSDictionary *_payload;
}

+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain, nonatomic) NSString *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) _Bool isPlayingOverWifi; // @synthesize isPlayingOverWifi=_isPlayingOverWifi;
@property(nonatomic) _Bool inOfflineMode; // @synthesize inOfflineMode=_inOfflineMode;
@property(retain, nonatomic) NSString *audioFormat; // @synthesize audioFormat=_audioFormat;
@property(retain, nonatomic) NSNumber *streamQuality; // @synthesize streamQuality=_streamQuality;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool trackIsSyncedForOffline; // @synthesize trackIsSyncedForOffline=_trackIsSyncedForOffline;
@property(nonatomic) _Bool originatesGetRadioEndpoint; // @synthesize originatesGetRadioEndpoint=_originatesGetRadioEndpoint;
@property(retain, nonatomic) NSNumber *deviceSubType; // @synthesize deviceSubType=_deviceSubType;
@property(retain, nonatomic) NSString *trackContextId; // @synthesize trackContextId=_trackContextId;
@property(retain, nonatomic) NSString *trackParentId; // @synthesize trackParentId=_trackParentId;
@property(retain, nonatomic) NSNumber *playlogListeningType; // @synthesize playlogListeningType=_playlogListeningType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isLiveRadio;

@end

