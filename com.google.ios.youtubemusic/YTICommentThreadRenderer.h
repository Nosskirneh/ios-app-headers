//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTICommentCreationSupportedRenderers, YTICommentDetailHeaderSupportedRenderers, YTICommentModerationPanelSupportedRenderers, YTICommentRepliesSupportedRenderers, YTICommentSupportedRenderers, YTICommentThreadFooterSupportedRenderers, YTIFormattedString, YTILoggingDirectives, YTIRenderer;

@interface YTICommentThreadRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIRenderer *backstagePostElementRenderer; // @dynamic backstagePostElementRenderer;
@property(retain, nonatomic) YTICommentSupportedRenderers *comment; // @dynamic comment;
@property(retain, nonatomic) YTIFormattedString *commentSourceText; // @dynamic commentSourceText;
@property(retain, nonatomic) YTIFormattedString *commentTargetTitle; // @dynamic commentTargetTitle;
@property(retain, nonatomic) YTIFormattedString *commentsDisabledMessage; // @dynamic commentsDisabledMessage;
@property(retain, nonatomic) YTICommentDetailHeaderSupportedRenderers *detailHeader; // @dynamic detailHeader;
@property(retain, nonatomic) YTICommentThreadFooterSupportedRenderers *footer; // @dynamic footer;
@property(nonatomic) _Bool hasBackstagePostElementRenderer; // @dynamic hasBackstagePostElementRenderer;
@property(nonatomic) _Bool hasComment; // @dynamic hasComment;
@property(nonatomic) _Bool hasCommentSourceText; // @dynamic hasCommentSourceText;
@property(nonatomic) _Bool hasCommentTargetTitle; // @dynamic hasCommentTargetTitle;
@property(nonatomic) _Bool hasCommentsDisabledMessage; // @dynamic hasCommentsDisabledMessage;
@property(nonatomic) _Bool hasDetailHeader; // @dynamic hasDetailHeader;
@property(nonatomic) _Bool hasFooter; // @dynamic hasFooter;
@property(nonatomic) _Bool hasHideSeparator; // @dynamic hasHideSeparator;
@property(nonatomic) _Bool hasIosEnableSyncCommentPages; // @dynamic hasIosEnableSyncCommentPages;
@property(nonatomic) _Bool hasIsBackstageContent; // @dynamic hasIsBackstageContent;
@property(nonatomic) _Bool hasLoggingDirectives; // @dynamic hasLoggingDirectives;
@property(nonatomic) _Bool hasModerationPanel; // @dynamic hasModerationPanel;
@property(nonatomic) _Bool hasPostsSubscribeBarElementRenderer; // @dynamic hasPostsSubscribeBarElementRenderer;
@property(nonatomic) _Bool hasPulseHighlight; // @dynamic hasPulseHighlight;
@property(nonatomic) _Bool hasRenderingPriority; // @dynamic hasRenderingPriority;
@property(nonatomic) _Bool hasReplies; // @dynamic hasReplies;
@property(nonatomic) _Bool hasReplyCreation; // @dynamic hasReplyCreation;
@property(nonatomic) _Bool hasSubscribeBar; // @dynamic hasSubscribeBar;
@property(nonatomic) _Bool hasTotalRepliesCountLabel; // @dynamic hasTotalRepliesCountLabel;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasVideoShelfElementRenderer; // @dynamic hasVideoShelfElementRenderer;
@property(nonatomic) _Bool hideSeparator; // @dynamic hideSeparator;
@property(nonatomic) _Bool iosEnableSyncCommentPages; // @dynamic iosEnableSyncCommentPages;
@property(nonatomic) _Bool isBackstageContent; // @dynamic isBackstageContent;
@property(retain, nonatomic) YTILoggingDirectives *loggingDirectives; // @dynamic loggingDirectives;
@property(retain, nonatomic) YTICommentModerationPanelSupportedRenderers *moderationPanel; // @dynamic moderationPanel;
@property(retain, nonatomic) YTIRenderer *postsSubscribeBarElementRenderer; // @dynamic postsSubscribeBarElementRenderer;
@property(nonatomic) _Bool pulseHighlight; // @dynamic pulseHighlight;
@property(nonatomic) int renderingPriority; // @dynamic renderingPriority;
@property(retain, nonatomic) YTICommentRepliesSupportedRenderers *replies; // @dynamic replies;
@property(retain, nonatomic) YTICommentCreationSupportedRenderers *replyCreation; // @dynamic replyCreation;
@property(retain, nonatomic) YTIRenderer *subscribeBar; // @dynamic subscribeBar;
@property(retain, nonatomic) YTIFormattedString *totalRepliesCountLabel; // @dynamic totalRepliesCountLabel;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIRenderer *videoShelfElementRenderer; // @dynamic videoShelfElementRenderer;

@end

