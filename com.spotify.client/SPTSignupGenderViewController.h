//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTSignupGenderViewModelDelegate-Protocol.h"
#import "SPTSignupPickerContainerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginTheme, SPTSignupAnimatedTransitioning, SPTSignupGenderPickerDataSource, SPTSignupGenderViewModel, SPTSignupSingleInputFieldView, UIPickerView;
@protocol SPTPageContainer;

@interface SPTSignupGenderViewController : UIViewController <SPTNavigationControllerNavigationBarState, UITextFieldDelegate, SPTSignupGenderViewModelDelegate, SPTSignupPickerContainerViewDelegate, SPTPageController, SPTLoginViewControllerProtocol>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTSignupGenderViewModel *_viewModel;
    SPTSignupGenderPickerDataSource *_pickerDataSource;
    SPTSignupAnimatedTransitioning *_animatedTransitioning;
    SPTLoginTheme *_theme;
}

@property(retain, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
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
- (void)nextButtonTapped:(id)arg1;
- (id)createGenderPickerView;
- (void)updateViewModelFromInitialSelection;
- (void)updateViewFromViewModelState;
@property(readonly, nonatomic) UIPickerView *genderPickerView;
- (void)viewModelDidChangeGenderSelection:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTSignupSingleInputFieldView *view; // @dynamic view;

@end

