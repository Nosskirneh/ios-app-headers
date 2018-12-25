//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString, UIApplication;
@protocol GIPAppDelegate;

@interface GIPApp : NSObject <NSCopying>
{
    UIApplication *_sharedApplication;
    _Bool _isHidden;
    NSDictionary *_appIconURLs;
    _Bool _systemApp;
    _Bool _authUserEnabled;
    _Bool _googleOwnedApp;
    id <GIPAppDelegate> _delegate;
    NSString *_name;
    NSString *_bundleIdentifier;
    long long _priority;
    NSString *_storeId;
    NSSet *_tags;
    NSDictionary *_additionalData;
    NSMutableDictionary *_localizedNames;
    NSMutableArray *_mappingAllVersions;
    NSMutableDictionary *_activeSchemesMapping;
}

+ (id)hashedUserIdForURL:(id)arg1;
+ (id)URLStringWithHashedUserId:(id)arg1 appendedToURLString:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *activeSchemesMapping; // @synthesize activeSchemesMapping=_activeSchemesMapping;
@property(retain, nonatomic) NSMutableArray *mappingAllVersions; // @synthesize mappingAllVersions=_mappingAllVersions;
@property(retain, nonatomic) NSMutableDictionary *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(readonly, nonatomic) NSDictionary *additionalData; // @synthesize additionalData=_additionalData;
@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic, getter=isGoogleOwnedApp) _Bool googleOwnedApp; // @synthesize googleOwnedApp=_googleOwnedApp;
@property(readonly, nonatomic, getter=isAuthUserEnabled) _Bool authUserEnabled; // @synthesize authUserEnabled=_authUserEnabled;
@property(readonly, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly, nonatomic, getter=isSystemApp) _Bool systemApp; // @synthesize systemApp=_systemApp;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id <GIPAppDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isHidden;
- (void)setHidden:(_Bool)arg1;
- (id)parseQuery:(id)arg1;
- (_Bool)sourcePatternInURLMapping:(id)arg1 matchesURL:(id)arg2;
- (_Bool)shouldSecureURL:(id)arg1 forXCallback:(_Bool)arg2;
- (void)setSharedApplication:(id)arg1;
- (id)localizedNameForLanguage:(id)arg1;
- (id)applyPatternsSubstitutions:(id)arg1 scheme:(id)arg2 host:(id)arg3 port:(id)arg4 path:(id)arg5 query:(id)arg6 parameters:(id)arg7;
- (id)applyPatternsSubstitutions:(id)arg1 withURL:(id)arg2;
- (_Bool)canOpenScheme:(id)arg1;
- (_Bool)canOpenMapping:(id)arg1;
- (id)registeredSchemesForMapping:(id)arg1;
- (id)activeMappingObject;
- (void)enumerateSchemesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)canBeOpenedWithXCallback;
- (_Bool)canOpenInAppStore;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
- (id)supportedSchemes;
- (id)registeredSchemes;
- (_Bool)openInAppStore;
- (id)appIconURLWithDimension:(double)arg1;
- (id)appIconURLWithSize:(struct CGSize)arg1;
- (id)appStoreURL;
- (_Bool)canOpenURL:(id)arg1;
- (_Bool)hasAnyOfTags:(id)arg1;
- (_Bool)hasTag:(id)arg1;
- (id)appXCallbackURLforURL:(id)arg1 withSourceApp:(id)arg2 sourceIconURL:(id)arg3 successURL:(id)arg4 errorURL:(id)arg5 cancelURL:(id)arg6 actionParameters:(id)arg7 hashedUserId:(id)arg8;
- (id)appXCallbackURLforURL:(id)arg1 withSourceApp:(id)arg2 sourceIconURL:(id)arg3 successURL:(id)arg4 errorURL:(id)arg5 cancelURL:(id)arg6 actionParameters:(id)arg7;
- (id)appURLforURL:(id)arg1 hashedUserId:(id)arg2;
- (id)appURLforURL:(id)arg1;
- (id)appLaunchURL;
@property(readonly, nonatomic) NSString *localizedName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToApp:(id)arg1;
- (id)description;
- (id)initWithDictionary:(id)arg1 tldList:(id)arg2 delegate:(id)arg3;
- (id)initWithDictionary:(id)arg1 tldList:(id)arg2 delegate:(id)arg3 sharedApplication:(id)arg4;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

