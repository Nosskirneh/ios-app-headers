//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ANGTouchViewController.h"

@class AnimatedGradientButton, NSArray, UIImageView, UILabel, UIView;

@interface _TtC7Anghami30AudioRoutesStepsViewController : ANGTouchViewController
{
    // Error parsing type: , name: stepNumberLabels
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: stepLabels
    // Error parsing type: , name: mainButton
    // Error parsing type: , name: mainImageView
    // Error parsing type: , name: backgroundView
    // Error parsing type: , name: stepsType
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)mainButtonPressed:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic) long long stepsType; // @synthesize stepsType;
@property(nonatomic, readonly) _Bool hidesNavigationBar;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView;
@property(nonatomic) __weak UIImageView *mainImageView; // @synthesize mainImageView;
@property(nonatomic) __weak AnimatedGradientButton *mainButton; // @synthesize mainButton;
@property(nonatomic, copy) NSArray *stepLabels; // @synthesize stepLabels;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic, copy) NSArray *stepNumberLabels; // @synthesize stepNumberLabels;

@end

