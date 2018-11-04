//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJRequestHandler.h"

@class NSObject<OS_dispatch_queue>, NSURL;

@interface ADJRequestHandler : NSObject <ADJRequestHandler>
{
    NSURL *_baseUrl;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <ADJLogger> _logger;
    id <ADJPackageHandler> _packageHandler;
}

+ (id)handlerWithPackageHandler:(id)arg1;
@property(nonatomic) __weak id <ADJPackageHandler> packageHandler; // @synthesize packageHandler=_packageHandler;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
- (void).cxx_destruct;
- (void)sendI:(id)arg1 activityPackage:(id)arg2 queueSize:(unsigned long long)arg3;
- (void)teardown;
- (void)sendPackage:(id)arg1 queueSize:(unsigned long long)arg2;
- (id)initWithPackageHandler:(id)arg1;

@end
