//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EX2Action-Protocol.h"

@class ANGAlertButton, ANGDialog, ANGFullAlertViewController, ANGModalAlertView, EX2ActionQueue, NSMutableDictionary, NSString, UIActivityIndicatorView, UIAlertController, UILabel, UIView;

@interface ANGAlertView : NSObject <EX2Action>
{
    _Bool _disableActionButton;
    _Bool _dontDismissAlert;
    int _actionState;
    ANGDialog *_dialog;
    CDUnknownBlockType _onDismiss;
    EX2ActionQueue *_actionQueue;
    ANGAlertView *_selfRef;
    UIAlertController *_tvAlert;
    NSMutableDictionary *_buttonsDict;
    UIView *_view;
    UIActivityIndicatorView *_activityIndicator;
    ANGAlertButton *_activeLoadingButton;
    NSString *_title;
    double _autoDismissTimeInterval;
    CDUnknownBlockType _autoDismissBlock;
    ANGFullAlertViewController *_fullAlertVC;
    ANGModalAlertView *_modalAlertVC;
    double _height;
    UIView *_alertContainerView;
    UILabel *_messageLabel;
    struct CGRect _originalPosition;
}

+ (id)alertFromDialog:(id)arg1 image:(id)arg2 actionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 customView:(id)arg5;
+ (id)alertFromDialog:(id)arg1 image:(id)arg2 actionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4 remoteImage:(id)arg5 imageSize:(struct CGSize)arg6;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4 remoteImage:(id)arg5;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2 andDontDismissAlert:(_Bool)arg3;
+ (id)alertWithTitle:(id)arg1 message:(id)arg2;
+ (id)sharedActionQueue;
+ (void)clearQueue;
+ (void)initialize;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *alertContainerView; // @synthesize alertContainerView=_alertContainerView;
@property(nonatomic) double height; // @synthesize height=_height;
@property _Bool dontDismissAlert; // @synthesize dontDismissAlert=_dontDismissAlert;
@property(retain, nonatomic) ANGModalAlertView *modalAlertVC; // @synthesize modalAlertVC=_modalAlertVC;
@property(retain, nonatomic) ANGFullAlertViewController *fullAlertVC; // @synthesize fullAlertVC=_fullAlertVC;
@property(copy, nonatomic) CDUnknownBlockType autoDismissBlock; // @synthesize autoDismissBlock=_autoDismissBlock;
@property double autoDismissTimeInterval; // @synthesize autoDismissTimeInterval=_autoDismissTimeInterval;
@property _Bool disableActionButton; // @synthesize disableActionButton=_disableActionButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) ANGAlertButton *activeLoadingButton; // @synthesize activeLoadingButton=_activeLoadingButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property struct CGRect originalPosition; // @synthesize originalPosition=_originalPosition;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSMutableDictionary *buttonsDict; // @synthesize buttonsDict=_buttonsDict;
@property(retain, nonatomic) UIAlertController *tvAlert; // @synthesize tvAlert=_tvAlert;
@property(retain, nonatomic) ANGAlertView *selfRef; // @synthesize selfRef=_selfRef;
@property int actionState; // @synthesize actionState=_actionState;
@property EX2ActionQueue *actionQueue; // @synthesize actionQueue=_actionQueue;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(retain, nonatomic) ANGDialog *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)autoDismiss;
- (void)checkAutoDismiss;
- (void)setAutoDismissDelay:(double)arg1 dismissBlock:(CDUnknownBlockType)arg2;
- (void)addCancelButton;
- (id)buttonWithStyle:(unsigned long long)arg1;
- (void)setActionButtonDisable:(_Bool)arg1;
- (_Bool)cancelAction;
- (void)runAction;
- (void)hideLoading;
- (void)showLoadingOnButtonType:(unsigned long long)arg1;
- (void)executeActionForButton:(id)arg1;
- (void)executeActionForAlertButton:(id)arg1 animated:(_Bool)arg2;
- (void)setDismissed;
- (void)dismissWithClickedButton:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)alertButtonClicked:(id)arg1;
- (void)hideFullAlert;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)dealloc;
- (void)show;
- (void)tvOSShow;
- (void)iOSShow;
- (void)showInQueue;
- (id)alertIdentifier;
- (void)updateBelowButtonPosition;
- (void)setButtonWithStyle:(unsigned long long)arg1 title:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)messageLabelColor;
- (id)messageLabelFont;
- (double)imageHeightWithRemote:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4 remoteImage:(id)arg5 imageSize:(struct CGSize)arg6 andDontDismissAlert:(_Bool)arg7;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4 remoteImage:(id)arg5 andDontDismissAlert:(_Bool)arg6;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4 remoteImage:(id)arg5;
- (id)initWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 customView:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

