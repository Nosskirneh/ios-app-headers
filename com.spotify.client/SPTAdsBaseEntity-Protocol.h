//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL, UIColor;
@protocol SPTAdsBaseEntity, SPTAdsBaseFeaturedAction, SPTAdsBaseReward, SPTAdsBaseVoiceModel;

@protocol SPTAdsBaseEntity <NSObject>
@property(readonly, copy, nonatomic) NSString *format;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly, copy, nonatomic) NSString *offerSubtitle;
@property(readonly, copy, nonatomic) NSString *offerTitle;
@property(readonly, copy, nonatomic) NSString *dependentSlot;
@property(readonly, copy, nonatomic) NSString *slot;
@property(readonly, copy, nonatomic) NSString *creativeID;
@property(readonly, copy, nonatomic) NSString *lineItemID;
@property(readonly, copy, nonatomic) NSString *orderID;
@property(readonly, nonatomic) UIColor *creativeColor;
@property(readonly, nonatomic) long long product;
@property(readonly, nonatomic) NSURL *coverArtURL;
@property(readonly, nonatomic) id <SPTAdsBaseVoiceModel> voice;
@property(readonly, nonatomic) id <SPTAdsBaseReward> reward;
@property(readonly, nonatomic, getter=isPhysicalButtonsSupported) _Bool physicalButtonsSupported;
@property(readonly, nonatomic) id <SPTAdsBaseFeaturedAction> featuredAction;
@property(readonly, nonatomic) NSURL *clickthroughURL;
@property(readonly, copy, nonatomic) NSString *actionText;
@property(readonly, nonatomic) double duration;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, nonatomic) _Bool isAudio;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) unsigned long long skipDelaySecs;
@property(readonly, nonatomic, getter=isSkippable) _Bool skippable;
@property(readonly, nonatomic, getter=isPreview) _Bool preview;
@property(readonly, nonatomic, getter=isDummy) _Bool dummy;
@property(readonly, copy, nonatomic) NSString *adPlaybackID;
@property(readonly, copy, nonatomic) NSString *identifier;
- (NSString *)adProductName;
- (_Bool)isEqualToAdsBaseEntity:(id <SPTAdsBaseEntity>)arg1;
@end

