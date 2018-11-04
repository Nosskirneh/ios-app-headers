//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTAssistedCurationUserInterfaceFactory.h"

@class NSString, UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController>;

@interface SPTAssistedCurationUserInterfaceFactoryImplementation : NSObject <SPTAssistedCurationUserInterfaceFactory>
{
    id <SPTSearchService> _searchService;
    id <SPTGLUEService> _glueService;
    id <SPTAudioPreviewService> _audioPreviewService;
    id <SPTExplicitContentService> _explicitContentService;
    UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *_searchRootViewController;
    id <SPTAssistedCurationViewModel> _viewModel;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAssistedCurationUITestManager> _testManager;
}

@property(retain, nonatomic) id <SPTAssistedCurationUITestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAssistedCurationViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIViewController<SPTSearch2RootViewControllerProtocol><SPTPageController> *searchRootViewController; // @synthesize searchRootViewController=_searchRootViewController;
@property(readonly, nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(readonly, nonatomic) __weak id <SPTAudioPreviewService> audioPreviewService; // @synthesize audioPreviewService=_audioPreviewService;
@property(readonly, nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(readonly, nonatomic) __weak id <SPTSearchService> searchService; // @synthesize searchService=_searchService;
- (void).cxx_destruct;
- (id)createAssistedCurationSearchViewControllerForEntityType:(id)arg1 query:(id)arg2;
- (id)createAssistedCurationSearchViewController;
- (id)createSearchConfigurationWithURLProvider:(id)arg1;
- (id)makeSearchDrillDownURLPoviderWithEntityType:(id)arg1;
- (id)makeSearchRootURLProvider;
- (id)makeSaveToRecentsCommandHandler;
- (id)makeNavigateCommandHandler;
- (id)addToPlaylistCommandHandlerWithViewModel:(id)arg1;
- (struct NSDictionary *)assistedCurationComponents;
- (id)provideGLUEImageLoader;
- (id)provideAssistedCurationTheme;
- (id)initWithSearchService:(id)arg1 glueService:(id)arg2 audioPreviewService:(id)arg3 explicitContentService:(id)arg4 viewModel:(id)arg5 linkDispatcher:(id)arg6 testManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

