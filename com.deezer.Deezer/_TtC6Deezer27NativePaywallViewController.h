//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface _TtC6Deezer27NativePaywallViewController : UIViewController
{
    // Error parsing type: , name: info
    // Error parsing type: , name: scrollView
    // Error parsing type: , name: topSeparator
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: subscribeButton
    // Error parsing type: , name: conditionsDisplayer
    // Error parsing type: , name: disclosureIndicator
    // Error parsing type: , name: closeButton
    // Error parsing type: , name: illustration
    // Error parsing type: , name: conditions
    // Error parsing type: , name: termsAndConditionButton
    // Error parsing type: , name: policyButton
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)displayPrivacyPolicy:(id)arg1;
- (void)displayTerms:(id)arg1;
- (void)revealConditions:(id)arg1;
- (void)dismissWithSender:(id)arg1;
- (void)subscribe:(id)arg1;
- (void)presentError:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *policyButton; // @synthesize policyButton;
@property(nonatomic) __weak UIButton *termsAndConditionButton; // @synthesize termsAndConditionButton;
@property(nonatomic) __weak UILabel *conditions; // @synthesize conditions;
@property(nonatomic) __weak UIImageView *illustration; // @synthesize illustration;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton;
@property(nonatomic) __weak UIImageView *disclosureIndicator; // @synthesize disclosureIndicator;
@property(nonatomic) __weak UIButton *conditionsDisplayer; // @synthesize conditionsDisplayer;
@property(nonatomic) __weak UIButton *subscribeButton; // @synthesize subscribeButton;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIView *topSeparator; // @synthesize topSeparator;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView;

@end

