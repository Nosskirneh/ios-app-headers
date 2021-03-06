//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FlurryiOSUtil : NSObject
{
}

+ (_Bool)mainThread_isNotificationsSettingsEnabled;
+ (_Bool)isNotificationsSettingsEnabled;
+ (_Bool)isInBackground;
+ (_Bool)theAppIsActive;
+ (struct CGRect)screenBounds;
+ (struct CGRect)screenBounds:(id)arg1;
+ (id)getIdentifierForVendor;
+ (long long)getSystemVersionAsAnInteger;
+ (id)partnerCode;
+ (id)deviceModel;
+ (id)deviceManufacturer;
+ (id)deviceBuild;
+ (id)appVersion;
+ (id)appShortVersion;
+ (float)screenSize;
+ (_Bool)isRetina;
+ (_Bool)isIPad;
+ (long long)userDeviceIdiom;
+ (unsigned short)agentPlatform;
+ (id)getCanvasOrientation;
+ (_Bool)canvasInLandscapeLeft:(id)arg1;
+ (_Bool)canvasInLandscapeRight:(id)arg1;
+ (_Bool)canvasInLandscape:(id)arg1;
+ (long long)getStatusBarOrientation;
+ (_Bool)canvasInPortraitUpsideDown;
+ (_Bool)canvasInLandscapeLeft;
+ (_Bool)canvasInLandscapeRight;
+ (_Bool)canvasInLandscape;
+ (_Bool)deviceInLandscape;

@end

