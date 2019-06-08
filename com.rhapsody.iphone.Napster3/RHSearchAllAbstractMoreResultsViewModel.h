//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHSearchAllRootViewModel-Protocol.h"

@class NSArray, NSNotificationCenter, NSString, PlaylistImageDataController, RHSearchAllMetricsService, RHSearchAllNavigationService, ZDSDeferred, _TtC7Napster17SearchDataService, _TtC7Napster19ReachabilityService;
@protocol RHInitiatePlaybackService, _TtP7Napster17ImageProviderOBJC_;

@interface RHSearchAllAbstractMoreResultsViewModel : NSObject <RHSearchAllRootViewModel>
{
    _Bool _searching;
    _Bool _offline;
    NSString *_searchTerm;
    NSString *_metricsScreenEvent;
    NSArray *_resultsViewModels;
    NSNotificationCenter *_notificationCenter;
    _TtC7Napster17SearchDataService *_searchDataService;
    _TtC7Napster19ReachabilityService *_serverReachability;
    id <_TtP7Napster17ImageProviderOBJC_> _imageProvider;
    RHSearchAllNavigationService *_navigationService;
    id <RHInitiatePlaybackService> _playbackService;
    RHSearchAllMetricsService *_metricsService;
    PlaylistImageDataController *_playlistImageDataController;
    ZDSDeferred *_searchDeferred;
}

@property(retain, nonatomic) ZDSDeferred *searchDeferred; // @synthesize searchDeferred=_searchDeferred;
@property(retain, nonatomic) PlaylistImageDataController *playlistImageDataController; // @synthesize playlistImageDataController=_playlistImageDataController;
@property(retain, nonatomic) RHSearchAllMetricsService *metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) id <RHInitiatePlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) RHSearchAllNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(retain, nonatomic) id <_TtP7Napster17ImageProviderOBJC_> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) _TtC7Napster19ReachabilityService *serverReachability; // @synthesize serverReachability=_serverReachability;
@property(retain, nonatomic) _TtC7Napster17SearchDataService *searchDataService; // @synthesize searchDataService=_searchDataService;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(retain, nonatomic) NSArray *resultsViewModels; // @synthesize resultsViewModels=_resultsViewModels;
@property(readonly, nonatomic) NSString *metricsScreenEvent; // @synthesize metricsScreenEvent=_metricsScreenEvent;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
- (void).cxx_destruct;
- (void)didSelectViewModel:(id)arg1;
@property(readonly, nonatomic) NSString *sectionHeaderViewTitle;
@property(readonly, nonatomic) NSString *viewTitle;
- (id)moreCellViewModelsForSearchResults:(id)arg1;
- (id)deferredSearchResults;
- (void)updateOfflineFlag;
- (void)networkStatusDidChange:(id)arg1;
- (void)performSearch;
- (void)dealloc;
- (id)initWithDependencies:(id)arg1 andSearchTerm:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

