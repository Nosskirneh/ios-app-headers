//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIInvalidationContinuationData, YTILiveChatReplayContinuationData, YTIPlayerSeekContinuationData, YTIReloadContinuationData, YTITimedContinuationData;

@interface YTILiveChatSupportedContinuations : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInvalidationContinuationData; // @dynamic hasInvalidationContinuationData;
@property(nonatomic) _Bool hasLiveChatReplayContinuationData; // @dynamic hasLiveChatReplayContinuationData;
@property(nonatomic) _Bool hasPlayerSeekContinuationData; // @dynamic hasPlayerSeekContinuationData;
@property(nonatomic) _Bool hasReloadContinuationData; // @dynamic hasReloadContinuationData;
@property(nonatomic) _Bool hasTimedContinuationData; // @dynamic hasTimedContinuationData;
@property(retain, nonatomic) YTIInvalidationContinuationData *invalidationContinuationData; // @dynamic invalidationContinuationData;
@property(retain, nonatomic) YTILiveChatReplayContinuationData *liveChatReplayContinuationData; // @dynamic liveChatReplayContinuationData;
@property(retain, nonatomic) YTIPlayerSeekContinuationData *playerSeekContinuationData; // @dynamic playerSeekContinuationData;
@property(retain, nonatomic) YTIReloadContinuationData *reloadContinuationData; // @dynamic reloadContinuationData;
@property(retain, nonatomic) YTITimedContinuationData *timedContinuationData; // @dynamic timedContinuationData;

@end

