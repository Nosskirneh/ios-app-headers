//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@class NSError, NSXMLParser;

@interface AFXMLRequestOperation : AFHTTPRequestOperation
{
    NSXMLParser *_responseXMLParser;
    NSError *_XMLError;
}

+ (_Bool)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)XMLParserRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSError *XMLError; // @synthesize XMLError=_XMLError;
@property(retain, nonatomic) NSXMLParser *responseXMLParser; // @synthesize responseXMLParser=_responseXMLParser;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)cancel;
- (id)error;

@end

