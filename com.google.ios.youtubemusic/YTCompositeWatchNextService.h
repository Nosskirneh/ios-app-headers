//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTInnerTubeUIService-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class NSString, YTInnerTubeMultipleService;

@interface YTCompositeWatchNextService : NSObject <YTUserChangedObserver, YTInnerTubeUIService>
{
    YTInnerTubeMultipleService *_multipleService;
}

- (void).cxx_destruct;
- (void)userWillChange;
- (id)optionalRequestFromMandatoryRequest:(id)arg1;
- (id)mergeMandatoryResponse:(id)arg1 optionalResponse:(id)arg2;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)clearCaches;
- (Class)responseClass;
- (id)initWithMultipleService:(id)arg1 identityProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

