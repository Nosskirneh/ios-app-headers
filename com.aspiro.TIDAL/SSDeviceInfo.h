//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSString, SSUiccInfo;

@interface SSDeviceInfo : SSBaseResponseObject
{
    NSString *_defaultBrand;
    NSString *_financialEligibilityDate;
    NSString *_lockStatus;
    NSString *_meid;
    NSString *_modelName;
    NSString *_msl;
    SSUiccInfo *_pairedUicc;
    NSString *_sku;
}

+ (id)infoWithJSON:(id)arg1;
@property(retain, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) SSUiccInfo *pairedUicc; // @synthesize pairedUicc=_pairedUicc;
@property(retain, nonatomic) NSString *msl; // @synthesize msl=_msl;
@property(retain, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(retain, nonatomic) NSString *meid; // @synthesize meid=_meid;
@property(retain, nonatomic) NSString *lockStatus; // @synthesize lockStatus=_lockStatus;
@property(retain, nonatomic) NSString *financialEligibilityDate; // @synthesize financialEligibilityDate=_financialEligibilityDate;
@property(retain, nonatomic) NSString *defaultBrand; // @synthesize defaultBrand=_defaultBrand;
- (void).cxx_destruct;
- (id)initInternal;
- (id)description;

@end
