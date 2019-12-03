//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTLoginSplitEmailSignupViewLogger, SPTSignupPasswordFieldValidationViewModel, SPTSignupUserInfoModel;
@protocol SPTLoginNavigationCoordinator;

@interface SPTSignupPasswordViewModel : NSObject
{
    SPTLoginSplitEmailSignupViewLogger *_logger;
    SPTSignupUserInfoModel *_userInfoModel;
    SPTSignupPasswordFieldValidationViewModel *_fieldViewModel;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
}

@property(retain, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) SPTSignupPasswordFieldValidationViewModel *fieldViewModel; // @synthesize fieldViewModel=_fieldViewModel;
@property(retain, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(retain, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)openNextScreenWithPassword:(id)arg1;
- (void)userDidTapNextButtonWithValue:(id)arg1;
- (void)userDidTapReturnButtonWithValue:(id)arg1;
- (void)userDidUpdateTextFieldWithValue:(id)arg1;
- (void)setFieldValidationHandlerDelegate:(id)arg1;
- (id)userEmail;
- (id)previouslySelectedPassword;
- (id)nextButtonText;
- (id)fieldDisclosureLabelText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
- (id)initWithLogger:(id)arg1 userInfoModel:(id)arg2 fieldViewModel:(id)arg3 navigationCoordinator:(id)arg4;

@end

