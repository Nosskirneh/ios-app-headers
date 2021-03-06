//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;
@protocol SPTViewModel;

@protocol SPTViewModelDelegate <NSObject>
- (void)viewModel:(id <SPTViewModel>)arg1 didFailAllRequestsWithError:(NSError *)arg2;
- (void)viewModelDidFinishAllRequests:(id <SPTViewModel>)arg1;

@optional
- (void)viewModel:(id <SPTViewModel>)arg1 setLoading:(_Bool)arg2;
- (void)viewModel:(id <SPTViewModel>)arg1 didFailLoad:(NSError *)arg2 forRequestKey:(NSString *)arg3;
- (void)viewModel:(id <SPTViewModel>)arg1 didLoadData:(NSDictionary *)arg2 forRequestKey:(NSString *)arg3;
@end

