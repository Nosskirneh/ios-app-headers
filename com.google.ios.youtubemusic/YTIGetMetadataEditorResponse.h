//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIResponseContext;

@interface YTIGetMetadataEditorResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSaveMessage; // @dynamic hasSaveMessage;
@property(nonatomic) _Bool hasTitleMessage; // @dynamic hasTitleMessage;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTIFormattedString *saveMessage; // @dynamic saveMessage;
@property(retain, nonatomic) YTIFormattedString *titleMessage; // @dynamic titleMessage;

@end
