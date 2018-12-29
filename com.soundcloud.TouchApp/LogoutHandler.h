//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AlertConfigurationFactory, AlertPresenterFactory, LogoutController, OfflineSync;
@protocol _TtP2UI14AlertPresenter_;

@interface LogoutHandler : NSObject
{
    LogoutController *_logoutController;
    OfflineSync *_offlineSync;
    AlertPresenterFactory *_alertPresenterFactory;
    AlertConfigurationFactory *_alertConfigurationFactory;
    id <_TtP2UI14AlertPresenter_> _alertPresenter;
}

@property(retain, nonatomic) id <_TtP2UI14AlertPresenter_> alertPresenter; // @synthesize alertPresenter=_alertPresenter;
@property(readonly, nonatomic) AlertConfigurationFactory *alertConfigurationFactory; // @synthesize alertConfigurationFactory=_alertConfigurationFactory;
@property(readonly, nonatomic) AlertPresenterFactory *alertPresenterFactory; // @synthesize alertPresenterFactory=_alertPresenterFactory;
@property(readonly, nonatomic) OfflineSync *offlineSync; // @synthesize offlineSync=_offlineSync;
@property(readonly, nonatomic) LogoutController *logoutController; // @synthesize logoutController=_logoutController;
- (void).cxx_destruct;
- (void)presentOfflineContentAlertFromViewController:(id)arg1;
- (void)handleLogoutFromViewController:(id)arg1;
- (id)initWithLogoutController:(id)arg1 offlineSync:(id)arg2 alertPresenterFactory:(id)arg3 alertConfigurationFactory:(id)arg4;
- (id)init;

@end
