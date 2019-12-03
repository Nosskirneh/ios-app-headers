//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTPopupManager, SPTSocialListeningGLUETheme;
@protocol SPTSocialListeningDialogPresenterDelegate;

@interface SPTSocialListeningDialogPresenter : NSObject
{
    id <SPTSocialListeningDialogPresenterDelegate> _delegate;
    SPTPopupManager *_popupManager;
    SPTSocialListeningGLUETheme *_theme;
}

@property(readonly, nonatomic) SPTSocialListeningGLUETheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(nonatomic) __weak id <SPTSocialListeningDialogPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)presentSessionDeletedDialogWhenHostLeaves:(id)arg1;
- (void)confirmDeleteSessionTapped;
- (void)presentConfirmDeleteSessionDialog;
- (id)initWithTheme:(id)arg1 popupManager:(id)arg2;

@end
