//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIWideEnrolledContactRenderer, YTIWideSuggestedContactRenderer;

@interface YTIInviteMorePanelContactSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasWideEnrolledContactRenderer; // @dynamic hasWideEnrolledContactRenderer;
@property(nonatomic) _Bool hasWideSuggestedContactRenderer; // @dynamic hasWideSuggestedContactRenderer;
@property(retain, nonatomic) YTIWideEnrolledContactRenderer *wideEnrolledContactRenderer; // @dynamic wideEnrolledContactRenderer;
@property(retain, nonatomic) YTIWideSuggestedContactRenderer *wideSuggestedContactRenderer; // @dynamic wideSuggestedContactRenderer;

@end

