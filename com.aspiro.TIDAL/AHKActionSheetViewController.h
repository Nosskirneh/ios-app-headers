//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AHKActionSheet;

@interface AHKActionSheetViewController : UIViewController
{
    _Bool _viewAlreadyAppear;
    AHKActionSheet *_actionSheet;
}

@property(nonatomic) _Bool viewAlreadyAppear; // @synthesize viewAlreadyAppear=_viewAlreadyAppear;
@property(retain, nonatomic) AHKActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

