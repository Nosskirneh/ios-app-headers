//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SwrveRESTClient;

@interface SwrveQA : NSObject
{
    _Bool _isQALogging;
    NSString *_apiKey;
    long long _appID;
    NSString *_userID;
    NSString *_baseURL;
    NSString *_appVersion;
    NSNumber *_deviceID;
    NSString *_sessionToken;
    SwrveRESTClient *restClient;
}

+ (id)locationCampaignEngagedID:(id)arg1 variantID:(id)arg2 plotID:(id)arg3 payload:(id)arg4;
+ (id)locationCampaignDownloaded;
+ (id)locationCampaignTriggered:(id)arg1;
+ (void)makeRequest:(id)arg1;
+ (void)updateQAUser:(id)arg1;
+ (id)sharedInstance;
@property(retain) SwrveRESTClient *restClient; // @synthesize restClient;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) long long appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(nonatomic) _Bool isQALogging; // @synthesize isQALogging=_isQALogging;
- (void).cxx_destruct;
- (id)locationCampaignEngagedID:(id)arg1 variantID:(id)arg2 plotID:(id)arg3 payload:(id)arg4;
- (id)locationCampaignDownloaded:(id)arg1;
- (id)cachedLocationCampaigns;
- (id)locationCampaignTriggered:(id)arg1;
- (void)makeRequest:(id)arg1;
- (id)createJSONForEvent:(id)arg1;
- (long long)nextEventSequenceNumber;
- (id)getTimeFormatted;
- (id)createSessionToken;
- (void)updateQAUser:(id)arg1;

@end
