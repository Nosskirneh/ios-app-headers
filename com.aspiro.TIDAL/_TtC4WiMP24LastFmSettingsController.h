//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPAbstractScene.h"

@class NSString, WMPLastFMHelper, _TtC4WiMP15TableConfigurer;

@interface _TtC4WiMP24LastFmSettingsController : WMPAbstractScene
{
    // Error parsing type: , name: service
    // Error parsing type: , name: didChangeConnectionStatusHandler
    // Error parsing type: , name: username
    // Error parsing type: , name: password
    // Error parsing type: , name: loggedInSection.storage
    // Error parsing type: , name: credentialInputSection.storage
    // Error parsing type: , name: tableConfigurer
    // Error parsing type: , name: tableView.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
@property(nonatomic, readonly) _TtC4WiMP15TableConfigurer *tableConfigurer; // @synthesize tableConfigurer;
@property(nonatomic, copy) NSString *password; // @synthesize password;
@property(nonatomic, copy) NSString *username; // @synthesize username;
@property(nonatomic, copy) CDUnknownBlockType didChangeConnectionStatusHandler; // @synthesize didChangeConnectionStatusHandler;
@property(nonatomic, readonly) WMPLastFMHelper *service; // @synthesize service;

@end
