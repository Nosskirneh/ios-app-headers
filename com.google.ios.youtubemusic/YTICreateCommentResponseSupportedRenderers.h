//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTICommentThreadRenderer, YTIElementRenderer;

@interface YTICreateCommentResponseSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommentThreadRenderer *commentThreadRenderer; // @dynamic commentThreadRenderer;
@property(retain, nonatomic) YTIElementRenderer *elementRenderer; // @dynamic elementRenderer;
@property(nonatomic) _Bool hasCommentThreadRenderer; // @dynamic hasCommentThreadRenderer;
@property(nonatomic) _Bool hasElementRenderer; // @dynamic hasElementRenderer;

@end

