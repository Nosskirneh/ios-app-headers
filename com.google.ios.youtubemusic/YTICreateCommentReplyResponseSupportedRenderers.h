//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommentRenderer, YTIElementRenderer;

@interface YTICreateCommentReplyResponseSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommentRenderer *commentRenderer; // @dynamic commentRenderer;
@property(retain, nonatomic) YTIElementRenderer *elementRenderer; // @dynamic elementRenderer;
@property(nonatomic) _Bool hasCommentRenderer; // @dynamic hasCommentRenderer;
@property(nonatomic) _Bool hasElementRenderer; // @dynamic hasElementRenderer;

@end
