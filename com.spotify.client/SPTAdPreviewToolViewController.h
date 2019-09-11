//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class GLUEButton, NSArray, NSString, NSURL, SPTAdPreviewToolDataLoader, SPTInfoView, SPTProgressView, SPTTableView, SPTTheme, UISegmentedControl, UITextField;
@protocol SPTLinkDispatcher, SPTPageContainer;

@interface SPTAdPreviewToolViewController : UIViewController <SPTPageController, UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITextField *_identifierTextField;
    UISegmentedControl *_typeSegmentedControl;
    SPTTableView *_resultsTableView;
    GLUEButton *_fetchCreativesButton;
    SPTTheme *_theme;
    NSArray *_layoutConstraints;
    SPTAdPreviewToolDataLoader *_previewDataloader;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTProgressView *_progressIndicator;
    SPTInfoView *_infoView;
    NSArray *_previewViewModels;
}

@property(retain, nonatomic) NSArray *previewViewModels; // @synthesize previewViewModels=_previewViewModels;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTProgressView *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTAdPreviewToolDataLoader *previewDataloader; // @synthesize previewDataloader=_previewDataloader;
@property(copy, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) GLUEButton *fetchCreativesButton; // @synthesize fetchCreativesButton=_fetchCreativesButton;
@property(retain, nonatomic) SPTTableView *resultsTableView; // @synthesize resultsTableView=_resultsTableView;
@property(retain, nonatomic) UISegmentedControl *typeSegmentedControl; // @synthesize typeSegmentedControl=_typeSegmentedControl;
@property(retain, nonatomic) UITextField *identifierTextField; // @synthesize identifierTextField=_identifierTextField;
- (void).cxx_destruct;
- (id)sectionTitle;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (long long)typeFromSegementIndex:(long long)arg1;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)fetchCreativesPressed;
- (id)createLayoutConstraints;
- (void)addConstraintsIfNeeded;
- (void)updateText;
- (void)setupProgressIndicator;
- (void)setupNoResultsView;
- (void)setupResultsTableView;
- (void)setupFetchCreativesButton;
- (void)setupSegmentControl;
- (void)setupIdentifierTextField;
- (void)viewDidLoad;
- (id)initWithPreviewDataLoader:(id)arg1 linkDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

