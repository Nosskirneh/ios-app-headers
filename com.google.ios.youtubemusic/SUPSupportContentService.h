//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SUPReceiverConfig, SUPSupportContentCache, SUPSupportContentConfig;

@interface SUPSupportContentService : NSObject
{
    NSMutableDictionary *_fetchDictionary;
    SUPSupportContentCache *_cache;
    SUPSupportContentConfig *_config;
    SUPReceiverConfig *_receiverConfig;
}

@property(retain, nonatomic) SUPReceiverConfig *receiverConfig; // @synthesize receiverConfig=_receiverConfig;
@property(retain, nonatomic) SUPSupportContentConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) SUPSupportContentCache *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)callHandler:(CDUnknownBlockType)arg1 renderedContent:(id)arg2 error:(id)arg3;
- (void)callHandlers:(id)arg1 renderedContent:(id)arg2 error:(id)arg3;
- (void)retrieveRenderedContentForSearchQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestAndCacheRenderedContent:(id)arg1 cacheStorageType:(long long)arg2 previousResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)precacheSupportContentUnits:(id)arg1 cacheStorageType:(long long)arg2;
- (void)stopRetrievalOfContentUnit:(id)arg1;
- (void)retrieveRenderedContent:(id)arg1 cacheStorageType:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retrieveSurveyRenderedContent:(id)arg1 injectCaseID:(id)arg2 injectCSATResult:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithConfig:(id)arg1 receiverConfig:(id)arg2;

@end

