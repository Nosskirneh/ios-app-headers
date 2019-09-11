//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoDataLoaderResponse-Protocol.h"

@class NSData, NSDictionary, NSString;

@interface SPTVideoDataLoaderResponseImplementation : NSObject <SPTVideoDataLoaderResponse>
{
    long long _responseCode;
    NSData *_body;
    NSDictionary *_headers;
}

@property(readonly, copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(readonly, copy, nonatomic) NSData *body; // @synthesize body=_body;
@property(readonly, nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void).cxx_destruct;
- (id)initWithDataLoaderResponse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

