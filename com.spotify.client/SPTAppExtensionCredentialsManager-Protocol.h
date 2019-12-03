//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTAppExtensionKeychainCredentials;
@protocol SPTLoginSession;

@protocol SPTAppExtensionCredentialsManager <NSObject>
- (NSString *)hermesAccessToken;
- (_Bool)deleteHermesAccessToken;
- (void)setHermesAccessToken:(NSString *)arg1;
- (id <SPTLoginSession>)storedLoginSession;
- (_Bool)deleteStoredLoginSession;
- (void)setStoredLoginSession:(id <SPTLoginSession>)arg1;
- (SPTAppExtensionKeychainCredentials *)appExtensionCredentials;
- (_Bool)deleteAppExtensionCredentials;
- (void)setAppExtensionCredentials:(SPTAppExtensionKeychainCredentials *)arg1;
@end

