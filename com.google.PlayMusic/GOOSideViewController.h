//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOOPanelViewControllerChild-Protocol.h"
#import "GOOSideViewCarouselViewDelegate-Protocol.h"
#import "GOOSideViewContentViewDelegate-Protocol.h"
#import "GOOSideViewControllerAuthHelper-Protocol.h"
#import "GOOSideViewProfileContainerDelegate-Protocol.h"
#import "GOOSideViewProfileDataSource-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class GOOPanelViewController, GOOSideViewCollectionDataSource, GOOSideViewProductLockup, NSArray, NSIndexPath, NSString, QTMColorGroup, UIView;
@protocol GOOSideViewContentView, GOOSideViewControllerAuthHelper, GOOSideViewControllerDelegate, GOOSideViewControllerPrivacyPolicyToSHandler, GOOSideViewItemDataSource, GOOSideViewProfile, GOOSideViewProfileDataSource;

@interface GOOSideViewController : UIViewController <GOOPanelViewControllerChild, GOOSideViewProfileDataSource, GOOSideViewCarouselViewDelegate, GOOSideViewContentViewDelegate, GOOSideViewControllerAuthHelper, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, GOOSideViewProfileContainerDelegate>
{
    UIView<GOOSideViewContentView> *_contentView;
    long long _sideViewStyle;
    long long _viewMode;
    GOOSideViewCollectionDataSource *_profileCollectionDataSource;
    GOOSideViewCollectionDataSource *_itemCollectionDataSource;
    NSIndexPath *_pendingSelectedItemIndexPath;
    struct CGPoint _pendingItemsContentOffset;
    _Bool _isBatchUpdating;
    _Bool _reloadItemsOnBatchUpdate;
    _Bool _disableAccountSwitching;
    _Bool _additionalItemsAdjustFontForContentSizeCategory;
    _Bool _sectionHeadersAdjustFontForContentSizeCategory;
    _Bool _scrollContentToTopOnHide;
    _Bool _showPrivacyPolicy;
    _Bool _showTermsOfService;
    id <GOOSideViewProfileDataSource> _profileDataSource;
    id <GOOSideViewItemDataSource> _itemDataSource;
    GOOSideViewProductLockup *_productLockup;
    id <GOOSideViewControllerDelegate> _delegate;
    NSArray *_supportedActions;
    id <GOOSideViewProfile> _selectedProfile;
    QTMColorGroup *_colorGroup;
    id <GOOSideViewControllerAuthHelper> _authHelper;
    id <GOOSideViewControllerPrivacyPolicyToSHandler> _privacyPolicyHandler;
    long long _maxNumberOfAccountsToShow;
    GOOPanelViewController *_panelViewController;
    NSIndexPath *_deselectIndexPathOnPanelHide;
}

@property(nonatomic) _Bool showTermsOfService; // @synthesize showTermsOfService=_showTermsOfService;
@property(nonatomic) _Bool showPrivacyPolicy; // @synthesize showPrivacyPolicy=_showPrivacyPolicy;
@property(retain, nonatomic) NSIndexPath *deselectIndexPathOnPanelHide; // @synthesize deselectIndexPathOnPanelHide=_deselectIndexPathOnPanelHide;
@property(nonatomic) __weak GOOPanelViewController *panelViewController; // @synthesize panelViewController=_panelViewController;
@property(nonatomic) _Bool scrollContentToTopOnHide; // @synthesize scrollContentToTopOnHide=_scrollContentToTopOnHide;
@property(nonatomic) long long maxNumberOfAccountsToShow; // @synthesize maxNumberOfAccountsToShow=_maxNumberOfAccountsToShow;
@property(nonatomic) __weak id <GOOSideViewControllerPrivacyPolicyToSHandler> privacyPolicyHandler; // @synthesize privacyPolicyHandler=_privacyPolicyHandler;
@property(nonatomic) __weak id <GOOSideViewControllerAuthHelper> authHelper; // @synthesize authHelper=_authHelper;
@property(nonatomic) _Bool sectionHeadersAdjustFontForContentSizeCategory; // @synthesize sectionHeadersAdjustFontForContentSizeCategory=_sectionHeadersAdjustFontForContentSizeCategory;
@property(nonatomic) _Bool additionalItemsAdjustFontForContentSizeCategory; // @synthesize additionalItemsAdjustFontForContentSizeCategory=_additionalItemsAdjustFontForContentSizeCategory;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(retain, nonatomic) id <GOOSideViewProfile> selectedProfile; // @synthesize selectedProfile=_selectedProfile;
@property(retain, nonatomic) NSArray *supportedActions; // @synthesize supportedActions=_supportedActions;
@property(nonatomic) _Bool disableAccountSwitching; // @synthesize disableAccountSwitching=_disableAccountSwitching;
@property(nonatomic) __weak id <GOOSideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GOOSideViewProductLockup *productLockup; // @synthesize productLockup=_productLockup;
@property(nonatomic) __weak id <GOOSideViewItemDataSource> itemDataSource; // @synthesize itemDataSource=_itemDataSource;
@property(nonatomic) __weak id <GOOSideViewProfileDataSource> profileDataSource; // @synthesize profileDataSource=_profileDataSource;
- (void).cxx_destruct;
- (void)requestAuthorizedURLForAccount:(id)arg1 targetURL:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)actionsForSection:(long long)arg1;
- (void)handleHeaderButtonTapped:(id)arg1;
- (void)notifyDelegateSwitchingFinished;
- (void)updateMultipleSelectionState;
- (void)endSwitchToProfile:(id)arg1;
- (void)beginSwitchToProfileAtIndex:(long long)arg1 notifyDelegateFinished:(_Bool)arg2;
- (long long)appearDirectionForViewMode:(long long)arg1;
- (id)collectionDelegateFlowLayoutForViewMode:(long long)arg1;
- (id)collectionDataSourceForViewMode:(long long)arg1;
- (long long)sideViewModeForCarouselViewMode:(long long)arg1;
- (long long)carouselViewModeForSideViewMode:(long long)arg1;
- (void)didHidePanelOrDrawer;
- (void)hidePanelAnimated:(_Bool)arg1;
- (void)callDelegateToRequestSwitchToProfile:(id)arg1 profileIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)callDelegateToShowSettingsView;
- (void)callDelegateToShowSignInView;
- (void)callDelegateToShowManageProfilesView;
- (_Bool)accountViewRequiresAttention;
- (_Bool)contentViewShouldShowProductSettings:(id)arg1;
- (void)contentViewDidTapProductSettings:(id)arg1;
- (void)contentViewDidTapSignIn:(id)arg1;
- (void)contentViewDidTapAccountSettings:(id)arg1;
- (void)contentView:(id)arg1 didSelectAccount:(id)arg2 atIndex:(long long)arg3;
- (void)profileDataSource:(id)arg1 didChangeProfile:(id)arg2 atIndex:(long long)arg3;
- (void)numberOfProfilesChangedForProfileDataSource:(id)arg1;
- (void)panelViewController:(id)arg1 didHidePanelViewController:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)carouselViewDidFinishSelectingProfile:(id)arg1;
- (void)carouselView:(id)arg1 didSelectProfile:(id)arg2 atIndex:(long long)arg3;
- (void)carouselView:(id)arg1 willChangeViewMode:(long long)arg2;
- (id)sideViewContainer:(id)arg1 profileAtIndex:(long long)arg2;
- (long long)numberOfProfilesInSideViewContainer:(id)arg1;
- (void)setNeedsLayoutUponUserInterfaceChange;
- (void)enableTermsOfService;
- (void)hideTermsOfService;
- (void)enablePrivacyPolicy;
- (void)hidePrivacyPolicy;
- (void)reloadSignInButton;
- (void)updateContentViewDisplayOptions;
- (void)switchToViewMode:(long long)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)reloadItemData;
- (void)deselectItemAtIndexPath:(id)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

