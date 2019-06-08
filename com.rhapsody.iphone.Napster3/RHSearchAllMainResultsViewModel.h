//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHSearchAllRootViewModel-Protocol.h"

@class NSArray, NSNotificationCenter, NSString, NSTimer, PlaylistImageDataController, RHDataController, RHSearchAllMainResultsConverter, RHSearchAllMetricsService, RHSearchAllNavigationService, ZDSDeferred, _TtC7Napster17SearchDataService, _TtC7Napster19ReachabilityService;
@protocol RHInitiatePlaybackService, _TtP7Napster17ImageProviderOBJC_;

@interface RHSearchAllMainResultsViewModel : NSObject <RHSearchAllRootViewModel>
{
    _Bool _searching;
    _Bool _offline;
    _Bool _isLoadingTags;
    RHSearchAllNavigationService *_navigationService;
    NSString *_searchTerm;
    NSArray *_allTags;
    _TtC7Napster17SearchDataService *_searchDataService;
    NSNotificationCenter *_notificationCenter;
    _TtC7Napster19ReachabilityService *_serverReachability;
    id <_TtP7Napster17ImageProviderOBJC_> _imageProvider;
    RHSearchAllMetricsService *_metricsService;
    id <RHInitiatePlaybackService> _playbackService;
    RHSearchAllMainResultsConverter *_resultsConverter;
    RHDataController *_dataController;
    PlaylistImageDataController *_playlistImageDataController;
    NSTimer *_timer;
    NSArray *_viewModelSections;
    ZDSDeferred *_searchDeferred;
}

@property(retain, nonatomic) ZDSDeferred *searchDeferred; // @synthesize searchDeferred=_searchDeferred;
@property(retain, nonatomic) NSArray *viewModelSections; // @synthesize viewModelSections=_viewModelSections;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) PlaylistImageDataController *playlistImageDataController; // @synthesize playlistImageDataController=_playlistImageDataController;
@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) RHSearchAllMainResultsConverter *resultsConverter; // @synthesize resultsConverter=_resultsConverter;
@property(retain, nonatomic) id <RHInitiatePlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) RHSearchAllMetricsService *metricsService; // @synthesize metricsService=_metricsService;
@property(retain, nonatomic) id <_TtP7Napster17ImageProviderOBJC_> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) _TtC7Napster19ReachabilityService *serverReachability; // @synthesize serverReachability=_serverReachability;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) _TtC7Napster17SearchDataService *searchDataService; // @synthesize searchDataService=_searchDataService;
@property(readonly, nonatomic) _Bool isLoadingTags; // @synthesize isLoadingTags=_isLoadingTags;
@property(readonly, nonatomic) NSArray *allTags; // @synthesize allTags=_allTags;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(nonatomic) _Bool searching; // @synthesize searching=_searching;
@property(readonly, nonatomic) RHSearchAllNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *metricsScreenEvent;
- (void)didSelectViewModel:(id)arg1;
- (void)accountChanged;
- (void)updateOfflineFlag;
- (void)networkStatusDidChange:(id)arg1;
- (void)performSearch;
- (void)setThrottledSearchTerm:(id)arg1;
- (id)viewModelForIndexPath:(id)arg1;
- (unsigned long long)numberOfItemsForSectionIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
@property(readonly, nonatomic) _Bool contentAvailable;
- (void)dealloc;
- (id)initWithDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

