//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIMobileStreamEndscreenRenderer, YTIStreamEndscreenRenderer;

@interface YTIStopBroadcastDetailsSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMobileStreamEndscreenRenderer; // @dynamic hasMobileStreamEndscreenRenderer;
@property(nonatomic) _Bool hasStreamEndscreenRenderer; // @dynamic hasStreamEndscreenRenderer;
@property(retain, nonatomic) YTIMobileStreamEndscreenRenderer *mobileStreamEndscreenRenderer; // @dynamic mobileStreamEndscreenRenderer;
@property(retain, nonatomic) YTIStreamEndscreenRenderer *streamEndscreenRenderer; // @dynamic streamEndscreenRenderer;

@end

