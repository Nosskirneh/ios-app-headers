//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTDataLoaderRequest;
@protocol SPTDataLoaderAuthoriser;

@protocol SPTDataLoaderAuthoriserDelegate <NSObject>
- (void)dataLoaderAuthoriser:(id <SPTDataLoaderAuthoriser>)arg1 didFailToAuthoriseRequest:(SPTDataLoaderRequest *)arg2 withError:(NSError *)arg3;
- (void)dataLoaderAuthoriser:(id <SPTDataLoaderAuthoriser>)arg1 authorisedRequest:(SPTDataLoaderRequest *)arg2;
@end

