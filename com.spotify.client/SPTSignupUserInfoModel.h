//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupDataLoaderDelegate-Protocol.h"

@class NSCalendar, NSDate, NSDictionary, NSString, NSURL, SPTSignupMarketRestrictionsModel;

@interface SPTSignupUserInfoModel : NSObject <SPTSignupDataLoaderDelegate>
{
    _Bool _userAcceptTermsAndConditions;
    NSString *_email;
    NSString *_password;
    NSDate *_birthday;
    NSString *_gender;
    NSString *_displayName;
    SPTSignupMarketRestrictionsModel *_marketRestrictions;
    NSDictionary *_facebookUserInfo;
    NSDictionary *_configuration;
    NSCalendar *_calendar;
}

@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSDictionary *facebookUserInfo; // @synthesize facebookUserInfo=_facebookUserInfo;
@property(retain, nonatomic) SPTSignupMarketRestrictionsModel *marketRestrictions; // @synthesize marketRestrictions=_marketRestrictions;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic, getter=didUserAcceptTermsAndConditions) _Bool userAcceptTermsAndConditions; // @synthesize userAcceptTermsAndConditions=_userAcceptTermsAndConditions;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)dataLoaderFinishLoadingWithSuccess:(id)arg1;
@property(readonly, nonatomic, getter=isNeutralGenderOptionEnabled) _Bool neutralGenderOptionEnabled;
@property(readonly, nonatomic) NSURL *facebookUserProfilePictureURL;
@property(readonly, nonatomic) NSString *facebookUserEmail;
@property(readonly, nonatomic) NSString *facebookUserName;
@property(readonly, nonatomic) NSString *facebookUserId;
@property(readonly, nonatomic) NSString *facebookUserAccessToken;
@property(readonly, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) NSDictionary *requiredCreateFacebookUserRequestParameters;
@property(readonly, nonatomic) NSDictionary *requiredCreateUserRequestParameters;
- (void)reset;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

