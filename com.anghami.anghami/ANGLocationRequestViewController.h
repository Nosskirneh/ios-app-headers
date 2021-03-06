//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString, UIButton, UIImageView, UILabel;

@interface ANGLocationRequestViewController : UIViewController <CLLocationManagerDelegate>
{
    UIImageView *_heroImageView;
    UILabel *_explanationLabel;
    UIButton *_allowButton;
    UIButton *_dontAllowButton;
    CLLocationManager *_locationManager;
    _Bool _isParticipantInTutorial;
}

@property _Bool isParticipantInTutorial; // @synthesize isParticipantInTutorial=_isParticipantInTutorial;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)dontAllowButtonAction;
- (void)allowButtonAction;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)dismissOrAdvance;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)shouldAutorotate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

