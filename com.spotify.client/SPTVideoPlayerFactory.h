//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTVideoApplicationStateObservable;
@protocol SPTConnectionModeObservable, SPTKVOControllerFactory, SPTNotificationCenter, SPTVideoDataLoader, SPTVideoLogger, SPTVideoPlaybackErrorFormatter;

@interface SPTVideoPlayerFactory : NSObject
{
    id <SPTVideoDataLoader> _dataLoader;
    id <SPTConnectionModeObservable> _connectionModeObservable;
    id <SPTKVOControllerFactory> _kvoControllerFactory;
    id <SPTVideoLogger> _logger;
    id <SPTNotificationCenter> _notificationCenter;
    SPTVideoApplicationStateObservable *_appStateObservable;
    id <SPTVideoPlaybackErrorFormatter> _playbackErrorFormatter;
}

@property(retain, nonatomic) id <SPTVideoPlaybackErrorFormatter> playbackErrorFormatter; // @synthesize playbackErrorFormatter=_playbackErrorFormatter;
@property(retain, nonatomic) SPTVideoApplicationStateObservable *appStateObservable; // @synthesize appStateObservable=_appStateObservable;
@property(retain, nonatomic) id <SPTNotificationCenter> notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) id <SPTVideoLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTKVOControllerFactory> kvoControllerFactory; // @synthesize kvoControllerFactory=_kvoControllerFactory;
@property(retain, nonatomic) id <SPTConnectionModeObservable> connectionModeObservable; // @synthesize connectionModeObservable=_connectionModeObservable;
@property(retain, nonatomic) id <SPTVideoDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)provideSubtitleFactory;
- (id)providePlaybackRequestFactory;
- (id)defaultEventObserverFactoriesWithLoggerDataProvider:(id)arg1;
- (id)createPlayerWithSurfaceManager:(id)arg1 subtitleManager:(id)arg2 configuration:(id)arg3 loggerDataProvider:(id)arg4 eventObserverFactories:(id)arg5 cache:(id)arg6 allowRoyaltyMedia:(_Bool)arg7;
- (id)createPlayerWithSurface:(id)arg1 subtitleManager:(id)arg2 configuration:(id)arg3 loggerDataProvider:(id)arg4 eventObserverFactories:(id)arg5 cache:(id)arg6 allowRoyaltyMedia:(_Bool)arg7;
- (id)initWithDataLoader:(id)arg1 connectionModeObservable:(id)arg2 kvoControllerFactory:(id)arg3 logger:(id)arg4 notificationCenter:(id)arg5 appStateObservable:(id)arg6 playbackErrorFormatter:(id)arg7;
- (id)initWithDataLoader:(id)arg1 connectionModeObservable:(id)arg2 kvoControllerFactory:(id)arg3 logger:(id)arg4;

@end

