//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LaunchEntityFetching-Protocol.h"

@class NSString, PermalinkService, RACDisposable, UrnService;

@interface LaunchEntityFetcher : NSObject <LaunchEntityFetching>
{
    UrnService *_urnService;
    PermalinkService *_permalinkService;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(readonly, nonatomic) PermalinkService *permalinkService; // @synthesize permalinkService=_permalinkService;
@property(readonly, nonatomic) UrnService *urnService; // @synthesize urnService=_urnService;
- (void).cxx_destruct;
- (id)performWithTimeout:(id)arg1;
- (void)fetchAndLaunchEntityFromURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)fetchAndLaunchEntityFromUrn:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)initWithUrnService:(id)arg1 permalinkService:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

