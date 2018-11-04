//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSString;

@interface DZRNativePaywallEvent : DeezerLogEvent
{
    NSString *_action;
    NSString *_origin;
    NSString *_boxId;
    NSString *_offerId;
    NSString *_productId;
    NSString *_abtestVersions;
}

+ (id)eventWithAction:(id)arg1 origin:(id)arg2 offerId:(id)arg3 productId:(id)arg4 boxId:(id)arg5 abtestVersions:(id)arg6;
+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(copy, nonatomic) NSString *abtestVersions; // @synthesize abtestVersions=_abtestVersions;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
@property(copy, nonatomic) NSString *boxId; // @synthesize boxId=_boxId;
@property(copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)displayedOffersString;
- (id)dictionary;
- (id)channelName;
- (_Bool)isVirtualEvent;

@end

