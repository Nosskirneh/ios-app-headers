//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UILabel, UISwitch, _TtC6Deezer15GDPRCoordinator;

@interface _TtC6Deezer25GDPRDetailsViewController : UIViewController
{
    // Error parsing type: , name: coordinator
    // Error parsing type: , name: origin
    // Error parsing type: , name: topBar
    // Error parsing type: , name: topBarHeightConstraint
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: bodyLabel
    // Error parsing type: , name: submitButton
    // Error parsing type: , name: statsSwitch
    // Error parsing type: , name: marketingSwitch
    // Error parsing type: , name: necessaryLabel
    // Error parsing type: , name: statsLabel
    // Error parsing type: , name: targetedAdvertisingLabel
    // Error parsing type: , name: necessaryMoreLabel
    // Error parsing type: , name: statsMoreLabel
    // Error parsing type: , name: targetedAdvertisingMoreLabel
    // Error parsing type: , name: needMoreButtons
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)moreActionWithButton:(id)arg1;
- (void)back;
- (void)submit;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *needMoreButtons; // @synthesize needMoreButtons;
@property(nonatomic) __weak UILabel *targetedAdvertisingMoreLabel; // @synthesize targetedAdvertisingMoreLabel;
@property(nonatomic) __weak UILabel *statsMoreLabel; // @synthesize statsMoreLabel;
@property(nonatomic) __weak UILabel *necessaryMoreLabel; // @synthesize necessaryMoreLabel;
@property(nonatomic) __weak UILabel *targetedAdvertisingLabel; // @synthesize targetedAdvertisingLabel;
@property(nonatomic) __weak UILabel *statsLabel; // @synthesize statsLabel;
@property(nonatomic) __weak UILabel *necessaryLabel; // @synthesize necessaryLabel;
@property(nonatomic) __weak UISwitch *marketingSwitch; // @synthesize marketingSwitch;
@property(nonatomic) __weak UISwitch *statsSwitch; // @synthesize statsSwitch;
@property(nonatomic) __weak UIButton *submitButton; // @synthesize submitButton;
@property(nonatomic) __weak UILabel *bodyLabel; // @synthesize bodyLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *topBarHeightConstraint; // @synthesize topBarHeightConstraint;
@property(nonatomic) _Bool topBar; // @synthesize topBar;
@property(nonatomic, copy) NSString *origin; // @synthesize origin;
@property(nonatomic) __weak _TtC6Deezer15GDPRCoordinator *coordinator; // @synthesize coordinator;

@end
