//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiDeviceManagement, MobileApiPlan, NSArray, NSDictionary;

@interface MobileApiConfiguration : MTLModel <MTLJSONSerializing>
{
    NSArray *_features;
    MobileApiPlan *_plan;
    MobileApiDeviceManagement *_deviceManagement;
    NSArray *_assignments;
    NSDictionary *_privacySettings;
}

+ (id)planJSONTransformer;
+ (id)deviceManagementJSONTransformer;
+ (id)featuresJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSDictionary *privacySettings; // @synthesize privacySettings=_privacySettings;
@property(retain, nonatomic) NSArray *assignments; // @synthesize assignments=_assignments;
@property(retain, nonatomic) MobileApiDeviceManagement *deviceManagement; // @synthesize deviceManagement=_deviceManagement;
@property(retain, nonatomic) MobileApiPlan *plan; // @synthesize plan=_plan;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
- (void).cxx_destruct;
- (_Bool)configurationIsValid;
- (_Bool)validate:(id *)arg1;

@end
