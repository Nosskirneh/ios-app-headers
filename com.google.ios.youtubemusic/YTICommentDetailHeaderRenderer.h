//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTICommentCreationSupportedRenderers, YTICommentRepliesSubMenuSupportedRenderers, YTIFormattedString;

@interface YTICommentDetailHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(nonatomic) _Bool hasRepliesCount; // @dynamic hasRepliesCount;
@property(nonatomic) _Bool hasReplyCreation; // @dynamic hasReplyCreation;
@property(nonatomic) _Bool hasSortMenu; // @dynamic hasSortMenu;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) YTIFormattedString *repliesCount; // @dynamic repliesCount;
@property(retain, nonatomic) YTICommentCreationSupportedRenderers *replyCreation; // @dynamic replyCreation;
@property(retain, nonatomic) YTICommentRepliesSubMenuSupportedRenderers *sortMenu; // @dynamic sortMenu;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;

@end

