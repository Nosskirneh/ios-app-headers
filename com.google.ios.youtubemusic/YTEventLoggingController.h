//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDelayedEventWorkerHandler-Protocol.h"
#import "YTEventLogger-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"

@class GIMMe, NSDate, NSMutableDictionary, NSString, YTClientEventIdController, YTDelayedEventController, YTEventLoggingRetryController, YTEventLoggingService, YTHotConfig;
@protocol YTDelayedEventConfig, YTIdentityProvider, YTLastActionProvider, YTVisitorDataProvider;

@interface YTEventLoggingController : NSObject <YTHotConfigObserver, YTDelayedEventWorkerHandler, YTEventLogger>
{
    id <YTIdentityProvider> _identityProvider;
    id <YTVisitorDataProvider> _visitorDataProvider;
    YTEventLoggingService *_eventLoggingService;
    NSMutableDictionary *_payloadOverrides;
    NSDate *_forcedDate;
    id <YTLastActionProvider> _lactProvider;
    YTHotConfig *_hotConfig;
    id <YTDelayedEventConfig> _delayedEventConfig;
    NSMutableDictionary *_payloadConfigMap;
    YTClientEventIdController *_clientIdController;
    YTEventLoggingRetryController *_retryController;
    YTDelayedEventController *_delayedEventController;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)delayedEventController;
- (int)payloadTierForFieldNumber:(int)arg1;
- (_Bool)payloadEnabledForFieldNumber:(int)arg1;
- (id)currentDate;
- (void)setForcedDate:(id)arg1;
- (void)applyOverrides:(id)arg1;
- (void)hotConfigDidChange:(id)arg1;
- (void)handleEvents:(id)arg1 withEventBatchKey:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (_Bool)shouldLogPayloadWithFieldNumber:(int)arg1;
- (_Bool)logClientEventsWithPayloadArrayBlock:(CDUnknownBlockType)arg1;
- (_Bool)logClientEventWithPayloadBlock:(CDUnknownBlockType)arg1 fieldNumber:(int)arg2 eventDate:(id)arg3;
- (_Bool)logClientEventWithPayloadBlock:(CDUnknownBlockType)arg1 fieldNumber:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
