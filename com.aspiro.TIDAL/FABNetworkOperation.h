//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FABAsyncOperation.h"

@class NSString;

@interface FABNetworkOperation : FABAsyncOperation
{
    NSString *_APIKey;
}

@property(readonly, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (void).cxx_destruct;
- (id)localeIdentifier;
- (id)userAgentString;
- (id)mutableRequestWithDefaultHTTPHeadersForURL:(id)arg1 timeout:(double)arg2;
- (id)mutableRequestWithDefaultHTTPHeaderFieldsAndTimeoutForURL:(id)arg1;
- (id)initWithAPIKey:(id)arg1;

@end

