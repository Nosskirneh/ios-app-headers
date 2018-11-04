//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SPTPageController.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class GLUETableViewCellStyle, NSArray, NSString, NSURL, SPTAdCosmosBridge, SPTAdGlobalSettingsController, SPTAdMobileOverlayController, SPTAdRegistryInformationManager, SPTAdTestingHandler, SPTAdsViewModel, SPTPlayerMftCanPlayChecker, SPTTableView, SettingsTextFieldTableViewCell;

@interface SPTAdTestViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, SPTPageController>
{
    _Bool _forcedFocusState;
    SPTAdCosmosBridge *_cosmosBridge;
    SPTAdTestingHandler *_adTestingHandler;
    SPTAdsViewModel *_adsViewModel;
    NSArray *_data;
    NSArray *_adUserIds;
    SettingsTextFieldTableViewCell *_textFieldCell;
    SPTAdGlobalSettingsController *_adSettingsController;
    SPTAdMobileOverlayController *_mobileOverlayController;
    SPTPlayerMftCanPlayChecker *_mftCanPlayChecker;
    id <SPTContainerUIService> _containerUIService;
    SPTAdRegistryInformationManager *_adInformationManager;
    id <SPTAdEventLogger> _adEventLogger;
    GLUETableViewCellStyle *_cellStyle;
}

@property(nonatomic) _Bool forcedFocusState; // @synthesize forcedFocusState=_forcedFocusState;
@property(retain, nonatomic) GLUETableViewCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) __weak id <SPTAdEventLogger> adEventLogger; // @synthesize adEventLogger=_adEventLogger;
@property(retain, nonatomic) SPTAdRegistryInformationManager *adInformationManager; // @synthesize adInformationManager=_adInformationManager;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) SPTPlayerMftCanPlayChecker *mftCanPlayChecker; // @synthesize mftCanPlayChecker=_mftCanPlayChecker;
@property(nonatomic) __weak SPTAdMobileOverlayController *mobileOverlayController; // @synthesize mobileOverlayController=_mobileOverlayController;
@property(retain, nonatomic) SPTAdGlobalSettingsController *adSettingsController; // @synthesize adSettingsController=_adSettingsController;
@property(retain, nonatomic) SettingsTextFieldTableViewCell *textFieldCell; // @synthesize textFieldCell=_textFieldCell;
@property(retain, nonatomic) NSArray *adUserIds; // @synthesize adUserIds=_adUserIds;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(nonatomic) __weak SPTAdsViewModel *adsViewModel; // @synthesize adsViewModel=_adsViewModel;
@property(retain, nonatomic) SPTAdTestingHandler *adTestingHandler; // @synthesize adTestingHandler=_adTestingHandler;
@property(nonatomic) __weak SPTAdCosmosBridge *cosmosBridge; // @synthesize cosmosBridge=_cosmosBridge;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)URI;
- (void)handleTestingToolResponse:(_Bool)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateAdUserID;
- (void)overrideAdUserId:(id)arg1;
- (void)showAlertBillboardDidDisplay:(_Bool)arg1;
- (void)showAlertPrerollDidPlay:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setFocusValueTargeting:(_Bool)arg1;
- (void)dealloc;
- (id)initWithCosmosBridge:(id)arg1 testingHandler:(id)arg2 adsViewModel:(id)arg3 adSettingsController:(id)arg4 mobileOverlayController:(id)arg5 debugUIPresenter:(id)arg6 mftRules:(id)arg7 linkDispatcher:(id)arg8 containerService:(id)arg9 adInformationManager:(id)arg10 adEventLogger:(id)arg11 cellStyle:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTTableView *tableView; // @dynamic tableView;

@end

