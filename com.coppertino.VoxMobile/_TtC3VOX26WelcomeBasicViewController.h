//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC3VOX31BWWalkthroughPageViewController.h"

@class UIButton, UIImageView, _TtC3VOX27BWWalkthroughViewController;

@interface _TtC3VOX26WelcomeBasicViewController : _TtC3VOX31BWWalkthroughPageViewController
{
    // Error parsing type: , name: parentController
    // Error parsing type: , name: stepIndex
    // Error parsing type: , name: bgImageView
    // Error parsing type: , name: startButton
    // Error parsing type: , name: nextButton
    // Error parsing type: , name: loopSignInButton
    // Error parsing type: , name: skipButton
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)skipPressed:(id)arg1;
- (void)signUpIntoLoopPressed:(id)arg1;
- (void)nextPressed:(id)arg1;
@property(nonatomic) __weak UIButton *skipButton; // @synthesize skipButton;
@property(nonatomic) __weak UIButton *loopSignInButton; // @synthesize loopSignInButton;
@property(nonatomic) __weak UIButton *nextButton; // @synthesize nextButton;
@property(nonatomic) __weak UIButton *startButton; // @synthesize startButton;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView;
@property(nonatomic) long long stepIndex; // @synthesize stepIndex;
@property(nonatomic, retain) _TtC3VOX27BWWalkthroughViewController *parentController; // @synthesize parentController;

@end

