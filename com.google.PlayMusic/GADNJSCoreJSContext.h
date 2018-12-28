//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNJSContext.h"

#import "GADNEventContextSource-Protocol.h"

@class GADNEventContext, JSContext, JSVirtualMachine, NSString;

@interface GADNJSCoreJSContext : GADNJSContext <GADNEventContextSource>
{
    JSVirtualMachine *_virtualMachine;
    GADNEventContext *_eventContext;
    JSContext *_JSContext;
}

+ (void)initialize;
@property(readonly, nonatomic) JSContext *JSContext; // @synthesize JSContext=_JSContext;
@property(readonly, nonatomic) GADNEventContext *context; // @synthesize context=_eventContext;
- (void).cxx_destruct;
- (id)functionWithName:(id)arg1;
- (void)asyncEvaluateFunction:(id)arg1 parameters:(id)arg2;
- (void)evaluateScript:(id)arg1;
- (id)initWithEventContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

