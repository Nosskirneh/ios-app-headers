//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface YTIDelayedEventRetryConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMaxNumberOfRetries; // @dynamic hasMaxNumberOfRetries;
@property(nonatomic) _Bool hasMaxRetryWindowMinutes; // @dynamic hasMaxRetryWindowMinutes;
@property(nonatomic) int maxNumberOfRetries; // @dynamic maxNumberOfRetries;
@property(nonatomic) int maxRetryWindowMinutes; // @dynamic maxRetryWindowMinutes;

@end

