//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ChildViewControllerTransitionDelegate-Protocol.h"
#import "OnboardingWindowPresentable-Protocol.h"
#import "TaggableScreen-Protocol.h"
#import "_TtP10SoundCloud15DimViewDelegate_-Protocol.h"
#import "_TtP10SoundCloud16SearchUIObserver_-Protocol.h"
#import "_TtP10SoundCloud30SearchAutoCompleteViewDelegate_-Protocol.h"
#import "_TtP2UI24ScrollableViewController_-Protocol.h"
#import "_TtP6Search16SearchPerforming_-Protocol.h"

@class ChildViewControllerTransition, GoogleCastStateObserver, NSString, SearchResultViewController, SearchStoryboard, TaggingContext, UISearchController, UIView, UIWindow, _TtC10SoundCloud14SearchDelegate, _TtC10SoundCloud24GoogleCastFeatureManager, _TtC10SoundCloud24SearchAutoCompleteTagger, _TtC10SoundCloud32SearchAutoCompleteViewController;
@protocol _TtP6Search25SearchChildViewController_, _TtP8Features23AppPerformanceProfiling_;

@interface SearchViewController : UIViewController <ChildViewControllerTransitionDelegate, _TtP6Search16SearchPerforming_, _TtP10SoundCloud30SearchAutoCompleteViewDelegate_, _TtP10SoundCloud16SearchUIObserver_, _TtP10SoundCloud15DimViewDelegate_, _TtP2UI24ScrollableViewController_, TaggableScreen, OnboardingWindowPresentable>
{
    UIWindow *onboardingWindow;
    UIView *_containerView;
    ChildViewControllerTransition *_childViewControllerTransition;
    UIViewController<_TtP6Search25SearchChildViewController_> *_childViewController;
    SearchStoryboard *_searchStoryboard;
    SearchResultViewController *_searchResultViewController;
    _TtC10SoundCloud32SearchAutoCompleteViewController *_searchAutoCompleteViewController;
    UISearchController *_uiSearchController;
    _TtC10SoundCloud24SearchAutoCompleteTagger *_eventTagger;
    GoogleCastStateObserver *_castObserver;
    _TtC10SoundCloud14SearchDelegate *_searchDelegate;
    _TtC10SoundCloud24GoogleCastFeatureManager *_castFeatureManager;
    id <_TtP8Features23AppPerformanceProfiling_> _appPerformanceProfiler;
}

@property(retain, nonatomic) id <_TtP8Features23AppPerformanceProfiling_> appPerformanceProfiler; // @synthesize appPerformanceProfiler=_appPerformanceProfiler;
@property(retain, nonatomic) _TtC10SoundCloud24GoogleCastFeatureManager *castFeatureManager; // @synthesize castFeatureManager=_castFeatureManager;
@property(retain, nonatomic) _TtC10SoundCloud14SearchDelegate *searchDelegate; // @synthesize searchDelegate=_searchDelegate;
@property(retain, nonatomic) GoogleCastStateObserver *castObserver; // @synthesize castObserver=_castObserver;
@property(retain, nonatomic) _TtC10SoundCloud24SearchAutoCompleteTagger *eventTagger; // @synthesize eventTagger=_eventTagger;
@property(retain, nonatomic) UISearchController *uiSearchController; // @synthesize uiSearchController=_uiSearchController;
@property(retain, nonatomic) _TtC10SoundCloud32SearchAutoCompleteViewController *searchAutoCompleteViewController; // @synthesize searchAutoCompleteViewController=_searchAutoCompleteViewController;
@property(retain, nonatomic) SearchResultViewController *searchResultViewController; // @synthesize searchResultViewController=_searchResultViewController;
@property(retain, nonatomic) SearchStoryboard *searchStoryboard; // @synthesize searchStoryboard=_searchStoryboard;
@property(retain, nonatomic) UIViewController<_TtP6Search25SearchChildViewController_> *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) ChildViewControllerTransition *childViewControllerTransition; // @synthesize childViewControllerTransition=_childViewControllerTransition;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIWindow *onboardingWindow; // @synthesize onboardingWindow;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isShowingSearchResults;
- (void)scrollToTop;
- (void)dimViewDidHide;
- (void)searchCancelButtonClicked;
- (void)didPressIpadCancelBarButtonItem;
- (void)searchWillPresentResultsController;
- (void)searchButtonClicked:(id)arg1;
- (void)searchTextDidChange:(id)arg1;
- (void)searchDidBegin;
- (void)didSelectArrowFor:(id)arg1 queryUrn:(id)arg2 queryPosition:(long long)arg3;
- (void)didSelectAutoCompletionWithOutput:(id)arg1 apiQuery:(id)arg2 queryUrn:(id)arg3 queryPosition:(long long)arg4;
- (void)didSelectLocalSuggestionWithUrn:(id)arg1 queryPosition:(long long)arg2;
@property(readonly, nonatomic) TaggingContext *sourceContext;
@property(readonly, nonatomic) long long screen;
- (void)searchWithQuery:(id)arg1 queryUrn:(id)arg2;
- (void)childViewControllerTransition:(id)arg1 didAddChildViewController:(id)arg2;
- (void)transitionToViewController:(id)arg1;
- (void)setupChildViewControllerTransition;
- (void)addMissingCancelButtonOnIpad;
- (void)setupSearchBar;
- (void)setupSearchController;
- (void)setupAutoCompletion;
- (void)setupSearch;
- (void)tagSearchExit;
- (void)removeGoogleCastButton;
- (void)addGoogleCastButtonIfNecessary;
- (void)updateGoogleCastButton:(_Bool)arg1;
- (void)observeGoogleCastState;
- (long long)visibleViewControllerScreen;
- (void)showSearchResultWithQuery:(id)arg1 queryUrn:(id)arg2;
- (void)showShadowForViewController:(id)arg1;
- (void)updateTitle;
- (void)startMeasuringDiscoveryTabLoadPerformance;
- (void)setupWithDiscoveryViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
