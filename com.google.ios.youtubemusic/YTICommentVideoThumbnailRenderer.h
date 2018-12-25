//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTICommentVideoThumbnailRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowVideoFilterRedirect; // @dynamic allowVideoFilterRedirect;
@property(nonatomic) _Bool hasAllowVideoFilterRedirect; // @dynamic hasAllowVideoFilterRedirect;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(nonatomic) _Bool hasViewCommentButton; // @dynamic hasViewCommentButton;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;
@property(retain, nonatomic) YTIRenderer *viewCommentButton; // @dynamic viewCommentButton;

@end

