//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UILabel;

@interface _TtC6Deezer36SubscriptionDisclaimerViewController : UIViewController
{
    // Error parsing type: , name: model
    // Error parsing type: , name: theme
    // Error parsing type: , name: disclaimerLabel
    // Error parsing type: , name: termsButton
    // Error parsing type: , name: privacyButton
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showPrivacy:(id)arg1;
- (void)showConditions:(id)arg1;
@property(nonatomic) __weak UIButton *privacyButton; // @synthesize privacyButton;
@property(nonatomic) __weak UIButton *termsButton; // @synthesize termsButton;
@property(nonatomic) __weak UILabel *disclaimerLabel; // @synthesize disclaimerLabel;
- (void)updateButtonsTintColorWithColor:(id)arg1;
- (void)viewDidLoad;

@end
