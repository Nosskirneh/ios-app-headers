//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIFormattedString;

@interface YTIReplaceCommentContentAction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *commentId; // @dynamic commentId;
@property(retain, nonatomic) YTIFormattedString *contentText; // @dynamic contentText;
@property(nonatomic) _Bool hasCommentId; // @dynamic hasCommentId;
@property(nonatomic) _Bool hasContentText; // @dynamic hasContentText;

@end

