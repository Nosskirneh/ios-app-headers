//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YTPrewarmConnection : NSObject
{
}

+ (id)headRequestWithHostUrl:(id)arg1;
+ (void)prewarmConnectionGTMSessionFetcherWithHostUrl:(id)arg1 fetcherService:(id)arg2;
+ (void)prewarmConnectionsWithHostUrls:(id)arg1 fetcherService:(id)arg2;
+ (void)prewarmOtherHostnamesWithConfig:(id)arg1 gimme:(id)arg2;
+ (void)prewarmConnectionWithInnerTubeHostUrl:(id)arg1 startupPrewarmingMode:(int)arg2 gimme:(id)arg3;
+ (void)prefetchDnsWithHostUrl:(id)arg1;
+ (void)prefetchDnsWithHostUrls:(id)arg1;
+ (void)prefetchOtherHostUrlsDnsWithConfig:(id)arg1;
+ (void)prefetchDnsWithInnerTubeHostUrl:(id)arg1 startupPrewarmingMode:(int)arg2;
+ (void)prewarmConnectionWithInnerTubeHostUrl:(id)arg1 gimme:(id)arg2 config:(id)arg3 launchedInBackground:(_Bool)arg4;
+ (void)prewarmDNSWithInnerTubeHostUrl:(id)arg1 config:(id)arg2 launchedInBackground:(_Bool)arg3;

@end

