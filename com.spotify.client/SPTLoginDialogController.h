//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTLoginTheme, SPTPopupManager;

@interface SPTLoginDialogController : NSObject
{
    SPTPopupManager *_popupManager;
    SPTLoginTheme *_theme;
}

+ (id)dialogButtonWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SPTLoginTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
- (void).cxx_destruct;
- (id)alertButtonAndHandlerWithButtons:(id)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 buttonsAndHandlers:(id)arg3;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)showAlertWithMessage:(id)arg1;
- (id)initWithPopupManager:(id)arg1 theme:(id)arg2;

@end

