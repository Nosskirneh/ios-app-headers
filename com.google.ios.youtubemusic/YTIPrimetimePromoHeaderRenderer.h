//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTIPrimetimePromoHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *badge; // @dynamic badge;
@property(nonatomic) _Bool hasBadge; // @dynamic hasBadge;
@property(nonatomic) _Bool hasHeaderAlignmentStyle; // @dynamic hasHeaderAlignmentStyle;
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasLogo; // @dynamic hasLogo;
@property(nonatomic) int headerAlignmentStyle; // @dynamic headerAlignmentStyle;
@property(retain, nonatomic) YTIFormattedString *headline; // @dynamic headline;
@property(retain, nonatomic) YTIThumbnailDetails *logo; // @dynamic logo;

@end

