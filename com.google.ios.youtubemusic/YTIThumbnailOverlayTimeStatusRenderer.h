//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTIThumbnailOverlayTimeStatusRenderer : GPBMessage
{
}

+ (id)descriptor;
- (id)liveOrUpcomingText;

// Remaining properties
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;

@end

