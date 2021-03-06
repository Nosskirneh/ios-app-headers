//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext;

@interface YTIPlayerTokenRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasReferrer; // @dynamic hasReferrer;
@property(nonatomic) _Bool hasTargetHeight; // @dynamic hasTargetHeight;
@property(nonatomic) _Bool hasTargetWidth; // @dynamic hasTargetWidth;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(copy, nonatomic) NSString *referrer; // @dynamic referrer;
@property(nonatomic) unsigned int targetHeight; // @dynamic targetHeight;
@property(nonatomic) unsigned int targetWidth; // @dynamic targetWidth;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

