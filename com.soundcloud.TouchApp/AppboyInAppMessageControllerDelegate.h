//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABKInAppMessageUIDelegate-Protocol.h"

@class Appboy, NSString, UIApplication;
@protocol URLServicePresenter;

@interface AppboyInAppMessageControllerDelegate : NSObject <ABKInAppMessageUIDelegate>
{
    UIApplication *_application;
    Appboy *_appboy;
    id <URLServicePresenter> _soundCloudGoURLServicePresenter;
    id <URLServicePresenter> _soundCloudPlanPickerURLServicePresenter;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) id <URLServicePresenter> soundCloudPlanPickerURLServicePresenter; // @synthesize soundCloudPlanPickerURLServicePresenter=_soundCloudPlanPickerURLServicePresenter;
@property(readonly, nonatomic) id <URLServicePresenter> soundCloudGoURLServicePresenter; // @synthesize soundCloudGoURLServicePresenter=_soundCloudGoURLServicePresenter;
@property(readonly, nonatomic) Appboy *appboy; // @synthesize appboy=_appboy;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (void)dismissCurrentMessageImmediatelyWithNoAnimation;
- (_Bool)onInAppMessageButtonClicked:(id)arg1 button:(id)arg2;
- (_Bool)onInAppMessageHTMLButtonClicked:(id)arg1 clickedURL:(id)arg2 buttonID:(id)arg3;
- (_Bool)onInAppMessageClicked:(id)arg1;
- (_Bool)processPrestitialUrl:(id)arg1;
- (id)initWithApplication:(id)arg1 appboy:(id)arg2 soundCloudGoURLServicePresenter:(id)arg3 soundCloudPlanPickerURLServicePresenter:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

