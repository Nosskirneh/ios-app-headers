//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIRenderer, YTIResponseContext;

@interface YTIGetGroupInviteLinkResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *commandsArray; // @dynamic commandsArray;
@property(readonly, nonatomic) unsigned long long commandsArray_Count; // @dynamic commandsArray_Count;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasShareGroupRenderer; // @dynamic hasShareGroupRenderer;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTIRenderer *shareGroupRenderer; // @dynamic shareGroupRenderer;

@end

