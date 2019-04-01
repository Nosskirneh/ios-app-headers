//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class FXKeychain, NSArray, NSDate, NSNumber, NSString;

@interface VCAccountInfo : NSObject <NSSecureCoding>
{
    _Bool _isAppleSubscription;
    _Bool _emailConfirmationNeeded;
    _Bool _isLoggedInOnlyOniOS;
    FXKeychain *_unsecuredKeyChain;
    NSString *_token;
    NSString *_mlAccessToken;
    NSString *_mlRefreshToken;
    NSString *_mlUserId;
    NSString *_cryptedPassword;
    NSString *_facebookAccessToken;
    NSString *_facebookiOSAccessToken;
    NSString *_name;
    NSString *_login;
    NSNumber *_currentDeviceId;
    NSDate *_loginDate;
    NSNumber *_accountType;
    NSDate *_expirationDate;
    NSString *_subscriptionPeriod;
    NSString *_subscriptionStatus;
    long long _subscriptionGracePeriod;
    NSArray *_clouds;
    NSNumber *_lastSync;
    NSNumber *_lastSyncFileID;
    NSNumber *_mlSyncValue;
    NSString *_pass;
}

+ (_Bool)supportsSecureCoding;
+ (id)currentAccount;
+ (id)pathToAccountFile;
@property(retain, nonatomic) NSString *pass; // @synthesize pass=_pass;
@property(nonatomic) _Bool isLoggedInOnlyOniOS; // @synthesize isLoggedInOnlyOniOS=_isLoggedInOnlyOniOS;
@property(retain, nonatomic) NSNumber *mlSyncValue; // @synthesize mlSyncValue=_mlSyncValue;
@property(retain, nonatomic) NSNumber *lastSyncFileID; // @synthesize lastSyncFileID=_lastSyncFileID;
@property(retain, nonatomic) NSNumber *lastSync; // @synthesize lastSync=_lastSync;
@property(retain, nonatomic) NSArray *clouds; // @synthesize clouds=_clouds;
@property(nonatomic) _Bool emailConfirmationNeeded; // @synthesize emailConfirmationNeeded=_emailConfirmationNeeded;
@property(nonatomic) _Bool isAppleSubscription; // @synthesize isAppleSubscription=_isAppleSubscription;
@property(nonatomic) long long subscriptionGracePeriod; // @synthesize subscriptionGracePeriod=_subscriptionGracePeriod;
@property(retain, nonatomic) NSString *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(retain, nonatomic) NSString *subscriptionPeriod; // @synthesize subscriptionPeriod=_subscriptionPeriod;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSNumber *accountType; // @synthesize accountType=_accountType;
@property(retain, nonatomic) NSDate *loginDate; // @synthesize loginDate=_loginDate;
@property(retain, nonatomic) NSNumber *currentDeviceId; // @synthesize currentDeviceId=_currentDeviceId;
@property(retain, nonatomic) NSString *login; // @synthesize login=_login;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
@property(readonly, nonatomic) FXKeychain *unsecuredKeyChain; // @synthesize unsecuredKeyChain=_unsecuredKeyChain;
@property(retain, nonatomic) NSString *facebookiOSAccessToken; // @synthesize facebookiOSAccessToken=_facebookiOSAccessToken;
@property(retain, nonatomic) NSString *facebookAccessToken; // @synthesize facebookAccessToken=_facebookAccessToken;
@property(retain, nonatomic) NSString *mlUserId; // @synthesize mlUserId=_mlUserId;
@property(retain, nonatomic) NSString *mlRefreshToken; // @synthesize mlRefreshToken=_mlRefreshToken;
@property(retain, nonatomic) NSString *mlAccessToken; // @synthesize mlAccessToken=_mlAccessToken;
@property(retain, nonatomic) NSString *cryptedPassword; // @synthesize cryptedPassword=_cryptedPassword;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)save;
- (void)clean;
- (void)updateWithDictionary:(id)arg1;
- (void)updateMediaLibraryUserID:(id)arg1 andAccessToken:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

