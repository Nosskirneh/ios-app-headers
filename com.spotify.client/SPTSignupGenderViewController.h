//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SPTLoginViewControllerProtocol.h"
#import "SPTNavigationControllerNavigationBarState.h"
#import "SPTPageController.h"
#import "SPTSignupGenderViewModelDelegate.h"
#import "SPTSignupPickerContainerViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSError, NSString, NSURL, SPTSignupAnimatedTransitioning, SPTSignupGenderPickerDataSource, SPTSignupGenderViewModel, SPTSignupSingleInputFieldView, UIPickerView;

@interface SPTSignupGenderViewController : UIViewController <SPTNavigationControllerNavigationBarState, UITextFieldDelegate, SPTSignupGenderViewModelDelegate, SPTSignupPickerContainerViewDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTSignupGenderViewModel *_viewModel;
    SPTSignupGenderPickerDataSource *_pickerDataSource;
    SPTSignupAnimatedTransitioning *_animatedTransitioning;
}

@property(retain, nonatomic) SPTSignupAnimatedTransitioning *animatedTransitioning; // @synthesize animatedTransitioning=_animatedTransitioning;
@property(retain, nonatomic) SPTSignupGenderPickerDataSource *pickerDataSource; // @synthesize pickerDataSource=_pickerDataSource;
@property(retain, nonatomic) SPTSignupGenderViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPopOperationToViewController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForPushOperationFromViewController:(id)arg2;
- (void)pickerViewDidComplete:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)userDidTouchUpInsideNextButton:(id)arg1;
- (id)createGenderPickerView;
- (void)updateViewModelFromInitialSelection;
- (void)updateViewFromViewModelState;
@property(readonly, nonatomic) UIPickerView *genderPickerView;
- (void)viewModelDidChangeGenderSelection:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTSignupSingleInputFieldView *view; // @dynamic view;

@end
