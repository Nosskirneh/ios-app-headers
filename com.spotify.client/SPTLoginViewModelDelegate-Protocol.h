//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLoginViewModel;

@protocol SPTLoginViewModelDelegate <NSObject>
- (void)viewModel:(SPTLoginViewModel *)arg1 shouldShowKeyboard:(_Bool)arg2;
- (void)viewModelDidSucceedRequestMagicLink:(SPTLoginViewModel *)arg1;
- (void)viewModel:(SPTLoginViewModel *)arg1 didFailRequestMagicLinkWithError:(NSError *)arg2;
- (void)viewModelDidStartRequestMagicLink:(SPTLoginViewModel *)arg1;
- (void)viewModel:(SPTLoginViewModel *)arg1 didCompleteLoginWithError:(NSError *)arg2;
- (void)viewModelDidCompleteLoginWithNetworkDisabledError:(SPTLoginViewModel *)arg1;
- (void)viewModelDidCompleteLoginWithSuccess:(SPTLoginViewModel *)arg1;
@end

