//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SPTRequest : NSObject
{
}

+ (void)setErrorCode:(int)arg1 withDescription:(id)arg2 toError:(id *)arg3;
+ (id)createError:(int)arg1 withDescription:(id)arg2;
+ (id)createRequestForURL:(id)arg1 withAccessToken:(id)arg2 httpMethod:(id)arg3 values:(id)arg4 valueBodyIsJSON:(_Bool)arg5 sendDataAsQueryString:(_Bool)arg6 error:(id *)arg7;
+ (id)createRequestForURL:(id)arg1 withAccessToken:(id)arg2 httpMethod:(id)arg3 values:(id)arg4 valueBodyIsJSON:(_Bool)arg5 error:(id *)arg6;
+ (id)createRequestForURL:(id)arg1 withAccessToken:(id)arg2 httpMethod:(id)arg3 values:(id)arg4 error:(id *)arg5;
+ (id)createRequestForURL:(id)arg1 withAccessToken:(id)arg2 error:(id *)arg3;
+ (void)setSharedHandler:(id)arg1;
+ (id)sharedHandler;
+ (void)recursivelyRequestItems:(id)arg1 withPager:(CDUnknownBlockType)arg2 pageSize:(unsigned long long)arg3 previouslyFetchedItems:(id)arg4 callback:(CDUnknownBlockType)arg5;
+ (void)performSequentialMultiget:(id)arg1 pager:(CDUnknownBlockType)arg2 pagesize:(int)arg3 callback:(CDUnknownBlockType)arg4;
+ (id)urlEncodeString:(id)arg1;
+ (id)performRequestAtURL:(id)arg1 withAccessToken:(id)arg2 accessTokenType:(id)arg3 httpMethod:(id)arg4 values:(id)arg5 valueBodyIsJSON:(_Bool)arg6 sendDataAsQueryString:(_Bool)arg7 error:(id *)arg8;
+ (id)performRequestAtURL:(id)arg1 withAccessToken:(id)arg2 accessTokenType:(id)arg3 httpMethod:(id)arg4 values:(id)arg5 valueBodyIsJSON:(_Bool)arg6 error:(id *)arg7;
+ (id)performRequestAtURL:(id)arg1 withAccessToken:(id)arg2 accessTokenType:(id)arg3 httpMethod:(id)arg4 values:(id)arg5 error:(id *)arg6;
+ (void)queueMockResponse:(id)arg1 withStatusCode:(int)arg2;
+ (void)queueMockResponse:(id)arg1;
+ (void)clearMockResponses;

@end

