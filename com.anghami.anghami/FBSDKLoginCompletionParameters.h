//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSError, NSSet, NSString;

@interface FBSDKLoginCompletionParameters : NSObject
{
    _Bool _systemAccount;
    NSString *_accessTokenString;
    NSSet *_permissions;
    NSSet *_declinedPermissions;
    NSString *_appID;
    NSString *_userID;
    NSError *_error;
    NSDate *_expirationDate;
    NSDate *_dataAccessExpirationDate;
    NSString *_challenge;
}

@property(copy, nonatomic) NSString *challenge; // @synthesize challenge=_challenge;
@property(copy, nonatomic) NSDate *dataAccessExpirationDate; // @synthesize dataAccessExpirationDate=_dataAccessExpirationDate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic, getter=isSystemAccount) _Bool systemAccount; // @synthesize systemAccount=_systemAccount;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSSet *declinedPermissions; // @synthesize declinedPermissions=_declinedPermissions;
@property(copy, nonatomic) NSSet *permissions; // @synthesize permissions=_permissions;
@property(copy, nonatomic) NSString *accessTokenString; // @synthesize accessTokenString=_accessTokenString;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1;
- (id)init;

@end

