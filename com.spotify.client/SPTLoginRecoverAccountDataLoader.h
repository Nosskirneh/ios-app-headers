//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString, SPTDataLoader;
@protocol SPTLoginRecoverAccountDataLoaderDelegate;

@interface SPTLoginRecoverAccountDataLoader : NSObject <SPTDataLoaderDelegate>
{
    id <SPTLoginRecoverAccountDataLoaderDelegate> delegate;
    SPTDataLoader *_dataLoader;
}

@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTLoginRecoverAccountDataLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (id)buildServiceURL;
- (_Bool)hasOngoingRequests;
- (void)cancelRequest;
- (void)requestLoginLinkForEmailOrUsername:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

