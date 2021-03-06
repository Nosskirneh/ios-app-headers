//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Loader.h"

@class NSArray, NSDictionary, NSString, Radio;

@interface RadioLoader : Loader
{
    _Bool _reportFirstSongAsRadio;
    _Bool _disableSkipLimit;
    _Bool _disableQueueRestrictions;
    _Bool _disablePlayerRestrictions;
    _Bool _disableAds;
    NSDictionary *_extraParams;
    NSArray *_listOfSongs;
    NSString *_radioTag;
    NSString *_radioId;
    NSString *_radioName;
    Radio *_radio;
    NSArray *_alreadyPlayed;
}

@property(retain, nonatomic) NSArray *alreadyPlayed; // @synthesize alreadyPlayed=_alreadyPlayed;
@property(retain, nonatomic) Radio *radio; // @synthesize radio=_radio;
@property(readonly, nonatomic) _Bool disableAds; // @synthesize disableAds=_disableAds;
@property(readonly, nonatomic) _Bool disablePlayerRestrictions; // @synthesize disablePlayerRestrictions=_disablePlayerRestrictions;
@property(readonly, nonatomic) _Bool disableQueueRestrictions; // @synthesize disableQueueRestrictions=_disableQueueRestrictions;
@property(readonly, nonatomic) _Bool disableSkipLimit; // @synthesize disableSkipLimit=_disableSkipLimit;
@property(retain, nonatomic) NSString *radioName; // @synthesize radioName=_radioName;
@property(retain, nonatomic) NSString *radioId; // @synthesize radioId=_radioId;
@property(retain, nonatomic) NSString *radioTag; // @synthesize radioTag=_radioTag;
@property(nonatomic) _Bool reportFirstSongAsRadio; // @synthesize reportFirstSongAsRadio=_reportFirstSongAsRadio;
@property(retain, nonatomic) NSArray *listOfSongs; // @synthesize listOfSongs=_listOfSongs;
@property(copy, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
- (void).cxx_destruct;
- (_Bool)processData:(id)arg1;
- (id)generateRequest;
- (int)type;
- (id)initWithRadio:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithRadio:(id)arg1 alreadyPlayed:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end

