//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DeezerBasicLogger.h"

#import "DZRFileDownloadersSchedulerObserver-Protocol.h"

@class NSString;

@interface AudioDataConsumptionLogger : DeezerBasicLogger <DZRFileDownloadersSchedulerObserver>
{
}

+ (id)loggingParamsDictionaryFromEvent:(id)arg1;
+ (id)loggingChannel;
+ (id)loggingDomain;
- (void)scheduler:(id)arg1 didEndDownloaderWithEnding:(id)arg2;
- (void)scheduler:(id)arg1 didDownloadMoreBytes:(unsigned long long)arg2 forDownloadadble:(id)arg3 collectionID:(id)arg4 streamable:(_Bool)arg5 currentFileSize:(unsigned long long)arg6 expectedSize:(unsigned long long)arg7 bytesPerSecond:(unsigned long long)arg8;
- (void)scheduler:(id)arg1 didEnqueueDownloaderForDownloadadble:(id)arg2 streamable:(_Bool)arg3;
- (id)init;
- (long long)onlinePolicy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

