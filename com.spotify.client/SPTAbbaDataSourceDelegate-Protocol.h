//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError;
@protocol SPTAbbaDataSource;

@protocol SPTAbbaDataSourceDelegate <NSObject>
- (void)abbaDataSourceDidCancelRequest:(id <SPTAbbaDataSource>)arg1;
- (void)abbaDataSource:(id <SPTAbbaDataSource>)arg1 didFailWithError:(NSError *)arg2;
- (void)abbaDataSource:(id <SPTAbbaDataSource>)arg1 didLoadFeatureFlags:(NSDictionary *)arg2;
@end

