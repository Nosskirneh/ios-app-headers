//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFrameworkUpdateTransport, YTIResponseContext;

@interface YTISocialSharingSyncResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;

@end
