//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIOfferPerkExtra, YTIOfferPerkItem, YTIOfferTextItem, YTIRenderer;

@interface YTIOfferDescriptionItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIOfferPerkExtra *extra; // @dynamic extra;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasPerk; // @dynamic hasPerk;
@property(nonatomic) _Bool hasPerkItem; // @dynamic hasPerkItem;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) YTIOfferPerkItem *perk; // @dynamic perk;
@property(retain, nonatomic) YTIRenderer *perkItem; // @dynamic perkItem;
@property(retain, nonatomic) YTIOfferTextItem *text; // @dynamic text;

@end
