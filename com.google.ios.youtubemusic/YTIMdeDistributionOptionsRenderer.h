//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTIMdeDistributionOptionsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowEmbedding; // @dynamic allowEmbedding;
@property(nonatomic) _Bool allowEmbeddingDisabled; // @dynamic allowEmbeddingDisabled;
@property(retain, nonatomic) YTIFormattedString *allowEmbeddingLabel; // @dynamic allowEmbeddingLabel;
@property(retain, nonatomic) YTIFormattedString *embeddingDisabledMessage; // @dynamic embeddingDisabledMessage;
@property(nonatomic) _Bool hasAllowEmbedding; // @dynamic hasAllowEmbedding;
@property(nonatomic) _Bool hasAllowEmbeddingDisabled; // @dynamic hasAllowEmbeddingDisabled;
@property(nonatomic) _Bool hasAllowEmbeddingLabel; // @dynamic hasAllowEmbeddingLabel;
@property(nonatomic) _Bool hasEmbeddingDisabledMessage; // @dynamic hasEmbeddingDisabledMessage;
@property(nonatomic) _Bool hasHelpText; // @dynamic hasHelpText;
@property(nonatomic) _Bool hasNotifySubscribers; // @dynamic hasNotifySubscribers;
@property(nonatomic) _Bool hasNotifySubscribersLabel; // @dynamic hasNotifySubscribersLabel;
@property(retain, nonatomic) YTIFormattedString *helpText; // @dynamic helpText;
@property(nonatomic) _Bool notifySubscribers; // @dynamic notifySubscribers;
@property(retain, nonatomic) YTIFormattedString *notifySubscribersLabel; // @dynamic notifySubscribersLabel;

@end
