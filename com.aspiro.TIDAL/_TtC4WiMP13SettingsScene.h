//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

@class UITableView, WMPCoreListener, WMPSettingsService;

@interface _TtC4WiMP13SettingsScene : WMPAbstractScene
{
    // Error parsing type: , name: settings
    // Error parsing type: , name: currentContext
    // Error parsing type: , name: hasRegisteredObservers
    // Error parsing type: , name: coreListener
    // Error parsing type: , name: tableConfigurer.storage
    // Error parsing type: , name: tableView.storage
    // Error parsing type: , name: footerView.storage
}

+ (id)createStreamingQualitySettingsController;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)viewDidLoad;
@property(nonatomic, retain) UITableView *tableView;
@property(nonatomic, readonly) _Bool isBasicSubscription;
@property(nonatomic, retain) WMPCoreListener *coreListener; // @synthesize coreListener;
@property(nonatomic) _Bool hasRegisteredObservers; // @synthesize hasRegisteredObservers;
@property(nonatomic, readonly) WMPSettingsService *settings; // @synthesize settings;
- (void)setupCoreListener;
- (void)userDidChange:(id)arg1;
@property(nonatomic, readonly) _Bool isOffline;
- (void)showDeleteOfflineContentDialog;
- (void)navigateToAuthorizedDevicesScene;
- (void)navigateToRestoreOfflineContentScene;
- (void)navigateToDownloadQualitySettings;
- (void)navigateToStreamingQualitySettings;
- (void)navigateToCrossfadeSettings;
- (void)navigateToAccountSettings;
- (void)didSwitchDownloadOverCellularWithSender:(id)arg1;
- (void)didSwitchOptimizedPlaybackWithSender:(id)arg1;
- (void)didSwitchLoudnessNormalizationWithSender:(id)arg1;
- (void)didSwitchOfflineModeWithSender:(id)arg1;

@end

