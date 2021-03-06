//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NBPhoneNumberDesc, NSMutableArray, NSNumber, NSString;

@interface NBPhoneMetaData : NSObject
{
    _Bool _sameMobileAndFixedLinePattern;
    _Bool _mainCountryForCode;
    _Bool _leadingZeroPossible;
    NBPhoneNumberDesc *_generalDesc;
    NBPhoneNumberDesc *_fixedLine;
    NBPhoneNumberDesc *_mobile;
    NBPhoneNumberDesc *_tollFree;
    NBPhoneNumberDesc *_premiumRate;
    NBPhoneNumberDesc *_sharedCost;
    NBPhoneNumberDesc *_personalNumber;
    NBPhoneNumberDesc *_voip;
    NBPhoneNumberDesc *_pager;
    NBPhoneNumberDesc *_uan;
    NBPhoneNumberDesc *_emergency;
    NBPhoneNumberDesc *_voicemail;
    NBPhoneNumberDesc *_noInternationalDialling;
    NSString *_codeID;
    NSNumber *_countryCode;
    NSString *_internationalPrefix;
    NSString *_preferredInternationalPrefix;
    NSString *_nationalPrefix;
    NSString *_preferredExtnPrefix;
    NSString *_nationalPrefixForParsing;
    NSString *_nationalPrefixTransformRule;
    NSMutableArray *_numberFormats;
    NSMutableArray *_intlNumberFormats;
    NSString *_leadingDigits;
}

@property(nonatomic) _Bool leadingZeroPossible; // @synthesize leadingZeroPossible=_leadingZeroPossible;
@property(retain, nonatomic) NSString *leadingDigits; // @synthesize leadingDigits=_leadingDigits;
@property(nonatomic) _Bool mainCountryForCode; // @synthesize mainCountryForCode=_mainCountryForCode;
@property(retain, nonatomic) NSMutableArray *intlNumberFormats; // @synthesize intlNumberFormats=_intlNumberFormats;
@property(retain, nonatomic) NSMutableArray *numberFormats; // @synthesize numberFormats=_numberFormats;
@property(nonatomic) _Bool sameMobileAndFixedLinePattern; // @synthesize sameMobileAndFixedLinePattern=_sameMobileAndFixedLinePattern;
@property(retain, nonatomic) NSString *nationalPrefixTransformRule; // @synthesize nationalPrefixTransformRule=_nationalPrefixTransformRule;
@property(retain, nonatomic) NSString *nationalPrefixForParsing; // @synthesize nationalPrefixForParsing=_nationalPrefixForParsing;
@property(retain, nonatomic) NSString *preferredExtnPrefix; // @synthesize preferredExtnPrefix=_preferredExtnPrefix;
@property(retain, nonatomic) NSString *nationalPrefix; // @synthesize nationalPrefix=_nationalPrefix;
@property(retain, nonatomic) NSString *preferredInternationalPrefix; // @synthesize preferredInternationalPrefix=_preferredInternationalPrefix;
@property(retain, nonatomic) NSString *internationalPrefix; // @synthesize internationalPrefix=_internationalPrefix;
@property(retain, nonatomic) NSNumber *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *codeID; // @synthesize codeID=_codeID;
@property(retain, nonatomic) NBPhoneNumberDesc *noInternationalDialling; // @synthesize noInternationalDialling=_noInternationalDialling;
@property(retain, nonatomic) NBPhoneNumberDesc *voicemail; // @synthesize voicemail=_voicemail;
@property(retain, nonatomic) NBPhoneNumberDesc *emergency; // @synthesize emergency=_emergency;
@property(retain, nonatomic) NBPhoneNumberDesc *uan; // @synthesize uan=_uan;
@property(retain, nonatomic) NBPhoneNumberDesc *pager; // @synthesize pager=_pager;
@property(retain, nonatomic) NBPhoneNumberDesc *voip; // @synthesize voip=_voip;
@property(retain, nonatomic) NBPhoneNumberDesc *personalNumber; // @synthesize personalNumber=_personalNumber;
@property(retain, nonatomic) NBPhoneNumberDesc *sharedCost; // @synthesize sharedCost=_sharedCost;
@property(retain, nonatomic) NBPhoneNumberDesc *premiumRate; // @synthesize premiumRate=_premiumRate;
@property(retain, nonatomic) NBPhoneNumberDesc *tollFree; // @synthesize tollFree=_tollFree;
@property(retain, nonatomic) NBPhoneNumberDesc *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NBPhoneNumberDesc *fixedLine; // @synthesize fixedLine=_fixedLine;
@property(retain, nonatomic) NBPhoneNumberDesc *generalDesc; // @synthesize generalDesc=_generalDesc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

