//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDictionary;
@protocol StartupOperation, _TtP8Features23AppPerformanceProfiling_;

@interface AppLauncherOperation : NSOperation
{
    _Bool _operationIsFinished;
    _Bool _operationIsExecuting;
    Class _startupOperationClass;
    NSDictionary *_launchOptions;
    id <_TtP8Features23AppPerformanceProfiling_> _performanceProfiler;
    id <StartupOperation> _startupOperation;
}

@property(retain, nonatomic) id <StartupOperation> startupOperation; // @synthesize startupOperation=_startupOperation;
@property(nonatomic) _Bool operationIsExecuting; // @synthesize operationIsExecuting=_operationIsExecuting;
@property(nonatomic) _Bool operationIsFinished; // @synthesize operationIsFinished=_operationIsFinished;
@property(readonly, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> performanceProfiler; // @synthesize performanceProfiler=_performanceProfiler;
@property(readonly, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(readonly, nonatomic) Class startupOperationClass; // @synthesize startupOperationClass=_startupOperationClass;
- (void).cxx_destruct;
- (void)addDependencies:(id)arg1;
- (void)logOperationFinished;
- (id)instantiateStartupOperation;
- (id)description;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (_Bool)isAsynchronous;
- (void)start;
- (_Bool)shouldDispatchToMainThread;
- (id)initWithOperation:(Class)arg1 dependencies:(id)arg2 launchOptions:(id)arg3 performanceProfiler:(id)arg4;
- (id)initWithOperation:(Class)arg1 dependencies:(id)arg2 launchOptions:(id)arg3;
- (id)initWithOperation:(Class)arg1 launchOptions:(id)arg2;
- (id)initWithOperation:(Class)arg1 dependencies:(id)arg2;
- (id)initWithOperation:(Class)arg1;

@end
