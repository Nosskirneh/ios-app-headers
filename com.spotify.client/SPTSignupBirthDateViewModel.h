//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLoginSplitEmailSignupViewLogger, SPTLoginTheme, SPTSignupAgeFieldValidator, SPTSignupUserInfoModel;

@interface SPTSignupBirthDateViewModel : NSObject
{
    id <SPTSignupBirthDateViewModelDelegate> _delegate;
    SPTLoginSplitEmailSignupViewLogger *_logger;
    SPTLoginTheme *_theme;
    SPTSignupAgeFieldValidator *_ageValidator;
    SPTSignupUserInfoModel *_userInfoModel;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTLoginNavigationCoordinator> _navigationCoordinator;
}

@property(retain, nonatomic) id <SPTLoginNavigationCoordinator> navigationCoordinator; // @synthesize navigationCoordinator=_navigationCoordinator;
@property(retain, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(retain, nonatomic) SPTSignupUserInfoModel *userInfoModel; // @synthesize userInfoModel=_userInfoModel;
@property(readonly, nonatomic) SPTSignupAgeFieldValidator *ageValidator; // @synthesize ageValidator=_ageValidator;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTLoginSplitEmailSignupViewLogger *logger; // @synthesize logger=_logger;
@property(nonatomic) __weak id <SPTSignupBirthDateViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigateToNextPageWithBirthDate:(id)arg1;
- (void)validateBirthDate:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)userDidDismissPickerViewWithValue:(id)arg1 shouldValidate:(_Bool)arg2;
- (void)userDidChangePickerViewWithValue:(id)arg1;
- (void)userDidTapNextButtonWithValue:(id)arg1;
- (id)pickerStyle;
- (id)previouslySelectedDate;
- (id)initialBirthDate;
- (id)minimumBirthDate;
- (id)maximumBirthDate;
- (id)viewStyle;
- (id)nextButtonText;
- (id)fieldTitleLabelText;
- (id)titleLabelText;
- (id)initWithTheme:(id)arg1 ageValidator:(id)arg2 userInfoModel:(id)arg3 logger:(id)arg4 navigationRouter:(id)arg5 navigationCoordinator:(id)arg6;

@end
