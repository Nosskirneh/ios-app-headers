//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSURLResponse;

@interface GADNServerResponse : NSObject
{
    NSDictionary *_configuration;
    NSURLResponse *_rawResponse;
    NSData *_rawResponseData;
}

@property(readonly, nonatomic) NSData *rawResponseData; // @synthesize rawResponseData=_rawResponseData;
@property(readonly, nonatomic) NSURLResponse *rawResponse; // @synthesize rawResponse=_rawResponse;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *adConfigurations;
@property(readonly, nonatomic) NSDictionary *common;
- (id)initWithConfiguration:(id)arg1 response:(id)arg2 responseBody:(id)arg3;

@end

