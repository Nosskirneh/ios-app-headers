//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class VOXMiniPlayerTransitionAnimator;

@interface _TtC3VOX24MiniPlayerViewController : UIViewController
{
    // Error parsing type: , name: animator
    // Error parsing type: , name: pageViewController
    // Error parsing type: , name: playerController
    // Error parsing type: , name: playerNotifier
    // Error parsing type: , name: userIsScrolling
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)resetUserIsScrollingAndCheck;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)playerPlaylistChanged;
- (void)playerRepeatModeChanged;
- (void)playerTrackChangedWithPlayableItem:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlayerController:(id)arg1;
@property(nonatomic, retain) VOXMiniPlayerTransitionAnimator *animator; // @synthesize animator;

@end

