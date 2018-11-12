//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "EXP_HUBCommandHandler-Protocol.h"

@class SPTRadioLogger, SPTRadioPlaybackService, SPTRadioStationsService, UIViewController;
@protocol SPTAlertController, SPTLinkDispatcher;

@interface SPTRadioHubCreateStationCommandHandler : NSObject <EXP_HUBCommandHandler>
{
    UIViewController *_searchViewController;
    SPTRadioStationsService *_stationService;
    SPTRadioPlaybackService *_playbackService;
    SPTRadioLogger *_loggingService;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTRadioLogger *loggingService; // @synthesize loggingService=_loggingService;
@property(readonly, nonatomic) SPTRadioPlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) SPTRadioStationsService *stationService; // @synthesize stationService=_stationService;
@property(nonatomic) __weak UIViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
- (void).cxx_destruct;
- (void)popOutOfSearchPages;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithStationService:(id)arg1 playbackService:(id)arg2 loggingService:(id)arg3 linkDispatcher:(id)arg4 alertController:(id)arg5;

@end

