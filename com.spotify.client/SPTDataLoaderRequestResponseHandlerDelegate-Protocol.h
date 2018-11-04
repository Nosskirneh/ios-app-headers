//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTDataLoaderRequest;

@protocol SPTDataLoaderRequestResponseHandlerDelegate <NSObject>
- (void)requestResponseHandler:(id <SPTDataLoaderRequestResponseHandler>)arg1 cancelRequest:(SPTDataLoaderRequest *)arg2;
- (void)requestResponseHandler:(id <SPTDataLoaderRequestResponseHandler>)arg1 performRequest:(SPTDataLoaderRequest *)arg2;

@optional
- (void)requestResponseHandler:(id <SPTDataLoaderRequestResponseHandler>)arg1 failedToAuthoriseRequest:(SPTDataLoaderRequest *)arg2 error:(NSError *)arg3;
- (void)requestResponseHandler:(id <SPTDataLoaderRequestResponseHandler>)arg1 authorisedRequest:(SPTDataLoaderRequest *)arg2;
@end

