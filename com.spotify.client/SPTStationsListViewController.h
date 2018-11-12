//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTableViewController.h"

#import "SPContentInsetViewController-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "SPTRadioPlaybackObserver-Protocol.h"
#import "SPTRadioStationsObserver-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GLUEEntityRowStyle, NSArray, NSString, NSURL, SPTInfoView, SPTProgressView, SPTRadioLogger, SPTRadioPlaybackService, SPTRadioStationsService, SPTStationsCreateBar;
@protocol GLUEImageLoader, GLUETheme, SPTAlertController, SPTCrashReporter, SPTImageLoaderFactory, SPTLinkDispatcher, SPTLocalSettings, SPTPageContainer, SPTRadioTestManager;

@interface SPTStationsListViewController : SPTableViewController <UITableViewDataSource, UITableViewDelegate, SPTRadioStationsObserver, SPTRadioPlaybackObserver, UINavigationControllerDelegate, SPContentInsetViewController, SPTPageController>
{
    _Bool _isDeletingStation;
    NSArray *_userSavedStations;
    SPTRadioStationsService *_stationService;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioLogger *_loggingService;
    SPTProgressView *_progressView;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTLocalSettings> _localSettings;
    id <GLUETheme> _theme;
    GLUEEntityRowStyle *_artistStyle;
    GLUEEntityRowStyle *_defaultStyle;
    SPTStationsCreateBar *_createBarView;
    SPTInfoView *_infoView;
    id <SPTAlertController> _alertController;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTRadioTestManager> _radioTestManager;
    id <SPTCrashReporter> _crashReporter;
}

@property(nonatomic) _Bool isDeletingStation; // @synthesize isDeletingStation=_isDeletingStation;
@property(readonly, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) id <SPTRadioTestManager> radioTestManager; // @synthesize radioTestManager=_radioTestManager;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTStationsCreateBar *createBarView; // @synthesize createBarView=_createBarView;
@property(retain, nonatomic) GLUEEntityRowStyle *defaultStyle; // @synthesize defaultStyle=_defaultStyle;
@property(retain, nonatomic) GLUEEntityRowStyle *artistStyle; // @synthesize artistStyle=_artistStyle;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) SPTRadioLogger *loggingService; // @synthesize loggingService=_loggingService;
@property(retain, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(retain, nonatomic) SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(copy, nonatomic) NSArray *userSavedStations; // @synthesize userSavedStations=_userSavedStations;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)radioPlaybackService:(id)arg1 playbackStateChanged:(unsigned long long)arg2;
- (void)radioStationService:(id)arg1 userSavedStationsChanged:(id)arg2;
- (id)styleForStation:(id)arg1;
- (void)setupLeadingAccessoryForCell:(id)arg1 withStation:(id)arg2;
- (void)setupTrailingAccessoryForCell:(id)arg1;
- (id)contentViewForCell:(id)arg1;
- (void)configureCell:(id)arg1 withStation:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)URI;
- (void)sp_updateContentInsets;
- (_Bool)isStationCurrentlyPlaying:(id)arg1;
- (void)hideInfoView;
- (void)showInfoView;
- (void)updateInfoViewWithError:(id)arg1;
- (void)digestUpdatedSavedStationsList:(id)arg1;
- (void)pushCreateStationView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithStationService:(id)arg1 playbackService:(id)arg2 glueImageLoader:(id)arg3 localSettings:(id)arg4 loggingService:(id)arg5 alertController:(id)arg6 linkDispatcher:(id)arg7 radioTestManager:(id)arg8 crashReporter:(id)arg9;

// Remaining properties
@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

