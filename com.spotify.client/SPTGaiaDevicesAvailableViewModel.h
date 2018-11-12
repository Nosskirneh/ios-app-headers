//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTGaiaManagerObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTGaiaDevicePickerAppearanceManager, SPTTheme, UIColor, UIImage;
@protocol SPTGaiaDevicesAvailableViewModelDelegate, SPTGaiaManager;

@interface SPTGaiaDevicesAvailableViewModel : NSObject <SPTGaiaManagerObserver>
{
    _Bool _hidesTextWhenDisconnected;
    _Bool _ignoreDevicePickerAvailability;
    id <SPTGaiaDevicesAvailableViewModelDelegate> _delegate;
    NSString *_title;
    NSString *_accessibilityTitle;
    UIImage *_icon;
    UIColor *_color;
    id <SPTGaiaManager> _gaiaManager;
    SPTGaiaDevicePickerAppearanceManager *_appearanceManager;
    SPTTheme *_theme;
    NSNotificationCenter *_notificationCenter;
    struct CGSize _iconSize;
}

@property(readonly, nonatomic) _Bool ignoreDevicePickerAvailability; // @synthesize ignoreDevicePickerAvailability=_ignoreDevicePickerAvailability;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTGaiaDevicePickerAppearanceManager *appearanceManager; // @synthesize appearanceManager=_appearanceManager;
@property(readonly, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(nonatomic) _Bool hidesTextWhenDisconnected; // @synthesize hidesTextWhenDisconnected=_hidesTextWhenDisconnected;
@property(copy, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) __weak id <SPTGaiaDevicesAvailableViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)inactiveFontColor;
- (id)activeFontColor;
- (id)createColor;
- (id)createIcon;
- (id)titleString;
- (id)createTitle;
- (void)updateContent;
- (void)gaiaManagerDidChangeConnectionTypesAvailable:(id)arg1;
- (void)gaiaManagerDidChangeAvailable:(id)arg1;
- (void)gaiaManagerDidChangeRemoteConnectionState:(id)arg1;
- (void)gaiaManagerDidChangeActiveDeviceName:(id)arg1;
- (void)setupIconSize;
- (void)addThemeLayoutObserver;
- (void)setupGaiaManager;
- (id)initWithGaiaManager:(id)arg1 theme:(id)arg2 appearanceManager:(id)arg3 notificationCenter:(id)arg4 ignoreDevicePickerAvailability:(_Bool)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

