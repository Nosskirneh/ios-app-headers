//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StartupOperation-Protocol.h"
#import "_TtP4Core21PerformanceProfilable_-Protocol.h"

@class Environment, NSString;

@interface StartupConfigureGoogleCast : NSObject <StartupOperation, _TtP4Core21PerformanceProfilable_>
{
    Environment *_environment;
}

+ (_Bool)shouldDispatchToMainThread;
@property(readonly, nonatomic) Environment *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long performanceMetricType;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

