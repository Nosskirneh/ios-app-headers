//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AppDelegate, UIImageView;

@interface iPadContainer : UIViewController
{
    AppDelegate *appDel;
    long long lastOrientation;
    _Bool orientationSet;
    UIImageView *ProRowCover;
    _Bool _isLandscape;
}

@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape=_isLandscape;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)hideProRowCover:(_Bool)arg1;
- (void)orientationChange:(id)arg1;
- (long long)getLastOrientation;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

