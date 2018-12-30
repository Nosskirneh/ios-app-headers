//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString, UIColor, UINavigationController;

@interface BITHockeyBaseManager : NSObject
{
    UINavigationController *_navController;
    NSDateFormatter *_rfc3339Formatter;
    NSString *_serverURL;
    long long _barStyle;
    UIColor *_navigationBarTintColor;
    long long _modalPresentationStyle;
    NSString *_appIdentifier;
    long long _appEnvironment;
}

@property(readonly, nonatomic) long long appEnvironment; // @synthesize appEnvironment=_appEnvironment;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle=_modalPresentationStyle;
@property(retain, nonatomic) UIColor *navigationBarTintColor; // @synthesize navigationBarTintColor=_navigationBarTintColor;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(copy, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
- (void).cxx_destruct;
- (id)parseRFC3339Date:(id)arg1;
- (void)startManager;
- (_Bool)removeKeyFromKeychain:(id)arg1;
- (id)stringValueFromKeychainForKey:(id)arg1;
- (_Bool)addStringValueToKeychainForThisDeviceOnly:(id)arg1 forKey:(id)arg2;
- (_Bool)addStringValueToKeychain:(id)arg1 forKey:(id)arg2;
- (void)showView:(id)arg1;
- (id)visibleWindowRootViewController;
- (id)customNavigationControllerWithRootViewController:(id)arg1 presentationStyle:(long long)arg2;
- (id)findVisibleWindow;
- (id)executableUUID;
- (id)getDevicePlatform;
- (id)encodedAppIdentifier;
- (void)reportError:(id)arg1;
- (id)initWithAppIdentifier:(id)arg1 appEnvironment:(long long)arg2;
- (id)init;

@end

