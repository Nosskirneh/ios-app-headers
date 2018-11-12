//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSDictionary, NSInputStream, NSMutableDictionary, NSString, NSURL;
@protocol SPTDataLoaderCancellationToken;

@interface SPTDataLoaderRequest : NSObject <NSCopying>
{
    _Bool _chunks;
    _Bool _skipNSURLCache;
    _Bool _retriedAuthorisation;
    NSURL *_URL;
    unsigned long long _maximumRetryCount;
    NSData *_body;
    unsigned long long _cachePolicy;
    long long _method;
    long long _backgroundPolicy;
    NSDictionary *_userInfo;
    long long _uniqueIdentifier;
    double _timeout;
    NSInputStream *_bodyStream;
    NSString *_sourceIdentifier;
    NSMutableDictionary *_mutableHeaders;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
}

+ (id)generateLanguageHeaderValue;
+ (id)languageHeaderValue;
+ (id)requestWithURL:(id)arg1 sourceIdentifier:(id)arg2;
+ (id)spt_dataLoaderRequestSuggestingResultsWithQuery:(id)arg1 sessionId:(id)arg2;
+ (id)requestHeadersForEndpoint:(unsigned long long)arg1;
+ (id)serviceURLForEndpoint:(unsigned long long)arg1;
+ (id)spt_speechRecognitionRequestWithBoundary:(id)arg1 sampleRate:(id)arg2 utteranceId:(id)arg3 inputStream:(id)arg4 endpoint:(unsigned long long)arg5 shouldSaveAudio:(_Bool)arg6 freeTierEnabled:(_Bool)arg7 language:(id)arg8;
@property(nonatomic) __weak id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(nonatomic) _Bool retriedAuthorisation; // @synthesize retriedAuthorisation=_retriedAuthorisation;
@property(retain, nonatomic) NSMutableDictionary *mutableHeaders; // @synthesize mutableHeaders=_mutableHeaders;
@property(copy, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSInputStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long backgroundPolicy; // @synthesize backgroundPolicy=_backgroundPolicy;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(nonatomic) _Bool skipNSURLCache; // @synthesize skipNSURLCache=_skipNSURLCache;
@property(nonatomic) unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property(nonatomic) _Bool chunks; // @synthesize chunks=_chunks;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(nonatomic) unsigned long long maximumRetryCount; // @synthesize maximumRetryCount=_maximumRetryCount;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)urlRequest;
- (void)removeHeader:(id)arg1;
- (void)addValue:(id)arg1 forHeader:(id)arg2;
@property(readonly, nonatomic) NSDictionary *headers;
- (id)initWithURL:(id)arg1 sourceIdentifier:(id)arg2 uniqueIdentifier:(long long)arg3;

@end

