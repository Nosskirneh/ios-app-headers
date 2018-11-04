//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPTPageController.h"

@class GLUEViewAnimator, NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface SettingsViewController : SPTableViewController <SPTPageController>
{
    NSArray *_sections;
    id <SPTPageCreationContext> _pageCreationContext;
    id <SPTContainerUIService> _containerUIService;
    id <SPTNavigationRouter> _navigationRouter;
    id <SPTLinkDispatcher> _linkDispatcher;
    NSMutableDictionary *_headerViews;
    NSMutableDictionary *_footerViews;
    NSString *_pageIdentifier;
    NSString *_viewURI;
    NSDictionary *_pushedSubSection;
    GLUEViewAnimator *_animator;
}

+ (Class)tableViewClass;
@property(retain, nonatomic) GLUEViewAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NSDictionary *pushedSubSection; // @synthesize pushedSubSection=_pushedSubSection;
@property(copy, nonatomic) NSString *viewURI; // @synthesize viewURI=_viewURI;
@property(retain, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(retain, nonatomic) NSMutableDictionary *footerViews; // @synthesize footerViews=_footerViews;
@property(retain, nonatomic) NSMutableDictionary *headerViews; // @synthesize headerViews=_headerViews;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) id <SPTNavigationRouter> navigationRouter; // @synthesize navigationRouter=_navigationRouter;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(readonly, nonatomic) id <SPTPageCreationContext> pageCreationContext; // @synthesize pageCreationContext=_pageCreationContext;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (id)getPushedSubSection;
- (id)viewControllerForSection:(id)arg1 context:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 footerViewForSection:(long long)arg2;
- (id)tableView:(id)arg1 headerViewForSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)settingsSectionDidReloadHeaderAndFooter:(id)arg1;
- (void)settingsSectionDidEndUpdating:(id)arg1;
- (void)settingsSection:(id)arg1 didUpdateRows:(id)arg2;
- (void)settingsSection:(id)arg1 didDeleteRows:(id)arg2;
- (void)settingsSection:(id)arg1 didInsertRows:(id)arg2;
- (void)settingsSectionDidStartUpdating:(id)arg1;
- (void)settingsSectionDidReload:(id)arg1 animated:(_Bool)arg2;
- (id)indexPathsForIndices:(id)arg1 inSettingsSection:(id)arg2;
- (_Bool)foundView:(id)arg1 inCell:(id *)arg2 atIndexPath:(id *)arg3;
- (void)keyboardWillHideNotification:(id)arg1;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)themeSettingsChangedNotification;
- (void)applyThemeLayout;
- (_Bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)replaceSections:(id)arg1;
- (id)initWithNavigationRouter:(id)arg1 linkDispatcher:(id)arg2;
- (id)parsedSectionsWithObject:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1 navigationRouter:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

