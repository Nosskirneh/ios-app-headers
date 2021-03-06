//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BNCNetworkOperationProtocol-Protocol.h"

@class BNCNetworkService, NSData, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURLRequest, NSURLSessionTask;

@interface BNCNetworkOperation : NSObject <BNCNetworkOperationProtocol>
{
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSData *_responseData;
    NSError *_error;
    NSDate *_startDate;
    NSDate *_timeoutDate;
    NSDictionary *_userInfo;
    BNCNetworkService *_networkService;
    NSURLSessionTask *_sessionTask;
    CDUnknownBlockType _completionBlock;
}

@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(retain) BNCNetworkService *networkService; // @synthesize networkService=_networkService;
@property(retain) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy) NSError *error; // @synthesize error=_error;
@property(retain) NSData *responseData; // @synthesize responseData=_responseData;
@property(copy) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(copy) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)stringFromResponseData;
- (void)cancel;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

