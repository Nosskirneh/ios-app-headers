//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCanvasNetworkStateObserverDelegate.h"
#import "SPTDataLoaderDelegate.h"

@class NSDictionary, NSString, NSTimer, SPTCanvasBackendParser, SPTCanvasCache, SPTCanvasNetworkStateObserver, SPTDataLoader;

@interface SPTCanvasBackendService : NSObject <SPTDataLoaderDelegate, SPTCanvasNetworkStateObserverDelegate>
{
    _Bool _enabled;
    NSDictionary *_canvasModelsByURI;
    SPTDataLoader *_dataLoader;
    SPTCanvasBackendParser *_dataParser;
    SPTCanvasNetworkStateObserver *_networkObserver;
    SPTCanvasCache *_diskCache;
    NSTimer *_refreshEnabledURIsTimer;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) NSTimer *refreshEnabledURIsTimer; // @synthesize refreshEnabledURIsTimer=_refreshEnabledURIsTimer;
@property(readonly, nonatomic) SPTCanvasCache *diskCache; // @synthesize diskCache=_diskCache;
@property(readonly, nonatomic) SPTCanvasNetworkStateObserver *networkObserver; // @synthesize networkObserver=_networkObserver;
@property(readonly, nonatomic) SPTCanvasBackendParser *dataParser; // @synthesize dataParser=_dataParser;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(copy, nonatomic) NSDictionary *canvasModelsByURI; // @synthesize canvasModelsByURI=_canvasModelsByURI;
- (void).cxx_destruct;
- (void)refreshDataForNetworkStateObserver:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleResponseForRequestUserInfo:(id)arg1 dictionary:(id)arg2;
- (void)loadFromCache;
- (void)refreshEnabledURIs;
- (void)startRefreshingEnabledURIs;
- (id)canvasEnabledResourcesURL;
- (void)disableService;
- (void)enableService;
- (id)initWithDataLoaderFactory:(id)arg1 dataParser:(id)arg2 networkObserver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
