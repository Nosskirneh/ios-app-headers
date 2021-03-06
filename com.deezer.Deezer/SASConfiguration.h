//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, NSString;

@interface SASConfiguration : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    _Bool *_publisherSetLocation;
}

+ (id)sharedInstance;
+ (id)md5HexDigest:(id)arg1;
+ (id)IPAddress;
+ (id)userAgent;
+ (id)architecture;
+ (id)appBundleIdentifier;
+ (id)appName;
@property(nonatomic) _Bool *publisherSetLocation; // @synthesize publisherSetLocation=_publisherSetLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)stopAndDestroyLocationManager;
- (void)initLocationManager;
- (_Bool)appHasLocationAuthorization;
- (_Bool)canLocateUser;
- (id)init;
- (double)locationHeading;
- (double)locationAccuracy;
- (struct CLLocationCoordinate2D)locationCoordinate;
- (id)location;
- (void)setHeading:(double)arg1;
- (void)setLocation:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1 accuracy:(double)arg2;
- (void)setAllowAutomaticLocationDetection:(_Bool)arg1;
- (void)disableCustomIdentifier;
- (void)enableCustomIdentifierWithID:(id)arg1;
- (void)disableIdentifierHashing;
- (void)enableIdentifierHashing;
- (id)deviceIdentity;
- (unsigned long long)masterURLTimestamp;
- (void)setMasterURLTimestamp:(unsigned long long)arg1;
- (_Bool)isLoggingEnabled;
- (void)setTransientSessionIDEnabled:(_Bool)arg1;
- (void)setLoggingEnabled:(_Bool)arg1;
- (_Bool)isInTestMode;
- (void)setTestModeEnabled:(_Bool)arg1;
- (id)baseURL;
- (long long)siteID;
- (void)setBaseURL:(id)arg1;
- (void)setSiteID:(long long)arg1 baseURL:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

