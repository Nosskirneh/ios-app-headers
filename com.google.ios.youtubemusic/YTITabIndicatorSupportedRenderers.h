//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIHintRenderer, YTIUnseenContentCountRenderer;

@interface YTITabIndicatorSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHintRenderer; // @dynamic hasHintRenderer;
@property(nonatomic) _Bool hasUnseenContentCountRenderer; // @dynamic hasUnseenContentCountRenderer;
@property(retain, nonatomic) YTIHintRenderer *hintRenderer; // @dynamic hintRenderer;
@property(retain, nonatomic) YTIUnseenContentCountRenderer *unseenContentCountRenderer; // @dynamic unseenContentCountRenderer;

@end
