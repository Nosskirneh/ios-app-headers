//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIInnerTubeContext, YTIMediaBrowserClientInfo;

@interface YTIGetRootMediaItemsRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int childDepth; // @dynamic childDepth;
@property(retain, nonatomic) YTIMediaBrowserClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasChildDepth; // @dynamic hasChildDepth;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;

@end

