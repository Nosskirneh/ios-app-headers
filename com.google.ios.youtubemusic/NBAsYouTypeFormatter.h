//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NBPhoneMetaData, NBPhoneNumberUtil, NSMutableArray, NSMutableString, NSRegularExpression, NSString;

@interface NBAsYouTypeFormatter : NSObject
{
    _Bool _isSuccessfulFormatting;
    _Bool _ableToFormat_;
    _Bool _inputHasFormatting_;
    _Bool _isCompleteNumber_;
    _Bool _isExpectingCountryCallingCode_;
    _Bool _shouldAddSpaceAfterNationalPrefix_;
    NSString *_currentOutput_;
    NSString *_currentFormattingPattern_;
    NSString *_defaultCountry_;
    NSString *_nationalPrefixExtracted_;
    NSMutableString *_formattingTemplate_;
    NSMutableString *_accruedInput_;
    NSMutableString *_prefixBeforeNationalNumber_;
    NSMutableString *_accruedInputWithoutFormatting_;
    NSMutableString *_nationalNumber_;
    NSRegularExpression *_DIGIT_PATTERN_;
    NSRegularExpression *_NATIONAL_PREFIX_SEPARATORS_PATTERN_;
    NSRegularExpression *_CHARACTER_CLASS_PATTERN_;
    NSRegularExpression *_STANDALONE_DIGIT_PATTERN_;
    NSRegularExpression *_ELIGIBLE_FORMAT_PATTERN_;
    NBPhoneNumberUtil *_phoneUtil_;
    unsigned long long _lastMatchPosition_;
    unsigned long long _originalPosition_;
    unsigned long long _positionToRemember_;
    NSMutableArray *_possibleFormats_;
    NBPhoneMetaData *_currentMetaData_;
    NBPhoneMetaData *_defaultMetaData_;
}

@property(retain, nonatomic) NBPhoneMetaData *defaultMetaData_; // @synthesize defaultMetaData_=_defaultMetaData_;
@property(retain, nonatomic) NBPhoneMetaData *currentMetaData_; // @synthesize currentMetaData_=_currentMetaData_;
@property(retain, nonatomic) NSMutableArray *possibleFormats_; // @synthesize possibleFormats_=_possibleFormats_;
@property(nonatomic) unsigned long long positionToRemember_; // @synthesize positionToRemember_=_positionToRemember_;
@property(nonatomic) unsigned long long originalPosition_; // @synthesize originalPosition_=_originalPosition_;
@property(nonatomic) unsigned long long lastMatchPosition_; // @synthesize lastMatchPosition_=_lastMatchPosition_;
@property(retain, nonatomic) NBPhoneNumberUtil *phoneUtil_; // @synthesize phoneUtil_=_phoneUtil_;
@property(nonatomic) _Bool shouldAddSpaceAfterNationalPrefix_; // @synthesize shouldAddSpaceAfterNationalPrefix_=_shouldAddSpaceAfterNationalPrefix_;
@property(nonatomic) _Bool isExpectingCountryCallingCode_; // @synthesize isExpectingCountryCallingCode_=_isExpectingCountryCallingCode_;
@property(nonatomic) _Bool isCompleteNumber_; // @synthesize isCompleteNumber_=_isCompleteNumber_;
@property(nonatomic) _Bool inputHasFormatting_; // @synthesize inputHasFormatting_=_inputHasFormatting_;
@property(nonatomic) _Bool ableToFormat_; // @synthesize ableToFormat_=_ableToFormat_;
@property(retain, nonatomic) NSRegularExpression *ELIGIBLE_FORMAT_PATTERN_; // @synthesize ELIGIBLE_FORMAT_PATTERN_=_ELIGIBLE_FORMAT_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *STANDALONE_DIGIT_PATTERN_; // @synthesize STANDALONE_DIGIT_PATTERN_=_STANDALONE_DIGIT_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *CHARACTER_CLASS_PATTERN_; // @synthesize CHARACTER_CLASS_PATTERN_=_CHARACTER_CLASS_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *NATIONAL_PREFIX_SEPARATORS_PATTERN_; // @synthesize NATIONAL_PREFIX_SEPARATORS_PATTERN_=_NATIONAL_PREFIX_SEPARATORS_PATTERN_;
@property(retain, nonatomic) NSRegularExpression *DIGIT_PATTERN_; // @synthesize DIGIT_PATTERN_=_DIGIT_PATTERN_;
@property(retain, nonatomic) NSMutableString *nationalNumber_; // @synthesize nationalNumber_=_nationalNumber_;
@property(retain, nonatomic) NSMutableString *accruedInputWithoutFormatting_; // @synthesize accruedInputWithoutFormatting_=_accruedInputWithoutFormatting_;
@property(retain, nonatomic) NSMutableString *prefixBeforeNationalNumber_; // @synthesize prefixBeforeNationalNumber_=_prefixBeforeNationalNumber_;
@property(retain, nonatomic) NSMutableString *accruedInput_; // @synthesize accruedInput_=_accruedInput_;
@property(retain, nonatomic) NSMutableString *formattingTemplate_; // @synthesize formattingTemplate_=_formattingTemplate_;
@property(retain, nonatomic) NSString *nationalPrefixExtracted_; // @synthesize nationalPrefixExtracted_=_nationalPrefixExtracted_;
@property(retain, nonatomic) NSString *defaultCountry_; // @synthesize defaultCountry_=_defaultCountry_;
@property(retain, nonatomic) NSString *currentFormattingPattern_; // @synthesize currentFormattingPattern_=_currentFormattingPattern_;
@property(retain, nonatomic) NSString *currentOutput_; // @synthesize currentOutput_=_currentOutput_;
@property(readonly, nonatomic) _Bool isSuccessfulFormatting; // @synthesize isSuccessfulFormatting=_isSuccessfulFormatting;
- (void).cxx_destruct;
- (id)description;
- (id)inputDigitHelper_:(id)arg1;
- (id)normalizeAndAccrueDigitsAndPlusSign_:(id)arg1 rememberPosition:(_Bool)arg2;
- (_Bool)attemptToExtractCountryCallingCode_;
- (_Bool)attemptToExtractIdd_;
- (id)removeNationalPrefixFromNationalNumber_;
- (_Bool)isNanpaNumberWithNationalPrefix_;
- (id)inputAccruedNationalNumber_;
- (id)attemptToChooseFormattingPattern_;
- (long long)getRememberedPosition;
- (id)appendNationalNumber_:(id)arg1;
- (id)attemptToFormatAccruedDigits_;
- (_Bool)isDigitOrLeadingPlusSign_:(id)arg1;
- (_Bool)ableToExtractLongerNdd_;
- (id)attemptToChoosePatternWithPrefixExtracted_;
- (id)inputDigitWithOptionToRememberPosition_:(id)arg1 rememberPosition:(_Bool)arg2;
- (id)inputDigitAndRememberPosition:(id)arg1;
- (id)inputDigit:(id)arg1;
- (id)inputString:(id)arg1;
- (id)inputStringAndRememberPosition:(id)arg1;
- (id)removeLastDigit;
- (id)removeLastDigitAndRememberPosition;
- (void)clear;
- (id)getFormattingTemplate_:(id)arg1 numberFormat:(id)arg2;
- (_Bool)createFormattingTemplate_:(id)arg1;
- (void)narrowDownPossibleFormats_:(id)arg1;
- (_Bool)isFormatEligible_:(id)arg1;
- (void)getAvailableFormats_:(id)arg1;
- (_Bool)maybeCreateNewTemplate_;
- (id)getMetadataForRegion_:(id)arg1;
- (id)initWithRegionCode:(id)arg1 bundle:(id)arg2;
- (id)initWithRegionCode:(id)arg1;
- (id)init;

@end

