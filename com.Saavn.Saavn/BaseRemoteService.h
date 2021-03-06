//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSession, NSURLSessionConfiguration;

@interface BaseRemoteService : NSObject
{
    NSString *_baseURL;
    NSURLSessionConfiguration *_sessionConfiguration;
    NSURLSession *_session;
}

@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)errorWithCode:(long long)arg1 info:(id)arg2;
- (id)desirializeJson:(id)arg1;
- (id)jsonData:(id)arg1;
- (void)POST:(id)arg1 queryParams:(id)arg2 body:(id)arg3 onCompletion:(CDUnknownBlockType)arg4;
- (void)GET:(id)arg1 params:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (id)initWithBaseURL:(id)arg1;

@end

