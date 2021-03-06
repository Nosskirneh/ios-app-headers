//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol RequestUrlCreator;

@interface RequestCreator : NSObject
{
    NSArray *_transformers;
    long long _serializationType;
    id <RequestUrlCreator> _urlCreator;
}

@property(readonly, nonatomic) id <RequestUrlCreator> urlCreator; // @synthesize urlCreator=_urlCreator;
@property(readonly, nonatomic) long long serializationType; // @synthesize serializationType=_serializationType;
@property(readonly, nonatomic) NSArray *transformers; // @synthesize transformers=_transformers;
- (void).cxx_destruct;
- (id)httpMethodsEncodingParametersInURI;
- (_Bool)shouldIncludeParamsInUrl:(id)arg1;
- (id)urlStringForRequestObject:(id)arg1;
- (_Bool)addBodyFromRequestObject:(id)arg1 toRequest:(id)arg2 error:(id *)arg3;
- (void)addHeadersFromRequestObject:(id)arg1 toRequest:(id)arg2;
- (void)setHttpMethodFromRequestObject:(id)arg1 toRequest:(id)arg2;
- (id)serializedRequestForRequestObject:(id)arg1;
- (id)requestForRequestObject:(id)arg1;
- (id)initWithSerialization:(long long)arg1 transformers:(id)arg2 urlCreator:(id)arg3;

@end

