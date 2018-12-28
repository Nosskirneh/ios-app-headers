//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "GOOSwitchContentViewDelegate-Protocol.h"
#import "QTMCollectionViewStyleDelegate-Protocol.h"
#import "UDCClearcutLoggingPerformer-Protocol.h"
#import "UDCConsentViewControllerDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class GOOLoadingContentViewObject, GOONavigationStyle, GOOTextContentViewObject, GTLRUserDataControls_SettingOverviewConfig, NSMutableDictionary, NSNumber, NSSet, NSString, UDCAttributedLabelDelegate, UDCOverviewModel, UIScrollView, UIView;
@protocol GIDAuthBrowserOpener, UDCClearcutHelper, UDCOptions;

@interface UDCDetailsViewController : QTMCollectionViewController <GOOSwitchContentViewDelegate, GOONavigationCustomization, QTMCollectionViewStyleDelegate, UDCClearcutLoggingPerformer, UDCConsentViewControllerDelegate, UICollectionViewDelegate>
{
    UDCOverviewModel *_UDCModel;
    NSNumber *_topLevelSettingID;
    UDCAttributedLabelDelegate *_labelDelegate;
    GTLRUserDataControls_SettingOverviewConfig *_config;
    NSMutableDictionary *_switches;
    NSMutableDictionary *_switchActions;
    NSMutableDictionary *_settingStates;
    GOOTextContentViewObject *_actionButton;
    GOOTextContentViewObject *_manageButton;
    id <UDCOptions> _options;
    id <GIDAuthBrowserOpener> _authBrowserOpener;
    GOOLoadingContentViewObject *_loadingContentViewObject;
    id <UDCClearcutHelper> _clearcutHelper;
    int _clearcutEventFlowID;
    _Bool _shouldLogScreenDisplayed;
}

@property(readonly, nonatomic) int clearcutEventFlowID; // @synthesize clearcutEventFlowID=_clearcutEventFlowID;
@property(readonly, nonatomic) id <UDCClearcutHelper> clearcutHelper; // @synthesize clearcutHelper=_clearcutHelper;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (unsigned long long)collectionView:(id)arg1 footerStyleForSection:(long long)arg2;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleInsetsForSection:(long long)arg2;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (void)consentViewController:(id)arg1 didReturn:(long long)arg2 params:(id)arg3;
- (void)switchObject:(id)arg1 didUpdateSwitch:(_Bool)arg2;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (long long)preferredStatusBarStyle;
- (void)changeSetting:(id)arg1 action:(id)arg2 state:(id)arg3;
- (void)updateModelWithSectionedArray:(id)arg1;
- (void)showDetails;
- (void)showError:(id)arg1;
- (void)showLoadingContent;
- (void)updateUIFromModel;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)modelDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithModel:(id)arg1 options:(id)arg2 forSetting:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end

