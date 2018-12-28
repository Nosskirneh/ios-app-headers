//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "SSOAccountSelectorIdentityContentViewDelegate-Protocol.h"

@class NITableViewActions, NSArray, NSMutableArray, NSString, SSOAccountHeaderLabelView, SSOAccountSelectorModel, SSOActivityShieldView, SSOIdentity, SSOProfileSource, UIBarButtonItem, UIButton;
@protocol SSOAccountSelectorDelegate, SSOService;

@interface SSOAccountSelectorViewController : QTMCollectionViewController <SSOAccountSelectorIdentityContentViewDelegate>
{
    _Bool _requiresSignIn;
    _Bool _supportsMultipleSelection;
    _Bool _externallyTriggeredDismissal;
    _Bool _disableAccountManagement;
    _Bool _showsCancelButton;
    _Bool _shouldAutorotateValue;
    _Bool _removing;
    _Bool _signingIn;
    id <SSOAccountSelectorDelegate> _accountSelectorDelegate;
    SSOIdentity *_signedInIdentity;
    NSString *_shortAppName;
    NSString *_accountsHeaderTitle;
    NSMutableArray *_selectedIdentities;
    id <SSOService> _service;
    long long _appearance;
    SSOProfileSource *_profileSource;
    NSMutableArray *_orderedIdentities;
    unsigned long long _supportedOrientations;
    NSArray *_oldIdentities;
    UIBarButtonItem *_manageButton;
    UIButton *_closeButton;
    SSOAccountHeaderLabelView *_accountsHeaderView;
    SSOActivityShieldView *_removeShieldView;
    SSOIdentity *_identityPendingRemoval;
    NSArray *_hiddenLeftBarButtonItems;
    NITableViewActions *_actions;
}

@property(retain, nonatomic) NITableViewActions *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSArray *hiddenLeftBarButtonItems; // @synthesize hiddenLeftBarButtonItems=_hiddenLeftBarButtonItems;
@property(retain, nonatomic) SSOIdentity *identityPendingRemoval; // @synthesize identityPendingRemoval=_identityPendingRemoval;
@property(retain, nonatomic) SSOActivityShieldView *removeShieldView; // @synthesize removeShieldView=_removeShieldView;
@property(retain, nonatomic) SSOAccountHeaderLabelView *accountsHeaderView; // @synthesize accountsHeaderView=_accountsHeaderView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIBarButtonItem *manageButton; // @synthesize manageButton=_manageButton;
@property(retain, nonatomic) NSArray *oldIdentities; // @synthesize oldIdentities=_oldIdentities;
@property(nonatomic, getter=isSigningIn) _Bool signingIn; // @synthesize signingIn=_signingIn;
@property(nonatomic, getter=isRemoving) _Bool removing; // @synthesize removing=_removing;
@property(nonatomic) unsigned long long supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) _Bool shouldAutorotateValue; // @synthesize shouldAutorotateValue=_shouldAutorotateValue;
@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(retain, nonatomic) NSMutableArray *orderedIdentities; // @synthesize orderedIdentities=_orderedIdentities;
@property(retain, nonatomic) SSOProfileSource *profileSource; // @synthesize profileSource=_profileSource;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property(nonatomic) _Bool disableAccountManagement; // @synthesize disableAccountManagement=_disableAccountManagement;
@property(retain, nonatomic) id <SSOService> service; // @synthesize service=_service;
@property(nonatomic) _Bool externallyTriggeredDismissal; // @synthesize externallyTriggeredDismissal=_externallyTriggeredDismissal;
@property(readonly, nonatomic) NSMutableArray *selectedIdentities; // @synthesize selectedIdentities=_selectedIdentities;
@property(readonly, nonatomic) _Bool supportsMultipleSelection; // @synthesize supportsMultipleSelection=_supportsMultipleSelection;
@property(readonly, copy, nonatomic) NSString *accountsHeaderTitle; // @synthesize accountsHeaderTitle=_accountsHeaderTitle;
@property(copy, nonatomic) NSString *shortAppName; // @synthesize shortAppName=_shortAppName;
@property(retain, nonatomic) SSOIdentity *signedInIdentity; // @synthesize signedInIdentity=_signedInIdentity;
@property(readonly, nonatomic) _Bool requiresSignIn; // @synthesize requiresSignIn=_requiresSignIn;
@property(readonly, nonatomic) __weak id <SSOAccountSelectorDelegate> accountSelectorDelegate; // @synthesize accountSelectorDelegate=_accountSelectorDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) SSOAccountSelectorModel *accountSelectorModel;
- (void)accountSelectorIdentityContentViewDidToggle:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (void)accountSelectorIdentityContentViewDidTapRemove:(id)arg1;
- (void)singleAppSignOutButtonDidTap:(id)arg1;
- (void)close:(id)arg1;
- (void)accountDidSelect:(id)arg1 indexPath:(id)arg2;
- (void)manageAccountDidTap;
- (void)didSelectIdentityRequringReauth:(id)arg1;
- (void)addAccountDidTap:(id)arg1 indexPath:(id)arg2;
- (void)identityListDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleForSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 innerBackgroundColorForHeaderAtSection:(long long)arg2;
- (void)removeIdentityDidCancel;
- (void)hideRemoveIdentityShield;
- (void)showRemoveIdentityShield;
- (void)removeIdentity:(id)arg1;
- (void)removeIdentityDidConfirm:(id)arg1;
- (void)confirmRemoveIdentity:(id)arg1;
- (void)addAndSelectIdentity:(id)arg1;
- (void)updateSignedInIdentity:(id)arg1 animated:(_Bool)arg2;
- (_Bool)canSelectIdentityForRow:(long long)arg1;
- (void)filterThroughClientWithIdentity:(id)arg1 profile:(id)arg2;
- (void)refreshProfiles;
- (void)reloadOrderedIdentities;
- (void)purgeInvalidSelectedIdentities;
- (void)setRightBarButtonItemEnabled:(_Bool)arg1;
- (void)updateHeaderBarState;
- (void)updateLeftBarButtonItems;
- (void)toggleRemove:(id)arg1;
- (void)updateModel;
- (_Bool)shouldShowAccountManagerOption;
- (_Bool)shouldReplaceManageButtonWithAccountManagerOption;
- (struct CGSize)preferredContentSize;
- (id)identityForIndexPath:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initForMultipleSelectionWithService:(id)arg1 shouldAutoRotate:(_Bool)arg2 supportedOrientations:(unsigned long long)arg3 requiresSignIn:(_Bool)arg4 accountsHeaderTitle:(id)arg5 selectedIdentities:(id)arg6 delegate:(id)arg7;
- (id)initWithService:(id)arg1 requiresSignIn:(_Bool)arg2 signedInIdentity:(id)arg3 delegate:(id)arg4;
- (id)initWithService:(id)arg1 showsCancelButton:(_Bool)arg2 shouldAutoRotate:(_Bool)arg3 supportedOrientations:(unsigned long long)arg4 requiresSignIn:(_Bool)arg5 accountsHeaderTitle:(id)arg6 signedInIdentity:(id)arg7 delegate:(id)arg8;
- (id)initWithService:(id)arg1 showsCancelButton:(_Bool)arg2 shouldAutoRotate:(_Bool)arg3 supportedOrientations:(unsigned long long)arg4 requiresSignIn:(_Bool)arg5 supportsMultipleSelection:(_Bool)arg6 accountsHeaderTitle:(id)arg7 signedInIdentity:(id)arg8 delegate:(id)arg9;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

