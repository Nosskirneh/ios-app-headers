//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UILabel, UITextView, _TtC4WiMP19RoundedCornerButton;
@protocol WMPLoginServiceDelegate;

@interface _TtC4WiMP18SprintSignupModule : UIViewController
{
    // Error parsing type: , name: tidalTermsScheme
    // Error parsing type: , name: termsTextView
    // Error parsing type: , name: welcomeLabel
    // Error parsing type: , name: offerLabel
    // Error parsing type: , name: continueButton
    // Error parsing type: , name: delegate
    // Error parsing type: , name: loginService
    // Error parsing type: , name: activityIndicator
    // Error parsing type: , name: activeButton
    // Error parsing type: , name: subscriberId
    // Error parsing type: , name: productId
}

+ (id)getInstance;
+ (id)storyboardName;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)didPressContinueButton:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, copy) NSString *productId; // @synthesize productId;
@property(nonatomic, copy) NSString *subscriberId; // @synthesize subscriberId;
@property(nonatomic) __weak id <WMPLoginServiceDelegate> delegate; // @synthesize delegate;
@property(nonatomic) __weak _TtC4WiMP19RoundedCornerButton *continueButton; // @synthesize continueButton;
@property(nonatomic) __weak UILabel *offerLabel; // @synthesize offerLabel;
@property(nonatomic) __weak UILabel *welcomeLabel; // @synthesize welcomeLabel;
@property(nonatomic) __weak UITextView *termsTextView; // @synthesize termsTextView;
@property(nonatomic, readonly) NSString *tidalTermsScheme; // @synthesize tidalTermsScheme;

@end
