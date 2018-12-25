//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTIFormattedString, YTIMenuSupportedRenderers;

@interface YTICommentClusterChipListRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *chipsArray; // @dynamic chipsArray;
@property(readonly, nonatomic) unsigned long long chipsArray_Count; // @dynamic chipsArray_Count;
@property(retain, nonatomic) YTIMenuSupportedRenderers *feedbackMenu; // @dynamic feedbackMenu;
@property(retain, nonatomic) YTIButtonSupportedRenderers *feedbackMenuButton; // @dynamic feedbackMenuButton;
@property(nonatomic) _Bool hasFeedbackMenu; // @dynamic hasFeedbackMenu;
@property(nonatomic) _Bool hasFeedbackMenuButton; // @dynamic hasFeedbackMenuButton;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
