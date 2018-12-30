//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADJSdkClickHandler-Protocol.h"

@class ADJBackoffStrategy, NSMutableArray, NSURL;
@protocol ADJLogger, OS_dispatch_queue;

@interface ADJSdkClickHandler : NSObject <ADJSdkClickHandler>
{
    _Bool _paused;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <ADJLogger> _logger;
    ADJBackoffStrategy *_backoffStrategy;
    NSMutableArray *_packageQueue;
    NSURL *_baseUrl;
}

+ (id)handlerWithStartsSending:(_Bool)arg1;
@property(retain, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) NSMutableArray *packageQueue; // @synthesize packageQueue=_packageQueue;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(retain, nonatomic) ADJBackoffStrategy *backoffStrategy; // @synthesize backoffStrategy=_backoffStrategy;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)sendNextSdkClickI:(id)arg1;
- (void)sendSdkClickI:(id)arg1 sdkClickPackage:(id)arg2;
- (void)initI:(id)arg1;
- (void)teardown;
- (void)sendNextSdkClick;
- (void)sendSdkClick:(id)arg1;
- (void)resumeSending;
- (void)pauseSending;
- (id)initWithStartsSending:(_Bool)arg1;

@end

