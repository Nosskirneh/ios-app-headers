//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSString, SPTDataLoaderRequest;

@protocol SPTDataLoaderAuthoriser <NSObject, NSCopying>
@property(nonatomic) __weak id <SPTDataLoaderAuthoriserDelegate> delegate;
@property(readonly, nonatomic) NSString *identifier;
- (void)refresh;
- (void)requestFailedAuthorisation:(SPTDataLoaderRequest *)arg1;
- (void)authoriseRequest:(SPTDataLoaderRequest *)arg1;
- (_Bool)requestRequiresAuthorisation:(SPTDataLoaderRequest *)arg1;
@end

