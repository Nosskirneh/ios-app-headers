//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SPTAccountProductInformationObserver <NSObject>

@optional
- (void)premiumTrialEligibilityDidArriveForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
- (void)premiumTrialEligibilityIsSetForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
- (void)availableProductDidChangeForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
- (void)currentProductDidChangeForProductInformationController:(id <SPTAccountProductInformationController>)arg1;
@end
