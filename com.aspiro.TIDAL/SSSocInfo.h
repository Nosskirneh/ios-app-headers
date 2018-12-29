//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSBaseResponseObject.h"

@class NSString;

@interface SSSocInfo : SSBaseResponseObject
{
    int _activeStatus;
    NSString *_code;
    NSString *_desc;
    NSString *_recurringCharge;
    NSString *_oneTimeCharge;
    NSString *_contractMonths;
    NSString *_startDate;
    NSString *_expiryDate;
    NSString *_category;
}

+ (id)infoWithJSON:(id)arg1;
@property(nonatomic) int activeStatus; // @synthesize activeStatus=_activeStatus;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(retain, nonatomic) NSString *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *contractMonths; // @synthesize contractMonths=_contractMonths;
@property(retain, nonatomic) NSString *oneTimeCharge; // @synthesize oneTimeCharge=_oneTimeCharge;
@property(retain, nonatomic) NSString *recurringCharge; // @synthesize recurringCharge=_recurringCharge;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initInternal;

@end
