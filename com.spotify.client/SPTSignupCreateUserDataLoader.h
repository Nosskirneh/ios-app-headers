//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTSignupDataLoader-Protocol.h"

@class NSString, SPTDataLoader, SPTLoginPerformanceLogging, SPTSignupRequestProvider, SPTSignupResponseProcessor;
@protocol SPTSignupDataLoaderDelegate;

@interface SPTSignupCreateUserDataLoader : NSObject <SPTDataLoaderDelegate, SPTSignupDataLoader>
{
    id <SPTSignupDataLoaderDelegate> delegate;
    SPTDataLoader *_dataLoader;
    SPTSignupResponseProcessor *_responseProcessor;
    SPTSignupRequestProvider *_requestProvider;
    SPTLoginPerformanceLogging *_performanceLogging;
}

@property(retain, nonatomic) SPTLoginPerformanceLogging *performanceLogging; // @synthesize performanceLogging=_performanceLogging;
@property(retain, nonatomic) SPTSignupRequestProvider *requestProvider; // @synthesize requestProvider=_requestProvider;
@property(retain, nonatomic) SPTSignupResponseProcessor *responseProcessor; // @synthesize responseProcessor=_responseProcessor;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTSignupDataLoaderDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)performCreateUserRequest:(id)arg1;
- (void)performCreateUserWithUserInfoModel:(id)arg1;
- (void)performCreateFacebookUserWithInfoModel:(id)arg1;
- (void)dealloc;
- (id)initWithDataLoader:(id)arg1 responseProcessor:(id)arg2 requestProvider:(id)arg3 performanceLogging:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

