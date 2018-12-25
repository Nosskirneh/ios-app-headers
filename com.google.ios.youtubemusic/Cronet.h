//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Cronet : NSObject
{
}

+ (void)initialize;
+ (unsigned long long)getMetricsMapSize;
+ (id)createCronetErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)createUnsupportedConfigurationError:(id)arg1;
+ (id)createIllegalArgumentErrorWithArgument:(id)arg1 reason:(id)arg2;
+ (void)preventStrippingNativeCronetModules;
+ (void)preventStrippingCronetBidirectionalStream;
+ (void)setHostResolverRulesForTesting:(id)arg1;
+ (void)setMockCertVerifierForTesting:(unique_ptr_33e8c17e)arg1;
+ (void)enableTestCertVerifierForTesting;
+ (id)getGlobalMetricsDeltas;
+ (struct stream_engine *)getGlobalEngine;
+ (void)setNetworkThreadPriority:(double)arg1;
+ (id)getUserAgent;
+ (void)stopNetLog;
+ (_Bool)startNetLogToFile:(id)arg1 logBytes:(_Bool)arg2;
+ (id)getNetLogPathForFile:(id)arg1;
+ (void)installIntoSessionConfiguration:(id)arg1;
+ (void)unregisterHttpProtocolHandler;
+ (void)registerHttpProtocolHandler;
+ (void)shutdownForTesting;
+ (void)unswizzleForTesting;
+ (void)start;
+ (void)startInternal;
+     // Error parsing type: ^{SingleThreadTaskRunner=^^?{AtomicRefCount={atomic<int>=Ai}}}16@0:8, name: getNetworkThreadRunnerForTesting
+     // Error parsing type: ^{SingleThreadTaskRunner=^^?{AtomicRefCount={atomic<int>=Ai}}}16@0:8, name: getFileThreadRunnerForTesting
+ (void)setEnablePublicKeyPinningBypassForLocalTrustAnchors:(_Bool)arg1;
+ (_Bool)addPublicKeyPinsForHost:(id)arg1 pinHashes:(id)arg2 includeSubdomains:(_Bool)arg3 expirationDate:(id)arg4 error:(id *)arg5;
+ (void)setRequestFilterBlock:(CDUnknownBlockType)arg1;
+ (void)setHttpCacheType:(long long)arg1;
+ (void)setSslKeyLogFileName:(id)arg1;
+ (void)setUserAgent:(id)arg1 partial:(_Bool)arg2;
+ (void)setExperimentalOptions:(id)arg1;
+ (_Bool)addQuicHint:(id)arg1 port:(int)arg2 altPort:(int)arg3;
+ (void)setMetricsEnabled:(_Bool)arg1;
+ (void)setBrotliEnabled:(_Bool)arg1;
+ (void)setQuicEnabled:(_Bool)arg1;
+ (void)setHttp2Enabled:(_Bool)arg1;
+ (void)checkNotStarted;
+ (void)setAcceptLanguages:(id)arg1;
+ (id)getAcceptLanguages;
+ (id)getAcceptLanguagesFromPreferredLanguages:(id)arg1;
+ (void)configureCronetEnvironmentForTesting:(struct CronetEnvironment *)arg1;

@end

