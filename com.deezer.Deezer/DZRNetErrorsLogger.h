//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogger.h"

@interface DZRNetErrorsLogger : DeezerLogger
{
}

+ (id)loggingDomain;
+ (id)defaultLogger;
- (id)entryDictionaryForDeferredLoggingFromEvents:(id)arg1;
- (void)logDZRNetRequestStart:(id)arg1;
- (void)logDZRNetRequest:(id)arg1 error:(id)arg2;
- (long long)onlinePolicy;

@end
