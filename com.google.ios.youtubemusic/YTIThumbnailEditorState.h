//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIThumbnailEditorState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStillId; // @dynamic hasStillId;
@property(nonatomic) int stillId; // @dynamic stillId;
@property(retain, nonatomic) NSMutableArray *stillsArray; // @dynamic stillsArray;
@property(readonly, nonatomic) unsigned long long stillsArray_Count; // @dynamic stillsArray_Count;

@end

