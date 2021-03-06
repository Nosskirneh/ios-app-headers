//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTAsyncScheduler, SPTAuthLoginTaskDelegate;

@interface SPTAuthLoginTask : NSObject
{
    struct once_flag _startOnceFlag;
    struct unique_ptr<spotify::connectivity::auth::objc::impl::SPTAuthSchedulerBridge, std::__1::default_delete<spotify::connectivity::auth::objc::impl::SPTAuthSchedulerBridge>> _scheduler;
    function_1d11ba22 _callback;
    id <SPTAuthLoginTaskDelegate> _delegate;
    CDUnknownBlockType _startOperation;
    CDUnknownBlockType _cancelOperation;
    id <SPTAsyncScheduler> _coreScheduler;
}

@property(nonatomic) __weak id <SPTAsyncScheduler> coreScheduler; // @synthesize coreScheduler=_coreScheduler;
@property(copy, nonatomic) CDUnknownBlockType cancelOperation; // @synthesize cancelOperation=_cancelOperation;
@property(copy, nonatomic) CDUnknownBlockType startOperation; // @synthesize startOperation=_startOperation;
@property(readonly, nonatomic) __weak id <SPTAuthLoginTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Scheduler *scheduler;
@property(readonly, nonatomic) const function_1d11ba22 *callback;
- (void)cancel;
- (void)start;
- (void)setDelegate:(id)arg1 onScheduler:(id)arg2;
- (void)dealloc;
- (id)initWithStartOperation:(CDUnknownBlockType)arg1 cancelOperation:(CDUnknownBlockType)arg2 coreScheduler:(id)arg3;

@end

