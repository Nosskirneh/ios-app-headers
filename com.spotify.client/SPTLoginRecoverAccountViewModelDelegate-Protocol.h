//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTLoginRecoverAccountViewModel;

@protocol SPTLoginRecoverAccountViewModelDelegate <NSObject>
- (void)viewModel:(SPTLoginRecoverAccountViewModel *)arg1 didFinishLoadingDataWithError:(NSError *)arg2;
- (void)viewModelDidFinishLoadingDataWithSuccess:(SPTLoginRecoverAccountViewModel *)arg1;
@end
