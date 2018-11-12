//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZNURL, NSData, NSDictionary, NSString;

@interface DZNRequest : NSObject
{
    _Bool _allowsCellularAccess;
    NSString *_dznIdentifier;
    DZNURL *_URL;
    NSData *_payload;
    NSDictionary *_queryParameters;
    NSDictionary *_HTTPHeaders;
    NSString *_HTTPMethod;
    unsigned long long _cachePolicy;
    double _timeoutInterval;
}

+ (id)DELETERequestWithURL:(id)arg1;
+ (id)POSTRequestWithURL:(id)arg1 andPayload:(id)arg2;
+ (id)GETRequestWithURL:(id)arg1;
+ (id)requestWithURL:(id)arg1 uploadedImage:(id)arg2 name:(id)arg3;
@property(readonly, nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(readonly, nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(readonly, nonatomic) NSString *HTTPMethod; // @synthesize HTTPMethod=_HTTPMethod;
@property(readonly, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(readonly, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(readonly, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) DZNURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *dznIdentifier; // @synthesize dznIdentifier=_dznIdentifier;
- (void).cxx_destruct;
- (id)NSURLRequest;
- (id)dznCopy;
- (id)requestByChangingCachePolicy:(unsigned long long)arg1 timeoutInterval:(double)arg2 allowsCellularAccess:(_Bool)arg3;
- (id)requestByAddingHTTPHeadersFromDictionary:(id)arg1;
- (id)requestByAddingQueryParameters:(id)arg1;
- (id)requestBySettingPayload:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

@end
