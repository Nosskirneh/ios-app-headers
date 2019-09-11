//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageStorylinesLoadEvent2 : SPTLogMessage
{
    NSString *_playbackIdValue;
    NSString *_storylineGidValue;
    NSString *_assetIdValue;
    NSString *_loadTypeValue;
    NSString *_eventValue;
    NSString *_sourceValue;
    NSString *_detailValue;
    NSString *_entityUriValue;
}

+ (id)messageWithPlaybackId:(id)arg1 storylineGid:(id)arg2 assetId:(id)arg3 loadType:(id)arg4 event:(id)arg5 source:(id)arg6 detail:(id)arg7 entityUri:(id)arg8;
@property(copy, nonatomic) NSString *entityUriValue; // @synthesize entityUriValue=_entityUriValue;
@property(copy, nonatomic) NSString *detailValue; // @synthesize detailValue=_detailValue;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSString *eventValue; // @synthesize eventValue=_eventValue;
@property(copy, nonatomic) NSString *loadTypeValue; // @synthesize loadTypeValue=_loadTypeValue;
@property(copy, nonatomic) NSString *assetIdValue; // @synthesize assetIdValue=_assetIdValue;
@property(copy, nonatomic) NSString *storylineGidValue; // @synthesize storylineGidValue=_storylineGidValue;
@property(copy, nonatomic) NSString *playbackIdValue; // @synthesize playbackIdValue=_playbackIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

