//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIStickerPageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNumColumns; // @dynamic hasNumColumns;
@property(nonatomic) int numColumns; // @dynamic numColumns;
@property(retain, nonatomic) NSMutableArray *stickersArray; // @dynamic stickersArray;
@property(readonly, nonatomic) unsigned long long stickersArray_Count; // @dynamic stickersArray_Count;

@end
