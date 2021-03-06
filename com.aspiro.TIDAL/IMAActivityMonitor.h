//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAJavascriptSession, IMAPictureInPictureProxy, UIView;

@interface IMAActivityMonitor : NSObject
{
    _Bool _monitorAppLifecycle;
    _Bool _monitoredViewVisible;
    float _monitoredVolume;
    UIView *_monitoredView;
    IMAJavascriptSession *_session;
    IMAPictureInPictureProxy *_pictureInPictureProxy;
    long long _monitoredTime;
    struct CGRect _monitoredViewBounds;
    struct CGRect _monitoredViewVisibleBounds;
}

@property(nonatomic) float monitoredVolume; // @synthesize monitoredVolume=_monitoredVolume;
@property(nonatomic) struct CGRect monitoredViewVisibleBounds; // @synthesize monitoredViewVisibleBounds=_monitoredViewVisibleBounds;
@property(nonatomic) struct CGRect monitoredViewBounds; // @synthesize monitoredViewBounds=_monitoredViewBounds;
@property(nonatomic) _Bool monitoredViewVisible; // @synthesize monitoredViewVisible=_monitoredViewVisible;
@property(nonatomic) long long monitoredTime; // @synthesize monitoredTime=_monitoredTime;
@property(nonatomic) _Bool monitorAppLifecycle; // @synthesize monitorAppLifecycle=_monitorAppLifecycle;
@property(readonly, nonatomic) IMAPictureInPictureProxy *pictureInPictureProxy; // @synthesize pictureInPictureProxy=_pictureInPictureProxy;
@property(readonly, nonatomic) IMAJavascriptSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) __weak UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)handleMessageReportVastEvent:(id)arg1;
- (void)handleMessageGetViewability:(id)arg1;
- (id)getViewabilityData;
- (void)computeViewBounds;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithView:(id)arg1 session:(id)arg2 pictureInPictureProxy:(id)arg3 monitorAppLifecycle:(_Bool)arg4;

@end

