//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class ACAccount, NSDictionary, NSHTTPURLResponse, NSMutableData, NSString;

@interface STTwitterOSRequest : NSObject <NSURLConnectionDelegate>
{
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _errorBlock;
    CDUnknownBlockType _uploadProgressBlock;
    NSHTTPURLResponse *_httpURLResponse;
    NSMutableData *_data;
    ACAccount *_account;
    long long _httpMethod;
    NSDictionary *_params;
    NSString *_baseURLString;
    NSString *_resource;
    double _timeoutInSeconds;
}

@property(nonatomic) double timeoutInSeconds; // @synthesize timeoutInSeconds=_timeoutInSeconds;
@property(retain, nonatomic) NSString *resource; // @synthesize resource=_resource;
@property(retain, nonatomic) NSString *baseURLString; // @synthesize baseURLString=_baseURLString;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) long long httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSHTTPURLResponse *httpURLResponse; // @synthesize httpURLResponse=_httpURLResponse;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)handleStreamingResponse:(id)arg1 request:(id)arg2 data:(id)arg3;
- (id)requestHeadersForRequest:(id)arg1;
- (id)startRequest;
- (id)preparedURLRequest;
- (id)initWithAPIResource:(id)arg1 baseURLString:(id)arg2 httpMethod:(long long)arg3 parameters:(id)arg4 account:(id)arg5 timeoutInSeconds:(double)arg6 uploadProgressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8 errorBlock:(CDUnknownBlockType)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

