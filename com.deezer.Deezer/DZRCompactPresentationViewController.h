//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface DZRCompactPresentationViewController : UIViewController
{
    _Bool _tapToCloseEnabled;
    UIViewController *_rootViewController;
}

@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool tapToCloseEnabled; // @synthesize tapToCloseEnabled=_tapToCloseEnabled;
- (void).cxx_destruct;
- (void)closeIfTapToCloseEnabled:(id)arg1;
- (void)viewDidLoad;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)initWithRootViewController:(id)arg1;

@end
