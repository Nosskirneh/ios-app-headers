//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningModelObserver-Protocol.h"

@class NSString, SPTSocialListeningDialogPresenter, SPTSocialListeningEducationSlatePresenter;
@protocol SPTLocalSettings, SPTSnackbarConditionalPresenter, SPTSocialListeningModel;

@interface SPTSocialListeningDialogManager : NSObject <SPTSocialListeningModelObserver>
{
    SPTSocialListeningDialogPresenter *_dialogPresenter;
    SPTSocialListeningEducationSlatePresenter *_slatePresenter;
    id <SPTSnackbarConditionalPresenter> _snackbarPresenter;
    id <SPTSocialListeningModel> _model;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTSocialListeningModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) id <SPTSnackbarConditionalPresenter> snackbarPresenter; // @synthesize snackbarPresenter=_snackbarPresenter;
@property(readonly, nonatomic) SPTSocialListeningEducationSlatePresenter *slatePresenter; // @synthesize slatePresenter=_slatePresenter;
@property(readonly, nonatomic) SPTSocialListeningDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
- (void).cxx_destruct;
- (id)hostDisplayNameFromConnectedUsers:(id)arg1;
- (void)presentSnackbarWithMessage:(id)arg1;
- (void)presentNotificationForSession:(id)arg1 updateEvent:(id)arg2;
- (void)presentSlateForSession:(id)arg1;
- (void)socialListeningModel:(id)arg1 didDeleteSession:(id)arg2;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2 updateEvent:(id)arg3;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)dealloc;
- (id)initWithDialogPresenter:(id)arg1 slatePresenter:(id)arg2 snackbarPresenter:(id)arg3 model:(id)arg4 localSettings:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

