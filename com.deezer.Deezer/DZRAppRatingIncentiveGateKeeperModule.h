//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DZRGateKeeperModule.h"

@class DZRAppStoreManager;

@interface DZRAppRatingIncentiveGateKeeperModule : DZRGateKeeperModule
{
    _Bool _appRatingIncentiveEnabled;
    DZRAppStoreManager *_appStoreManager;
}

+ (id)name;
@property(retain, nonatomic) DZRAppStoreManager *appStoreManager; // @synthesize appStoreManager=_appStoreManager;
@property(nonatomic, getter=isAppRatingIncentiveEnabled) _Bool appRatingIncentiveEnabled; // @synthesize appRatingIncentiveEnabled=_appRatingIncentiveEnabled;
- (void).cxx_destruct;
- (_Bool)shouldPromptForRating;
- (id)promptForRatingIfNotYetPromptedWithCompletion:(CDUnknownBlockType)arg1;
- (id)promptForUpdateWithCompletion:(CDUnknownBlockType)arg1;

@end

