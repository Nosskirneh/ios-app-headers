//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

@class NSURLSessionDataTask;

@interface UAURLProtocol : NSURLProtocol
{
    NSURLSessionDataTask *_dataTask;
}

+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)removeCachableURL:(id)arg1;
+ (void)addCachableURL:(id)arg1;
+ (void)clearCache;
+ (id)cache;
+ (id)cachableURLs;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (void)load;
@property(retain, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
- (void).cxx_destruct;
- (void)finishRequestWithResponse:(id)arg1 responseData:(id)arg2;
- (_Bool)loadFromCache;
- (void)stopLoading;
- (void)startLoading;

@end
