//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePlaceboBannerInteraction2 : SPTLogMessage
{
    NSString *_configurationIdValue;
    NSString *_interactionTypeValue;
    NSString *_interactionUriValue;
}

+ (id)messageWithConfigurationId:(id)arg1 interactionType:(id)arg2 interactionUri:(id)arg3;
@property(copy, nonatomic) NSString *interactionUriValue; // @synthesize interactionUriValue=_interactionUriValue;
@property(copy, nonatomic) NSString *interactionTypeValue; // @synthesize interactionTypeValue=_interactionTypeValue;
@property(copy, nonatomic) NSString *configurationIdValue; // @synthesize configurationIdValue=_configurationIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

