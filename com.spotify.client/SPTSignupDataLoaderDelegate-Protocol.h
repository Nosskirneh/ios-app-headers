//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTSignupDataLoaderResponse;
@protocol SPTSignupDataLoader;

@protocol SPTSignupDataLoaderDelegate <NSObject>
- (void)dataLoader:(id <SPTSignupDataLoader>)arg1 didFinishLoadingWithError:(NSError *)arg2;
- (void)dataLoader:(id <SPTSignupDataLoader>)arg1 didFinishLoadingWithSuccessResponse:(SPTSignupDataLoaderResponse *)arg2;
@end

