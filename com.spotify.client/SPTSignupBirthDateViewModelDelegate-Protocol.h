//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SPTSignupBirthDateViewModel;

@protocol SPTSignupBirthDateViewModelDelegate <NSObject>
- (void)viewModel:(SPTSignupBirthDateViewModel *)arg1 didFinishValidationWithError:(NSError *)arg2;
- (void)viewModelDidBeginValidation:(SPTSignupBirthDateViewModel *)arg1;
@end
