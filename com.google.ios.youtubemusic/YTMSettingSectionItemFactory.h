//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTMClientSettingsController;

@interface YTMSettingSectionItemFactory : NSObject
{
    YTMClientSettingsController *_clientSettingsController;
    GIMMe *_gimme;
}

+ (id)stringValueOfClientSettingForRenderer:(id)arg1 clientSettingsController:(id)arg2;
+ (id)activityMasterSwitchEndpoint:(_Bool)arg1;
+ (id)musicRecordConsentChangeCommandWithMasterSwitchValue:(_Bool)arg1;
+ (id)booleanSettingItemFromActivityMasterSwitchRenderer:(id)arg1 clientSettingsController:(id)arg2 firstResponder:(id)arg3;
+ (id)booleanSettingItemFromLocationMasterSwitchRenderer:(id)arg1 clientSettingsController:(id)arg2 firstResponder:(id)arg3;
+ (id)singleOptionMenuSettingItemFromRenderer:(id)arg1 clientSettingsController:(id)arg2 firstResponder:(id)arg3;
+ (id)readonlySettingItemFromRenderer:(id)arg1 firstResponder:(id)arg2;
+ (id)booleanSettingItemFromRenderer:(id)arg1 clientSettingsController:(id)arg2 firstResponder:(id)arg3;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)sectionItemForRenderer:(id)arg1 firstResponder:(id)arg2;
- (id)init;

@end

