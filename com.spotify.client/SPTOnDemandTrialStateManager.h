//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTOnDemandTrialDialogsPresenter;
@protocol SPTLocalSettings, SPTOnDemandTrialTestManager, SPTProductState;

@interface SPTOnDemandTrialStateManager : NSObject
{
    id <SPTLocalSettings> _localSettings;
    id <SPTOnDemandTrialTestManager> _testManager;
    SPTOnDemandTrialDialogsPresenter *_dialogsPresenter;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) SPTOnDemandTrialDialogsPresenter *dialogsPresenter; // @synthesize dialogsPresenter=_dialogsPresenter;
@property(readonly, nonatomic) id <SPTOnDemandTrialTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
- (void).cxx_destruct;
- (void)displayPopup;
- (void)updateTrialState:(_Bool)arg1;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (id)initWithTestManager:(id)arg1 localSettings:(id)arg2 dialogsPresenter:(id)arg3 productState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

