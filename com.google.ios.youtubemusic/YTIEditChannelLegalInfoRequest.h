//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext;

@interface YTIEditChannelLegalInfoRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool autoscroll; // @dynamic autoscroll;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasAutoscroll; // @dynamic hasAutoscroll;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasLegalText; // @dynamic hasLegalText;
@property(copy, nonatomic) NSString *legalText; // @dynamic legalText;

@end

