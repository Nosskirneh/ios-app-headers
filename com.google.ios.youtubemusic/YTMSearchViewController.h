//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMBaseInnerTubeViewController.h"

#import "GSKVoiceSearchViewControllerDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTInnerTubeNavigationEndpointResponderProvider-Protocol.h"
#import "YTLightweightScrollableDelegate-Protocol.h"
#import "YTMChipCloudViewDelegate-Protocol.h"
#import "YTMSearchQueryViewDelegate-Protocol.h"
#import "YTMSearchSuggestionsTableViewControllerDelegate-Protocol.h"
#import "YTTopController-Protocol.h"

@class GSKVoiceSearchViewController, NSString, UIViewController, YTICommand, YTMAssistantController, YTMChipCloudView, YTMSearchQueryView, YTMSettings, YTMSuggestService;
@protocol YTLightweightScrollable, YTMSearchSuggestionsViewControllerProtocol, YTMServices, YTResponder;

@interface YTMSearchViewController : YTMBaseInnerTubeViewController <YTInnerTubeNavigationEndpointResponderProvider, YTLightweightScrollableDelegate, YTMSearchSuggestionsTableViewControllerDelegate, YTMChipCloudViewDelegate, YTGraftingViewController, YTMSearchQueryViewDelegate, YTTopController, GSKVoiceSearchViewControllerDelegate>
{
    id <YTMServices> _services;
    YTMSettings *_settings;
    YTMSearchQueryView *_searchQueryView;
    UIViewController<YTLightweightScrollable> *_primaryScrollViewController;
    _Bool _shouldBecomeFirstResponder;
    _Bool _isBaseSearchViewController;
    _Bool _useNewInnerTubeSuggest;
    YTMSuggestService *_suggestService;
    GSKVoiceSearchViewController *_voiceSearchViewController;
    YTMAssistantController *_assistantController;
    NSString *_CSN;
    YTICommand *_navEndpoint;
    UIViewController<YTMSearchSuggestionsViewControllerProtocol> *_searchSuggestionsViewController;
    YTMChipCloudView *_chipCloudView;
}

@property(retain, nonatomic) YTMChipCloudView *chipCloudView; // @synthesize chipCloudView=_chipCloudView;
@property(retain, nonatomic) UIViewController<YTMSearchSuggestionsViewControllerProtocol> *searchSuggestionsViewController; // @synthesize searchSuggestionsViewController=_searchSuggestionsViewController;
@property(copy, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
@property(copy, nonatomic) NSString *CSN; // @synthesize CSN=_CSN;
- (void).cxx_destruct;
- (void)maybeUpdateChipCloudViewWithResponse:(id)arg1;
- (void)updateNavigationHeader;
- (void)searchWithText:(id)arg1 suggestStats:(id)arg2;
- (void)searchWithText:(id)arg1 index:(int)arg2;
- (id)navigationEndpoint;
- (void)scrollableDidScroll:(id)arg1;
- (void)didTapVoiceSearchButton;
- (void)didEditSearchText:(id)arg1;
- (void)didBeginSearchWithText:(id)arg1;
- (void)didPressSearchWithText:(id)arg1;
- (void)voiceSearchViewControllerDidFinishUsingAudioSession:(id)arg1;
- (void)voiceSearchViewControllerDidCancel:(id)arg1;
- (void)voiceSearchViewController:(id)arg1 didReceiveResult:(id)arg2;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)searchSuggestionsTableViewController:(id)arg1 didModifyText:(id)arg2;
- (void)searchSuggestionsTableViewControllerDidDismiss:(id)arg1;
- (void)searchSuggestionsTableViewControllerDidFocus:(id)arg1;
- (void)searchSuggestionsTableViewController:(id)arg1 didSearchText:(id)arg2 suggestStats:(id)arg3;
- (long long)navigationBarAppearance;
- (void)chipCloudView:(id)arg1 didTapChip:(id)arg2;
- (void)didAddResponseViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadWithRequest:(id)arg1;
- (void)loadWithResponse:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end
