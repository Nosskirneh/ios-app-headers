//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSocialListeningDialogPresenterDelegate-Protocol.h"
#import "SPTSocialListeningModelObserver-Protocol.h"
#import "SPTSocialListeningViewModel-Protocol.h"

@class NSArray, NSString, NSURL, SPTObserverManager, SPTSocialListeningDialogPresenter, UIColor, UIImage;
@protocol SPTLinkDispatcher, SPTShareEntityData, SPTShareEntityDataFactory, SPTSocialListeningModel, SPTSocialListeningTestManager;

@interface SPTSocialListeningViewModelImplementation : NSObject <SPTSocialListeningDialogPresenterDelegate, SPTSocialListeningViewModel, SPTSocialListeningModelObserver>
{
    SPTObserverManager *_observers;
    id <SPTSocialListeningModel> _model;
    id <SPTShareEntityDataFactory> _shareEntityDataFactory;
    SPTSocialListeningDialogPresenter *_dialogPresenter;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTSocialListeningTestManager> _testManager;
    NSString *_headerLabelText;
    NSString *_descriptionLabelText;
    NSString *_tryAgainLabelText;
    NSString *_leaveButtonText;
    NSURL *_currentSessionURL;
    UIImage *_scannablesImage;
    UIColor *_sessionColor;
    NSArray *_connectedUsers;
    unsigned long long _numberOfVisibleUsers;
    unsigned long long _numberOfOverflowUsers;
    unsigned long long _numberOfUsers;
    unsigned long long _participantListHeight;
}

@property(nonatomic) unsigned long long participantListHeight; // @synthesize participantListHeight=_participantListHeight;
@property(nonatomic) unsigned long long numberOfUsers; // @synthesize numberOfUsers=_numberOfUsers;
@property(nonatomic) unsigned long long numberOfOverflowUsers; // @synthesize numberOfOverflowUsers=_numberOfOverflowUsers;
@property(nonatomic) unsigned long long numberOfVisibleUsers; // @synthesize numberOfVisibleUsers=_numberOfVisibleUsers;
@property(copy, nonatomic) NSArray *connectedUsers; // @synthesize connectedUsers=_connectedUsers;
@property(copy, nonatomic) UIColor *sessionColor; // @synthesize sessionColor=_sessionColor;
@property(copy, nonatomic) UIImage *scannablesImage; // @synthesize scannablesImage=_scannablesImage;
@property(copy, nonatomic) NSURL *currentSessionURL; // @synthesize currentSessionURL=_currentSessionURL;
@property(copy, nonatomic) NSString *leaveButtonText; // @synthesize leaveButtonText=_leaveButtonText;
@property(copy, nonatomic) NSString *tryAgainLabelText; // @synthesize tryAgainLabelText=_tryAgainLabelText;
@property(copy, nonatomic) NSString *descriptionLabelText; // @synthesize descriptionLabelText=_descriptionLabelText;
@property(copy, nonatomic) NSString *headerLabelText; // @synthesize headerLabelText=_headerLabelText;
@property(readonly, nonatomic) id <SPTSocialListeningTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTSocialListeningDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(retain, nonatomic) id <SPTShareEntityDataFactory> shareEntityDataFactory; // @synthesize shareEntityDataFactory=_shareEntityDataFactory;
@property(retain, nonatomic) id <SPTSocialListeningModel> model; // @synthesize model=_model;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (void)presenterDidConfirmDeleteSession:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)socialListeningModelDidDeleteSession:(id)arg1;
- (void)socialListeningModel:(id)arg1 didReceiveError:(id)arg2;
- (void)socialListeningModel:(id)arg1 updatedSession:(id)arg2;
- (void)navigateToUserProfilePage:(id)arg1;
- (void)leaveOrDeleteSession;
@property(readonly, nonatomic) id <SPTShareEntityData> shareEntityData;
- (_Bool)showConfirmDeleteSessionDialog;
@property(readonly, nonatomic) _Bool shareLinkButtonHidden;
@property(readonly, nonatomic) _Bool scanCodeButtonHidden;
@property(readonly, nonatomic) _Bool leaveButtonHidden;
@property(readonly, nonatomic) _Bool tryAgainViewHidden;
@property(readonly, nonatomic) _Bool scannablesImageHidden;
@property(readonly, nonatomic) _Bool scannableViewHidden;
@property(readonly, nonatomic) long long state;
- (void)load;
- (id)initWithModel:(id)arg1 shareEntityDataFactory:(id)arg2 dialogPresenter:(id)arg3 linkDispatcher:(id)arg4 testManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

