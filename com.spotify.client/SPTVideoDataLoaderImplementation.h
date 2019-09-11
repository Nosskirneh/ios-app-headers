//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTVideoDataLoader-Protocol.h"

@class NSString, SPTDataLoader;

@interface SPTVideoDataLoaderImplementation : NSObject <SPTDataLoaderDelegate, SPTVideoDataLoader>
{
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (long long)mapMethod:(unsigned long long)arg1;
- (void)requestWithURL:(id)arg1 method:(unsigned long long)arg2 headers:(id)arg3 body:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)dataLoader:(id)arg1 didReceiveDataChunk:(id)arg2 forResponse:(id)arg3;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (_Bool)dataLoaderShouldSupportChunks:(id)arg1;
- (void)requestWithURL:(id)arg1 method:(unsigned long long)arg2 headers:(id)arg3 body:(id)arg4 responseHandler:(id)arg5;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

