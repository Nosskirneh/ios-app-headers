//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSData, NSMutableArray, NSString, OrchAddressFormValue, OrchFormHeader, OrchTooltip;

@interface OrchAddressForm : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *addAnotherAddressLabel; // @dynamic addAnotherAddressLabel;
@property(retain, nonatomic) NSMutableArray *additionalFieldsArray; // @dynamic additionalFieldsArray;
@property(readonly, nonatomic) unsigned long long additionalFieldsArray_Count; // @dynamic additionalFieldsArray_Count;
@property(nonatomic) int addressFormDisplayType; // @dynamic addressFormDisplayType;
@property(copy, nonatomic) NSData *addressValidationTypeToken; // @dynamic addressValidationTypeToken;
@property(retain, nonatomic) NSMutableArray *allowedCountryArray; // @dynamic allowedCountryArray;
@property(readonly, nonatomic) unsigned long long allowedCountryArray_Count; // @dynamic allowedCountryArray_Count;
@property(retain, nonatomic) NSMutableArray *allowedCountryCodeArray; // @dynamic allowedCountryCodeArray;
@property(readonly, nonatomic) unsigned long long allowedCountryCodeArray_Count; // @dynamic allowedCountryCodeArray_Count;
@property(retain, nonatomic) NSMutableArray *availableOptionArray; // @dynamic availableOptionArray;
@property(readonly, nonatomic) unsigned long long availableOptionArray_Count; // @dynamic availableOptionArray_Count;
@property(copy, nonatomic) NSString *collapsedHint; // @dynamic collapsedHint;
@property(nonatomic) _Bool collapsible; // @dynamic collapsible;
@property(nonatomic) long long countryFieldUiReference; // @dynamic countryFieldUiReference;
@property(copy, nonatomic) NSString *countryLabel; // @dynamic countryLabel;
@property(copy, nonatomic) NSData *dataToken; // @dynamic dataToken;
@property(nonatomic) long long defaultAddressFormUiReference; // @dynamic defaultAddressFormUiReference;
@property(nonatomic) _Bool disableAddingAnotherAddress; // @dynamic disableAddingAnotherAddress;
@property(copy, nonatomic) NSString *disallowedCountryMessage; // @dynamic disallowedCountryMessage;
@property(nonatomic) _Bool enableClearInitialAddress; // @dynamic enableClearInitialAddress;
@property(retain, nonatomic) OrchFormHeader *formHeader; // @dynamic formHeader;
@property(nonatomic) _Bool hasAddAnotherAddressLabel; // @dynamic hasAddAnotherAddressLabel;
@property(nonatomic) _Bool hasAddressFormDisplayType; // @dynamic hasAddressFormDisplayType;
@property(nonatomic) _Bool hasAddressValidationTypeToken; // @dynamic hasAddressValidationTypeToken;
@property(nonatomic) _Bool hasCollapsedHint; // @dynamic hasCollapsedHint;
@property(nonatomic) _Bool hasCollapsible; // @dynamic hasCollapsible;
@property(nonatomic) _Bool hasCountryFieldUiReference; // @dynamic hasCountryFieldUiReference;
@property(nonatomic) _Bool hasCountryLabel; // @dynamic hasCountryLabel;
@property(nonatomic) _Bool hasDataToken; // @dynamic hasDataToken;
@property(nonatomic) _Bool hasDefaultAddressFormUiReference; // @dynamic hasDefaultAddressFormUiReference;
@property(nonatomic) _Bool hasDisableAddingAnotherAddress; // @dynamic hasDisableAddingAnotherAddress;
@property(nonatomic) _Bool hasDisallowedCountryMessage; // @dynamic hasDisallowedCountryMessage;
@property(nonatomic) _Bool hasEnableClearInitialAddress; // @dynamic hasEnableClearInitialAddress;
@property(nonatomic) _Bool hasFormHeader; // @dynamic hasFormHeader;
@property(nonatomic) _Bool hasHideCountrySelector; // @dynamic hasHideCountrySelector;
@property(nonatomic) _Bool hasHideFormFieldsToggleLabel; // @dynamic hasHideFormFieldsToggleLabel;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasInitialAvailableOptionIndex; // @dynamic hasInitialAvailableOptionIndex;
@property(nonatomic) _Bool hasInitialCountryI18NDataJson; // @dynamic hasInitialCountryI18NDataJson;
@property(nonatomic) _Bool hasInitialValue; // @dynamic hasInitialValue;
@property(nonatomic) _Bool hasIsReadOnly; // @dynamic hasIsReadOnly;
@property(nonatomic) _Bool hasLocaleOverride; // @dynamic hasLocaleOverride;
@property(nonatomic) _Bool hasNewAddressSelectedUiReference; // @dynamic hasNewAddressSelectedUiReference;
@property(nonatomic) _Bool hasNoOptionSelectedErrorMessage; // @dynamic hasNoOptionSelectedErrorMessage;
@property(nonatomic) _Bool hasOrganizationFieldForMinAddress; // @dynamic hasOrganizationFieldForMinAddress;
@property(nonatomic) _Bool hasOrganizationFieldUiReference; // @dynamic hasOrganizationFieldUiReference;
@property(nonatomic) _Bool hasPhoneNumberFieldForMinAddress; // @dynamic hasPhoneNumberFieldForMinAddress;
@property(nonatomic) _Bool hasPhoneNumberForm; // @dynamic hasPhoneNumberForm;
@property(nonatomic) _Bool hasPreselectedOptionReference; // @dynamic hasPreselectedOptionReference;
@property(nonatomic) _Bool hasReadonlyLabel; // @dynamic hasReadonlyLabel;
@property(nonatomic) _Bool hasRecipientFieldUiReference; // @dynamic hasRecipientFieldUiReference;
@property(nonatomic) _Bool hasRecipientLabel; // @dynamic hasRecipientLabel;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTooltip; // @dynamic hasTooltip;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) _Bool hasUnselectedUiReference; // @dynamic hasUnselectedUiReference;
@property(retain, nonatomic) GPBEnumArray *hiddenFieldArray; // @dynamic hiddenFieldArray;
@property(readonly, nonatomic) unsigned long long hiddenFieldArray_Count; // @dynamic hiddenFieldArray_Count;
@property(nonatomic) _Bool hideCountrySelector; // @dynamic hideCountrySelector;
@property(copy, nonatomic) NSString *hideFormFieldsToggleLabel; // @dynamic hideFormFieldsToggleLabel;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int initialAvailableOptionIndex; // @dynamic initialAvailableOptionIndex;
@property(copy, nonatomic) NSString *initialCountryI18NDataJson; // @dynamic initialCountryI18NDataJson;
@property(retain, nonatomic) OrchAddressFormValue *initialValue; // @dynamic initialValue;
@property(nonatomic) _Bool isReadOnly; // @dynamic isReadOnly;
@property(copy, nonatomic) NSString *localeOverride; // @dynamic localeOverride;
@property(nonatomic) long long newAddressSelectedUiReference; // @dynamic newAddressSelectedUiReference;
@property(copy, nonatomic) NSString *noOptionSelectedErrorMessage; // @dynamic noOptionSelectedErrorMessage;
@property(retain, nonatomic) GPBEnumArray *optionalFieldArray; // @dynamic optionalFieldArray;
@property(readonly, nonatomic) unsigned long long optionalFieldArray_Count; // @dynamic optionalFieldArray_Count;
@property(nonatomic) _Bool organizationFieldForMinAddress; // @dynamic organizationFieldForMinAddress;
@property(nonatomic) long long organizationFieldUiReference; // @dynamic organizationFieldUiReference;
@property(nonatomic) _Bool phoneNumberFieldForMinAddress; // @dynamic phoneNumberFieldForMinAddress;
@property(nonatomic) _Bool phoneNumberForm; // @dynamic phoneNumberForm;
@property(retain, nonatomic) NSMutableArray *postalCodeOnlyCountryCodeArray; // @dynamic postalCodeOnlyCountryCodeArray;
@property(readonly, nonatomic) unsigned long long postalCodeOnlyCountryCodeArray_Count; // @dynamic postalCodeOnlyCountryCodeArray_Count;
@property(nonatomic) long long preselectedOptionReference; // @dynamic preselectedOptionReference;
@property(retain, nonatomic) GPBEnumArray *readOnlyFieldArray; // @dynamic readOnlyFieldArray;
@property(readonly, nonatomic) unsigned long long readOnlyFieldArray_Count; // @dynamic readOnlyFieldArray_Count;
@property(copy, nonatomic) NSString *readonlyLabel; // @dynamic readonlyLabel;
@property(nonatomic) long long recipientFieldUiReference; // @dynamic recipientFieldUiReference;
@property(copy, nonatomic) NSString *recipientLabel; // @dynamic recipientLabel;
@property(retain, nonatomic) NSMutableArray *structuredAddressCountryCodeArray; // @dynamic structuredAddressCountryCodeArray;
@property(readonly, nonatomic) unsigned long long structuredAddressCountryCodeArray_Count; // @dynamic structuredAddressCountryCodeArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) OrchTooltip *tooltip; // @dynamic tooltip;
@property(nonatomic) long long uiReference; // @dynamic uiReference;
@property(nonatomic) long long unselectedUiReference; // @dynamic unselectedUiReference;

@end

