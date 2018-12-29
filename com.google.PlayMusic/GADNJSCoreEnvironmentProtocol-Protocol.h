//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSExport-Protocol.h"

@class GADNJSCoreConsole, GADNJSCoreInterface, GADNJSCoreLocalStorage, GADNJSCoreNavigator, GADNJSCorePinger, GADNJSCoreTimers, NSString;

@protocol GADNJSCoreEnvironmentProtocol <JSExport>
@property(readonly, nonatomic) GADNJSCoreLocalStorage *localStorage;
@property(readonly, nonatomic) GADNJSCorePinger *pinger;
@property(readonly, nonatomic) GADNJSCoreTimers *timers;
@property(readonly, nonatomic) GADNJSCoreConsole *console;
@property(readonly, nonatomic) GADNJSCoreInterface *googleAdsJsInterface;
@property(readonly, nonatomic) GADNJSCoreNavigator *navigator;
@property(readonly, nonatomic) NSString *sdkVersion;
@property(readonly, nonatomic) NSString *platform;
@property(readonly, nonatomic) NSString *environment;
@end
