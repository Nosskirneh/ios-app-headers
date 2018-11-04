//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTGaiaDeviceAppearanceMapping, SPTGaiaLogger, SPTGaiaPopupContentViewController, SPTPopupDialog, SPTTheme;

@interface SPTGaiaOnboardingPopupController : NSObject
{
    SPTTheme *_theme;
    SPTGaiaDeviceAppearanceMapping *_iconMapper;
    CDUnknownBlockType _completion;
    SPTPopupDialog *_currentDialog;
    SPTGaiaPopupContentViewController *_contentViewController;
    SPTGaiaLogger *_logger;
}

@property(readonly, nonatomic) SPTGaiaLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTGaiaPopupContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) SPTPopupDialog *currentDialog; // @synthesize currentDialog=_currentDialog;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SPTGaiaDeviceAppearanceMapping *iconMapper; // @synthesize iconMapper=_iconMapper;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)popupDialogForDevice:(id)arg1;
- (void)dismissButtonAction:(id)arg1;
- (void)continueButtonAction:(id)arg1;
- (void)dismiss;
@property(readonly, nonatomic, getter=isDisplayingPopupDialog) _Bool displayingPopupDialog;
- (void)showPopupWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithTheme:(id)arg1 deviceIconMapper:(id)arg2 logger:(id)arg3;

@end

