//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIThumbnailDetails;

@interface YTICommentStickerRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(retain, nonatomic) YTIFormattedString *comment; // @dynamic comment;
@property(retain, nonatomic) YTIFormattedString *commentAuthor; // @dynamic commentAuthor;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasComment; // @dynamic hasComment;
@property(nonatomic) _Bool hasCommentAuthor; // @dynamic hasCommentAuthor;

@end
