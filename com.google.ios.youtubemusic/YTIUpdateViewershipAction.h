//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIVideoMainVideoViewCountSupportedRenderers, YTIVideoPrimaryInfoViewCountSupportedRenderers;

@interface YTIUpdateViewershipAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsEmpty; // @dynamic hasIsEmpty;
@property(nonatomic) _Bool hasViewCount; // @dynamic hasViewCount;
@property(nonatomic) _Bool hasViewership; // @dynamic hasViewership;
@property(nonatomic) _Bool isEmpty; // @dynamic isEmpty;
@property(retain, nonatomic) YTIVideoPrimaryInfoViewCountSupportedRenderers *viewCount; // @dynamic viewCount;
@property(retain, nonatomic) YTIVideoMainVideoViewCountSupportedRenderers *viewership; // @dynamic viewership;

@end
