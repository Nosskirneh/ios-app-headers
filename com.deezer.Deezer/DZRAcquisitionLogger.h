//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRAdsLogger.h"

@interface DZRAcquisitionLogger : DZRAdsLogger
{
}

+ (id)defaultLogger;
+ (id)loggingDomain;
- (long long)onlinePolicy;
- (id)userID;
- (id)_formatLogDictionaryFromEvents:(id)arg1;
- (id)entryDictionaryForImmediateLoggingFromEvents:(id)arg1 withFollowingOpeningEvent:(id)arg2;
- (id)entryDictionaryForDeferredLoggingFromEvents:(id)arg1;
- (void)logUTMsFromDictionary:(id)arg1;

@end

