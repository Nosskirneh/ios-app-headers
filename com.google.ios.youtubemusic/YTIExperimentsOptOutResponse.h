//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString, YTIResponseContext;

@interface YTIExperimentsOptOutResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTIFormattedString *text; // @dynamic text;
@property(copy, nonatomic) NSString *token; // @dynamic token;

@end

