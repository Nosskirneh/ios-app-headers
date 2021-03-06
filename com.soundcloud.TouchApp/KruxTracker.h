//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KruxTrackerController-Protocol.h"

@class KruxReachability, NSArray, NSBlockOperation, NSMutableArray, NSOperationQueue, NSString;

@interface KruxTracker : NSObject <KruxTrackerController>
{
    _Bool _debug;
    _Bool _dryRun;
    NSString *_configId;
    NSArray *_segments;
    NSOperationQueue *_operationQueue;
    NSBlockOperation *_configFetchOperation;
    KruxReachability *_reachability;
    NSString *publisher_uuid;
    NSString *site;
    NSString *pixel_url;
    NSString *event_url;
    NSString *userdata_url;
    _Bool locationService;
    NSMutableArray *extenalTrackers;
    long long cachePeriodSec;
    _Bool debug;
    _Bool dryRun;
    NSString *configId;
    NSArray *segments;
}

@property(retain) NSArray *segments; // @synthesize segments;
@property(retain) NSString *configId; // @synthesize configId;
@property _Bool dryRun; // @synthesize dryRun;
@property _Bool debug; // @synthesize debug;
- (void).cxx_destruct;
- (void)stopExternalTracker:(id)arg1;
- (void)addExternalTracker:(id)arg1;
- (void)runExternalFireEvent:(id)arg1 eventAttributes:(id)arg2 withError:(id *)arg3;
- (void)runExternalTrackPage:(id)arg1 pageAttributes:(id)arg2 userAttributes:(id)arg3 withError:(id *)arg4;
- (_Bool)getlocationService;
- (_Bool)fireEvent:(id)arg1 eventAttributes:(id)arg2 withError:(id *)arg3;
- (_Bool)trackPageView:(id)arg1 attributes:(id)arg2 withError:(id *)arg3;
- (_Bool)trackPageView:(id)arg1 pageAttributes:(id)arg2 userAttributes:(id)arg3 withError:(id *)arg4;
- (void)appendPrefix:(id)arg1 prefix:(id)arg2;
- (_Bool)check:(id *)arg1;
- (id)getFullUrl:(id)arg1 baseUrl:(id)arg2;
- (id)getUDID;
- (void)sendAsyncRequest:(id)arg1;
- (_Bool)sendSyncRequest:(id)arg1;
- (void)saveSegmentsCache;
- (id)getSegmentsDataFromCache;
- (void)fetchSegments;
- (void)handleNetworkChange:(id)arg1;
- (void)fetchConfig;
- (void)getSegments;
- (id)init;
- (id)initWithConfigId:(id)arg1;
- (id)initWithConfigIdandDebug:(id)arg1 debug_flag:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

