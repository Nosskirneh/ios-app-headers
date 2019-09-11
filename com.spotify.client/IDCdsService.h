//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IDService.h"

@class IDVersionInfo, NSMutableSet, NSOperationQueue;

@interface IDCdsService : IDService
{
    IDVersionInfo *_versionInfo;
    NSMutableSet *_propertyChangedEventObservers;
    NSMutableSet *_propertyAsyncGetObservers;
    NSOperationQueue *_callbackQueue;
}

@property(readonly) NSOperationQueue *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(readonly) NSMutableSet *propertyAsyncGetObservers; // @synthesize propertyAsyncGetObservers=_propertyAsyncGetObservers;
@property(readonly) NSMutableSet *propertyChangedEventObservers; // @synthesize propertyChangedEventObservers=_propertyChangedEventObservers;
@property(retain) IDVersionInfo *versionInfo; // @synthesize versionInfo=_versionInfo;
- (void).cxx_destruct;
- (void)session:(id)arg1 cdsService:(long long)arg2 handlePropertyChanged:(id)arg3 value:(id)arg4;
- (void)session:(id)arg1 cdsService:(long long)arg2 receivedProperty:(id)arg3 value:(id)arg4 requestIdentifier:(id)arg5;
- (void)setProperty:(id)arg1 value:(id)arg2 requestIdentifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setProperty:(id)arg1 value:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)asyncGetProperty:(id)arg1 requestIdentifier:(id)arg2 target:(id)arg3 selector:(SEL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)asyncGetProperty:(id)arg1 target:(id)arg2 selector:(SEL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)unbindProperty:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)bindProperty:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)bindProperty:(id)arg1 target:(id)arg2 selector:(SEL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithEtchSession:(id)arg1 handle:(long long)arg2 callbackQueue:(id)arg3 cdsVersion:(id)arg4;

@end

