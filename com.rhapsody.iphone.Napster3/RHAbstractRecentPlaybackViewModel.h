//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNotificationCenter, NSTimer, RHMetricsController, RHModelObserver, RHNavigationService, _TtC7Napster12Dependencies, _TtC7Napster17AccountController, _TtC7Napster19ReachabilityService;
@protocol ImageProviderOBJC, RHAlertPresenter, RHInitiatePlaybackService;

@interface RHAbstractRecentPlaybackViewModel : NSObject
{
    _Bool _offline;
    NSArray *_recentContainerCellViewModels;
    _TtC7Napster12Dependencies *_dependencies;
    NSNotificationCenter *_notificationCenter;
    RHMetricsController *_metricsController;
    _TtC7Napster17AccountController *_accountController;
    RHNavigationService *_defaultNavigationService;
    id <ImageProviderOBJC> _imageProvider;
    id <RHInitiatePlaybackService> _initiatePlaybackService;
    _TtC7Napster19ReachabilityService *_serverReachability;
    id <RHAlertPresenter> _alertPresenter;
    RHModelObserver *_recentContainerObserver;
    NSArray *_models;
    unsigned long long _recentItemsToDisplayCount;
    double _delayPresentationTime;
    NSTimer *_delayTimer;
}

@property(nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(retain, nonatomic) NSTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(nonatomic) double delayPresentationTime; // @synthesize delayPresentationTime=_delayPresentationTime;
@property(nonatomic) unsigned long long recentItemsToDisplayCount; // @synthesize recentItemsToDisplayCount=_recentItemsToDisplayCount;
@property(retain, nonatomic) NSArray *models; // @synthesize models=_models;
@property(retain, nonatomic) RHModelObserver *recentContainerObserver; // @synthesize recentContainerObserver=_recentContainerObserver;
@property(readonly, nonatomic) id <RHAlertPresenter> alertPresenter; // @synthesize alertPresenter=_alertPresenter;
@property(readonly, nonatomic) _TtC7Napster19ReachabilityService *serverReachability; // @synthesize serverReachability=_serverReachability;
@property(readonly, nonatomic) id <RHInitiatePlaybackService> initiatePlaybackService; // @synthesize initiatePlaybackService=_initiatePlaybackService;
@property(readonly, nonatomic) id <ImageProviderOBJC> imageProvider; // @synthesize imageProvider=_imageProvider;
@property(readonly, nonatomic) RHNavigationService *defaultNavigationService; // @synthesize defaultNavigationService=_defaultNavigationService;
@property(readonly, nonatomic) _TtC7Napster17AccountController *accountController; // @synthesize accountController=_accountController;
@property(readonly, nonatomic) RHMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) _TtC7Napster12Dependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(retain, nonatomic) NSArray *recentContainerCellViewModels; // @synthesize recentContainerCellViewModels=_recentContainerCellViewModels;
- (void).cxx_destruct;
- (id)cellViewModelForModel:(id)arg1;
@property(readonly, nonatomic) long long recentItemsCount;
- (id)cellViewModelsFromModels:(id)arg1;
- (id)constrainedOfflinePlayableModels;
- (id)constrainedPlayableModels;
- (id)availableModels;
- (void)configureCellViewModels;
- (void)configureObserver;
- (void)configureViewModel;
- (void)freeTimer;
- (void)resetTimer;
- (void)updateOfflineFlag;
- (void)networkStatusDidChange;
- (void)dealloc;
- (id)initWithDependencies:(id)arg1 andModelObserver:(id)arg2;

@end
