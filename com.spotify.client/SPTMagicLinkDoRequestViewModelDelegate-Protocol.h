//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SPTLoginMagicLinkDoRequestViewModel;

@protocol SPTMagicLinkDoRequestViewModelDelegate <NSObject>
- (void)viewModelDidSucceedRequestMagicLink:(SPTLoginMagicLinkDoRequestViewModel *)arg1;
- (void)viewModel:(SPTLoginMagicLinkDoRequestViewModel *)arg1 didFailRequestMagicLinkWithError:(NSError *)arg2;
- (void)viewModelDidStartRequestMagicLink:(SPTLoginMagicLinkDoRequestViewModel *)arg1;
@end

