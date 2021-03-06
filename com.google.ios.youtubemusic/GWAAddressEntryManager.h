//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWAAddressValidationManager, GWAAutocompleteAddressSource, NSArray, NSDictionary, NSSet, NSString, OrchAddressFormValue;

@interface GWAAddressEntryManager : NSObject
{
    NSString *_regionCode;
    NSDictionary *_initialI18nResponse;
    _Bool _includePhone;
    _Bool _includeRecipient;
    _Bool _collectMinAddress;
    NSString *_recipientNamePlaceholder;
    GWAAutocompleteAddressSource *_autocompleteAddressSource;
    long long _autocompleteRequestCounter;
    NSSet *_readOnlyFields;
    NSSet *_hiddenFields;
    GWAAddressValidationManager *_validationManager;
    NSArray *_fields;
    OrchAddressFormValue *_addressValue;
}

+ (id)fieldTypesWithExpandedAddressLines:(id)arg1;
+ (id)keysFromFormat:(id)arg1;
+ (id)addressFormatDataFromString:(id)arg1;
+ (id)addressEntryManagerWithInitialI18nResponse:(id)arg1 initialValue:(id)arg2 readOnlyFields:(id)arg3 hiddenFields:(id)arg4 includePhone:(_Bool)arg5 collectMinAddress:(_Bool)arg6 recipientNamePlaceholder:(id)arg7;
@property(readonly, nonatomic) OrchAddressFormValue *addressValue; // @synthesize addressValue=_addressValue;
@property(readonly, nonatomic) NSArray *fields; // @synthesize fields=_fields;
- (void).cxx_destruct;
- (id)valueForFieldType:(long long)arg1;
- (id)placeholderForFieldType:(long long)arg1;
- (id)fieldsFromFieldTypes:(id)arg1 region:(id)arg2;
- (void)processI18NResponse:(id)arg1;
- (void)resetWithI18NResponse:(id)arg1;
- (id)validationMessageForFieldType:(long long)arg1;
- (_Bool)hasErrors;
- (void)loadAutocompleteSuggestionsForInput:(id)arg1 fieldType:(long long)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setValue:(id)arg1 forField:(long long)arg2;
- (id)initWithInitialI18nResponse:(id)arg1 initialValue:(id)arg2 readOnlyFields:(id)arg3 hiddenFields:(id)arg4 includePhone:(_Bool)arg5 collectMinAddress:(_Bool)arg6 recipientNamePlaceholder:(id)arg7;
- (id)init;

@end

