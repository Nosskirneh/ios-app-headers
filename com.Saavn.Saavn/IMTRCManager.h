//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMConfigDelegate-Protocol.h"
#import "IMHealthReportingDelegate-Protocol.h"

@class IMAdsConfig, IMHealthReportingManager, IMTRCDao, NSString;
@protocol OS_dispatch_queue;

@interface IMTRCManager : NSObject <IMConfigDelegate, IMHealthReportingDelegate>
{
    IMAdsConfig *_adsConfig;
    IMHealthReportingManager *_bannerManager;
    IMHealthReportingManager *_interstitialManager;
    IMHealthReportingManager *_nativeManager;
    IMTRCDao *_dao;
    NSObject<OS_dispatch_queue> *_dBQueue;
}

+ (id)convertObjectToDictionary:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dBQueue; // @synthesize dBQueue=_dBQueue;
@property(retain, nonatomic) IMTRCDao *dao; // @synthesize dao=_dao;
@property(retain, nonatomic) IMHealthReportingManager *nativeManager; // @synthesize nativeManager=_nativeManager;
@property(retain, nonatomic) IMHealthReportingManager *interstitialManager; // @synthesize interstitialManager=_interstitialManager;
@property(retain, nonatomic) IMHealthReportingManager *bannerManager; // @synthesize bannerManager=_bannerManager;
@property(retain, nonatomic) IMAdsConfig *adsConfig; // @synthesize adsConfig=_adsConfig;
- (void).cxx_destruct;
- (id)provideNetworkRequestObject:(id)arg1 forAdType:(id)arg2;
- (void)configUpdated:(id)arg1;
- (void)restartPollingManagers;
- (id)getPollingManager:(id)arg1 andUserKey:(id)arg2;
- (id)getNetworkTypeConfig:(id)arg1;
- (void)startNativeManager;
- (void)startInterstitialManager;
- (void)startBannerManager;
- (void)addTRCEventToDB:(id)arg1 withConfig:(id)arg2;
- (void)stopComponent;
- (void)checkDBAndStartManager:(id)arg1;
- (void)checkAndStartManagerIfNotPresent:(id)arg1;
- (void)startComponent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

