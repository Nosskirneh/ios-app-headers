//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHDependencies.h"

@class NSURLSession, RHAppResetController, RHAudioPlayer, RHDeviceInfo, RHDownloadsController, RHMeteringManager, RHMetricsController, RHNavigationService, RHRootViewController, RHSharingService, RHSocialController, _TtC7Napster12AlarmService, _TtC7Napster13AppboyService, _TtC7Napster14CarPlayService, _TtC7Napster14TagDataService, _TtC7Napster15BookmarkService, _TtC7Napster16RadioDataService, _TtC7Napster17SearchDataService, _TtC7Napster18ForceUpdateService, _TtC7Napster18TaggingDataService, _TtC7Napster19PlaylistDataService, _TtC7Napster19ReachabilityService, _TtC7Napster20NotificationsService, _TtC7Napster20RemoteCommandService, _TtC7Napster21CrashAnalyticsService, _TtC7Napster22AudioPreviewController, _TtC7Napster23NotificationsOptService;
@protocol RHTimeService;

@interface _TtC7Napster12Dependencies : RHDependencies
{
    // Error parsing type: , name: contentService.storage
    // Error parsing type: , name: newReleaseService.storage
    // Error parsing type: , name: userProfileService.storage
    // Error parsing type: , name: shortenUrlService.storage
    // Error parsing type: , name: playlistBuilderDataService.storage
    // Error parsing type: , name: genreDataService.storage
    // Error parsing type: , name: playlistBuilderImageService.storage
    // Error parsing type: , name: trackDataService.storage
    // Error parsing type: , name: albumDataService.storage
    // Error parsing type: , name: chartsDataService.storage
    // Error parsing type: , name: taggingDataService.storage
    // Error parsing type: , name: tagDataService.storage
    // Error parsing type: , name: playlistDataService.storage
    // Error parsing type: , name: radioDataService.storage
    // Error parsing type: , name: searchDataService.storage
    // Error parsing type: , name: bookmarkService.storage
    // Error parsing type: , name: recentDataService.storage
    // Error parsing type: , name: personalizedDataService.storage
    // Error parsing type: , name: crashAnalyticsService
    // Error parsing type: , name: audioPreviewController
    // Error parsing type: , name: sharingService
    // Error parsing type: , name: giphyDataService
    // Error parsing type: , name: reachabilityService
    // Error parsing type: , name: appShortcutsService
    // Error parsing type: , name: notificationsService
    // Error parsing type: , name: appboyService
    // Error parsing type: , name: socialController
    // Error parsing type: , name: urlCache
    // Error parsing type: , name: metricsController
    // Error parsing type: , name: notificationsOptService
    // Error parsing type: , name: defaultNavigationService
    // Error parsing type: , name: timeService
    // Error parsing type: , name: forceUpdateModel
    // Error parsing type: , name: forceUpdateService
    // Error parsing type: , name: applicationStateService
    // Error parsing type: , name: urlSession
    // Error parsing type: , name: deviceInfo
    // Error parsing type: , name: meteringManager
    // Error parsing type: , name: audioPlayer
    // Error parsing type: , name: remoteLoggingService
    // Error parsing type: , name: alarmService
    // Error parsing type: , name: fileManager
    // Error parsing type: , name: fileDownloadService
    // Error parsing type: , name: remoteCommandService
    // Error parsing type: , name: carPlayService
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _TtC7Napster14CarPlayService *carPlayService; // @synthesize carPlayService;
@property(nonatomic, readonly) _TtC7Napster20RemoteCommandService *remoteCommandService; // @synthesize remoteCommandService;
@property(nonatomic, readonly) _TtC7Napster12AlarmService *alarmService; // @synthesize alarmService;
@property(nonatomic, readonly) RHAudioPlayer *audioPlayer; // @synthesize audioPlayer;
@property(nonatomic, readonly) RHMeteringManager *meteringManager; // @synthesize meteringManager;
@property(nonatomic, readonly) RHDeviceInfo *deviceInfo; // @synthesize deviceInfo;
@property(nonatomic, readonly) NSURLSession *urlSession; // @synthesize urlSession;
@property(nonatomic, readonly) _TtC7Napster18ForceUpdateService *forceUpdateService; // @synthesize forceUpdateService;
@property(nonatomic, readonly) id <RHTimeService> timeService; // @synthesize timeService;
@property(nonatomic, readonly) RHNavigationService *defaultNavigationService; // @synthesize defaultNavigationService;
@property(nonatomic, readonly) _TtC7Napster23NotificationsOptService *notificationsOptService; // @synthesize notificationsOptService;
@property(nonatomic, readonly) RHMetricsController *metricsController; // @synthesize metricsController;
@property(nonatomic, readonly) RHSocialController *socialController; // @synthesize socialController;
@property(nonatomic, readonly) _TtC7Napster13AppboyService *appboyService; // @synthesize appboyService;
@property(nonatomic, readonly) _TtC7Napster20NotificationsService *notificationsService; // @synthesize notificationsService;
@property(nonatomic, readonly) _TtC7Napster19ReachabilityService *reachabilityService; // @synthesize reachabilityService;
@property(nonatomic, readonly) RHSharingService *sharingService; // @synthesize sharingService;
@property(nonatomic, readonly) _TtC7Napster22AudioPreviewController *audioPreviewController; // @synthesize audioPreviewController;
@property(nonatomic, readonly) _TtC7Napster21CrashAnalyticsService *crashAnalyticsService; // @synthesize crashAnalyticsService;
@property(nonatomic, readonly) RHDownloadsController *downloadsController;
@property(nonatomic, readonly) RHRootViewController *rootViewController;
@property(nonatomic, readonly) RHAppResetController *appResetController;
@property(nonatomic, retain) _TtC7Napster15BookmarkService *bookmarkService;
@property(nonatomic, retain) _TtC7Napster17SearchDataService *searchDataService;
@property(nonatomic, retain) _TtC7Napster16RadioDataService *radioDataService;
@property(nonatomic, retain) _TtC7Napster19PlaylistDataService *playlistDataService;
@property(nonatomic, retain) _TtC7Napster14TagDataService *tagDataService;
@property(nonatomic, retain) _TtC7Napster18TaggingDataService *taggingDataService;

@end
