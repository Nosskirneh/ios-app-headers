//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogEvent.h"

@class NSArray, NSString;

@interface DZRTrialEndEvent : DeezerLogEvent
{
    NSString *_action;
    NSString *_origin;
    NSArray *_offers;
    unsigned long long _selectedOfferID;
}

+ (id)eventWithAction:(id)arg1 origin:(id)arg2 offers:(id)arg3 selectedOfferID:(unsigned long long)arg4;
+ (int)logPhase;
+ (id)persistedPropertiesNames;
+ (id)filePrefix;
@property(nonatomic) unsigned long long selectedOfferID; // @synthesize selectedOfferID=_selectedOfferID;
@property(retain, nonatomic) NSArray *offers; // @synthesize offers=_offers;
@property(retain, nonatomic) NSString *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)displayedOffersString;
- (id)dictionary;
- (id)channelName;
- (_Bool)isVirtualEvent;

@end
