//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "VOXTransitionControllerDataSource-Protocol.h"

@class UIButton, UIImageView, UILabel, VOXMenuTransitionAnimator;

@interface VOXLoopPurchaseViewController : UIViewController <VOXTransitionControllerDataSource>
{
    VOXMenuTransitionAnimator *_animator;
    UIButton *_buyMonthSubscription;
    UIButton *_buyYearSubscription;
    UILabel *_chooseYourPlanLabel;
    UILabel *_youSaveLabel;
    UIButton *_continueButton;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIButton *continueButton; // @synthesize continueButton=_continueButton;
@property(retain, nonatomic) UILabel *youSaveLabel; // @synthesize youSaveLabel=_youSaveLabel;
@property(retain, nonatomic) UILabel *chooseYourPlanLabel; // @synthesize chooseYourPlanLabel=_chooseYourPlanLabel;
@property(retain, nonatomic) UIButton *buyYearSubscription; // @synthesize buyYearSubscription=_buyYearSubscription;
@property(retain, nonatomic) UIButton *buyMonthSubscription; // @synthesize buyMonthSubscription=_buyMonthSubscription;
@property(retain, nonatomic) VOXMenuTransitionAnimator *animator; // @synthesize animator=_animator;
- (void).cxx_destruct;
- (void)_loopDidSuccessfullyPurchasedWithProductId:(id)arg1;
- (void)buy:(id)arg1;
- (void)close:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)_attrTitleForPurchaseButtonWithOldTitle:(id)arg1 andNewText:(id)arg2;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

