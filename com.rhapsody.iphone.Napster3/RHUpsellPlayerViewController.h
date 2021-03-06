//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class RHLayoutManagerView, RHStackLayoutManager, UIButton, UILabel;
@protocol RHUpsellPlayerViewControllerDelegate;

@interface RHUpsellPlayerViewController : RHViewController
{
    id <RHUpsellPlayerViewControllerDelegate> _delegate;
    UILabel *_headlineLabel;
    UILabel *_subTitleLabel;
    UIButton *_upgradeButton;
    UIButton *_noThanksButton;
    RHStackLayoutManager *_stackLayoutManager;
}

@property(retain, nonatomic) RHStackLayoutManager *stackLayoutManager; // @synthesize stackLayoutManager=_stackLayoutManager;
@property(retain, nonatomic) UIButton *noThanksButton; // @synthesize noThanksButton=_noThanksButton;
@property(retain, nonatomic) UIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *headlineLabel; // @synthesize headlineLabel=_headlineLabel;
@property(nonatomic) __weak id <RHUpsellPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)dependencies;
@property(readonly, nonatomic) double viewHeight;
@property(readonly) RHLayoutManagerView *layoutManagerView;
- (void)logTapEventForAction:(id)arg1;
- (void)upgradeTapped:(id)arg1;
- (void)noThanksTapped:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

