//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SPTExternalIntegrationSearchController <NSObject>
- (void)searchWithQuery:(NSString *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 accessorySessionID:(NSString *)arg4 completionHandler:(void (^)(NSDictionary *, NSError *))arg5;
@end
