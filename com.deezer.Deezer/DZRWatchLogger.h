//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerLogger.h"

@interface DZRWatchLogger : DeezerLogger
{
}

+ (id)loggingDomain;
+ (id)defaultLogger;
- (id)entryDictionaryForDeferredLoggingFromEvents:(id)arg1;
- (void)logWatchAppBecomeActiveWithDeviceInfo:(id)arg1;
- (void)logWatchAppLaunchWithDeviceInfo:(id)arg1;
- (void)logWatchPairedWithAppInstalled:(_Bool)arg1;
- (long long)onlinePolicy;

@end

