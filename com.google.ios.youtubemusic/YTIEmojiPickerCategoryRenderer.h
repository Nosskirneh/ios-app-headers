//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString;

@interface YTIEmojiPickerCategoryRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *categoryId; // @dynamic categoryId;
@property(retain, nonatomic) NSMutableArray *emojiIdsArray; // @dynamic emojiIdsArray;
@property(readonly, nonatomic) unsigned long long emojiIdsArray_Count; // @dynamic emojiIdsArray_Count;
@property(nonatomic) _Bool hasCategoryId; // @dynamic hasCategoryId;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

