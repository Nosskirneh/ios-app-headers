//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURLRequest, NSURLResponse;

@protocol YTNetworkReceivedDelegate <NSObject>
- (_Bool)enabledWithInstrumentation;
- (void)receivedDataForRequest:(NSURLRequest *)arg1 withResponse:(NSURLResponse *)arg2;
@end

