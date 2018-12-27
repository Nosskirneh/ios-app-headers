//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StartupOperation-Protocol.h"
#import "_TtP4Core21PerformanceProfilable_-Protocol.h"

@class NSManagedObjectContext, NSString;
@protocol _TtP4Core10TechLogger_;

@interface StartupMonitorCoreData : NSObject <StartupOperation, _TtP4Core21PerformanceProfilable_>
{
    NSManagedObjectContext *_context;
    id <_TtP4Core10TechLogger_> _techLogger;
}

+ (_Bool)shouldDispatchToMainThread;
@property(readonly, nonatomic) id <_TtP4Core10TechLogger_> techLogger; // @synthesize techLogger=_techLogger;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (unsigned long long)countForEntityName:(id)arg1;
@property(readonly, nonatomic) unsigned long long performanceMetricType;
- (void)executeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithContext:(id)arg1 techLogger:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

