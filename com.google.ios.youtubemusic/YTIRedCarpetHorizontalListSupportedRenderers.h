//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIPosterRenderer, YTIRedCarpetPosterRenderer, YTIRedCarpetVideoRenderer;

@interface YTIRedCarpetHorizontalListSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPosterRenderer; // @dynamic hasPosterRenderer;
@property(nonatomic) _Bool hasRedCarpetPosterRenderer; // @dynamic hasRedCarpetPosterRenderer;
@property(nonatomic) _Bool hasRedCarpetVideoRenderer; // @dynamic hasRedCarpetVideoRenderer;
@property(retain, nonatomic) YTIPosterRenderer *posterRenderer; // @dynamic posterRenderer;
@property(retain, nonatomic) YTIRedCarpetPosterRenderer *redCarpetPosterRenderer; // @dynamic redCarpetPosterRenderer;
@property(retain, nonatomic) YTIRedCarpetVideoRenderer *redCarpetVideoRenderer; // @dynamic redCarpetVideoRenderer;

@end

