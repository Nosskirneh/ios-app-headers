//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHViewController.h"

@class RHDataController, RHNavigationService, UIBarButtonItem, UIImageView, _TtC7Napster13AppboyService, _TtC7Napster20NotificationsService;

@interface RHBaseHomeViewController : RHViewController
{
    UIImageView *_lightNavigationImage;
    UIImageView *_darkNavigationImage;
    UIBarButtonItem *_lightBadgeBarButton;
    UIBarButtonItem *_chromeCastBarButton;
    _TtC7Napster20NotificationsService *_notificationsService;
    _TtC7Napster13AppboyService *_appboyService;
    RHNavigationService *_navigationService;
    RHDataController *_dataController;
}

@property(retain, nonatomic) RHDataController *dataController; // @synthesize dataController=_dataController;
@property(readonly, nonatomic) RHNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) _TtC7Napster13AppboyService *appboyService; // @synthesize appboyService=_appboyService;
@property(readonly, nonatomic) _TtC7Napster20NotificationsService *notificationsService; // @synthesize notificationsService=_notificationsService;
@property(retain, nonatomic) UIBarButtonItem *chromeCastBarButton; // @synthesize chromeCastBarButton=_chromeCastBarButton;
@property(retain, nonatomic) UIBarButtonItem *lightBadgeBarButton; // @synthesize lightBadgeBarButton=_lightBadgeBarButton;
@property(retain, nonatomic) UIImageView *darkNavigationImage; // @synthesize darkNavigationImage=_darkNavigationImage;
@property(retain, nonatomic) UIImageView *lightNavigationImage; // @synthesize lightNavigationImage=_lightNavigationImage;
- (void).cxx_destruct;
- (id)notificationCenter;
- (id)metricsScreenName;
- (void)updateLayout;
- (void)badgeAction;
- (id)darkNavigationImageView;
- (id)lightNavigationImageView;
- (_Bool)showImageInNavigationBar;
- (void)updateBarButtonItems;
- (void)updateNavigationBarWithCurrentState;
- (void)castAvailabilityChanged:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 dependencies:(id)arg3;
- (id)initWithDependencies:(id)arg1;

@end

